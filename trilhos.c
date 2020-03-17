#include<stdio.h>
void main(int argc, char** argv){
    int nVag;
    char entrada[27], saida[27], pilha[27]={0}, x;
    int entr=0, said=0, topo=0;
    scanf("%d", &nVag);
    while (nVag>0){
        int i;
        for (i=0; i<nVag; ++i){
            scanf ("%c", entrada+i);
            scanf ("%c", &x);
        }
        for (i=0; i<nVag; ++i){
            scanf ("%c", &saida[i]);
            scanf ("%c", &x);
        }
        printf("%s\n", entrada);
        printf("%s\n", saida);
        while (said<nVag){
            if (topo>0 && pilha[topo-1] == saida[said]){
                topo--;
                said++;
                printf("I");
            }
            else if (entr<nVag){
                pilha[topo]=entrada[entr];
                topo++;
                entr++;
                printf("R");
            }
            else{
                printf (" Impossible\n");
                break;
            }
        }
        scanf("%d", &nVag);
    }
    return;
}


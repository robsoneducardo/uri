#include<stdio.h>
void main(int argc, char** argv){
    int nVag;
    char entrada[27], saida[27], pilha[27]={0}, x;
    int entr=0, said=0, topo=0;
    scanf("%d", &nVag);
    getchar();
    while (nVag>0){
        int i;
        entr=0;
        said=0;
        topo=0;
        for (i=0; i<nVag; ++i){
            scanf ("%c", &x);
            if (i!=nVag-1) getchar();
            entrada[i]=x;
        }
        getchar();
        for (i=0; i<nVag; ++i){
            scanf ("%c", &x);
            if (i!=nVag-1) getchar();
            saida[i]=x;
        }
        entrada[nVag]=0;
        saida[nVag]=0;
        //dados do problema lidos.
        while (said<nVag){
            printf("%s\n%s\n%s\n\n", entrada, pilha, saida);
            //se o topo da pilha concorda com a saída:
            if (topo>0 && pilha[topo-1] == saida[said]){
                //tira da pilha para a saida
                //printf("topo:%d\n", topo);
                topo--;
                said++;
                printf("R");
                //se zerou tudo:
                if (entr==nVag && topo==0){
                    //resolveu o problema.
                    printf("\n");
                    break;
                }
            }
            // se a pilha não concorda e tem entrada:
            else if (entr<nVag){
                //tras da entrada pra ela.
                //printf("topo->%d\n", topo);
                pilha[topo]=entrada[entr];
                topo++;
                entr++;
                printf("I");
            }
            // se a pilha não concorda e não tem entrada (deu ruim)
            else{
                printf (" Impossible\n");
                break;
            }
        }
        printf(">");
        scanf("%d", &nVag);
    }
    return;
}


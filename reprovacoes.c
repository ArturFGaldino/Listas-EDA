#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *resultado(int A, int S, int m)
{
    int *c = malloc(m * sizeof(int)), matriculados, aprovados, *reprovados = malloc(m * sizeof(int));
    int maior = -1, indiceMaior = 0;
    char *resultados = malloc(1000 * sizeof(char));
    char str[1000] = "";
    sprintf(resultados, "%d/%d\n", A, S);
    for(int i = 0; i < m; i++)
    {
       scanf("%d %d %d", &c[i], &matriculados, &aprovados);
        reprovados[i] = matriculados - aprovados;
        if(reprovados[i]>maior){
            maior = reprovados[i];
        }
    }
    
    for(int i = 0; i < m; i++)
    {
        if(reprovados[i] == maior)
        {
            sprintf(str, "%d ", c[i]);
            strcat(resultados, str);
        }
    }
    strcat(resultados,"\n");
    free(c);
    return resultados;
}

int main(int argc, char const *argv[])
{
    int D, A, S, m;
    char final[10000] = "";
    scanf("%d", &D);
    while(scanf("%d %d %d", &A, &S, &m) != EOF){
        strcat(final, resultado(A,S,m));
    }
    printf("%s", final);
    return 0;
}
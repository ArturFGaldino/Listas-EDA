#include <stdio.h>

int main(int argc, char const *argv[])
{
    int linhas;
    scanf("%d", &linhas);

    for(int i = 1; i <= linhas; i++)
    {
        int espacos = linhas - i;
        int asteriscos = 2 * i - 1; 
        for(int j = 1; j <= espacos; j++)
        {
                printf(" ");
        }
        for(int j = 1; j <= asteriscos; j++)
        {
                printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
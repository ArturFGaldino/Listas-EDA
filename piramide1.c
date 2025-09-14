#include <stdio.h> 

int main(int argc, char const *argv[])
{
    int linhas;
    scanf("%d", &linhas);

    for(int i = 1; i <= linhas; i++)
    {
        for(int j = 1; j <= i; j++)
        {
                printf("%02d ", i);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= linhas; i++)
    {
        for(int j = 1; j <= i; j++)
        {
                printf("%02d ", j);
        }
        printf("\n");
    }

    return 0;
}
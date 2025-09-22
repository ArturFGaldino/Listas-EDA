#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char aeroporto[100001], sigla[4];
    int i = 0, siglaTamanho, j = 0;
    scanf("%s", aeroporto);
    scanf("%s", sigla);
    
    for(int i = 0; sigla[i]; i++) {
            if(sigla[i] >= 'A' && sigla[i] <= 'Z') {
                sigla[i] = sigla[i] + 32;
            }
        }

    for(int i = 0; aeroporto[i]; i++) {
            if(aeroporto[i] >= 'A' && aeroporto[i] <= 'Z') {
                aeroporto[i] = aeroporto[i] + 32;
            }
        }

        if(sigla[2] == 'x') {
            siglaTamanho = 2;
        }
        else {
            siglaTamanho = 3;
        } 
            while(aeroporto[i] != '\0' && j < siglaTamanho) {
            if(aeroporto[i] == sigla[j]) {
                j++;
            }
            i++;
        }

    // printf("Contador: %d\n", contador);
        printf(j == siglaTamanho ? "Sim\n" : "Nao\n");
    return 0;
}
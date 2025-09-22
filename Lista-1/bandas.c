#include <stdio.h>
#include <string.h>

struct tipoBanda {
    char nome[80];
    int ano;
};

struct tipoShow {
    char nome[80];
    int qtd; // quantidade de bandas
    struct tipoBanda bandas[100];
};

void pesquisarNomeBanda(char pesquisa[80], struct tipoShow shows[50], int n) {
    int encontrado = 0;

    for (int i = 0; i < n; i++) { // percorre todos os shows
        for (int j = 0; j < shows[i].qtd; j++) { // percorre todas as bandas do show
            if (strcmp(shows[i].bandas[j].nome, pesquisa) == 0) {
                printf("%s : ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                encontrado = 1;
            }
        }
    }

    if (!encontrado) {
        printf("Banda nao cadastrada\n");
    }
}

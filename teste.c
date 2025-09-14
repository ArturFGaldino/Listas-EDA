#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

// Função para ordenar o vetor usando Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp; // Declaração de variáveis para os laços e a troca
    for (i = 0; i < n-1; i++) { // Laço externo para percorrer todas as posições
        for (j = 0; j < n-i-1; j++) { // Laço interno para comparações e trocas
            if (arr[j] > arr[j+1]) { // Se o elemento atual for maior que o próximo
                // Troca os elementos usando uma variável temporária
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]); // Imprime cada elemento do vetor
    printf("\n");
}

// Função principal para testar a ordenação
int main() {
    int meuVetor[] = {64, 34, 25, 12, 22, 11, 90}; // Vetor a ser ordenado
    int n = sizeof(meuVetor)/sizeof(meuVetor[0]); // Calcula o tamanho do vetor

    printf("Vetor original: \n");
    imprimirVetor(meuVetor, n); // Chama a função para imprimir o vetor original

    bubbleSort(meuVetor, n); // Chama a função para ordenar o vetor

    printf("Vetor ordenado: \n");
    imprimirVetor(meuVetor, n); // Chama a função para imprimir o vetor ordenado

    return 0; // Indica que o programa executou com sucesso
}
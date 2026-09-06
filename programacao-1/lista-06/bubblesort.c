#include <stdio.h>

void ordena(float v[], int tam) {
    int i, j; //i e j são contadores para percorrer o vetor
    float aux; //variável auxiliar para troca de valores

    for (i = 0; i <= (tam - 2); i++) { //o laço externo percorre até o penúltimo elemento do vetor
        for (j = tam - 1; j > i; j--) { //o laço interno percorre de trás para frente até a posição i+1
            if (v[j] < v[j - 1]) { //se o elemento atual for menor que o anterior, faz a troca
                aux = v[j]; //guarda o valor atual na variável auxiliar
                v[j] = v[j - 1]; //move o valor anterior para a posição atual
                v[j - 1] = aux; //coloca o valor guardado na posição anterior

                //impressões para acompanhar as trocas
                printf("i: %d\n", i); //mostra a posição do primeiro loop
                printf("j: %d\n", j); //mostra a posição do segundo loop
                printf("aux: %.2f\n", aux); //mostra o valor armazenado em aux
                printf("vet j: %.2f\n", v[j]); //mostra o valor atual de v[j]
            }
        }
    }
}

int main() {
    float vet[] = {5.2, 3.1, 4.7, 1.9, 2.8}; //declaração do vetor com valores
    int tam = sizeof(vet) / sizeof(vet[0]); //calcula o tamanho do vetor dividindo o total de bytes pelo tamanho de um elemento

    ordena(vet, tam); //chama a função de ordenação

    printf("Vetor ordenado: "); //mensagem para indicar que o vetor foi ordenado
    for (int i = 0; i < tam; i++) { //laço para percorrer o vetor ordenado e imprimir os valores
        printf("%.2f ", vet[i]); //imprime cada elemento formatado com duas casas decimais
    }
    printf("\n"); //quebra de linha no final

    return 0; //finaliza o programa
}

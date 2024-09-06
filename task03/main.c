#include <stdio.h>

//Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA); Ao final do processamento, qual será o valor da variável SOMA?
int main() {
    int indice = 12, soma = 0, K = 1;
    while (K < indice) {
        K = K + 1;
        soma = soma + K;
    }
    printf("SOMA = %d\n", soma);
    return 0;
}

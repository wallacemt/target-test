#include <stdio.h>

// Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
int main() {
    system("cls");
    int ant = 0;
    int suc = 1;
    int num;
    int valor;
    int pertence;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    for(int i=0; i<valor; i++){
        if(valor == num){
            pertence = 1;
        }
        num = ant + suc;
        ant = suc;
        suc = num;
    } 
    if(pertence == 1){
        printf("O valor %d pertence a sequencia de Fibonacci.", valor);
    }else{
        printf("O valor %d NAO pertence a sequencia de Fibonacci.", valor);
    }
    return 0;
}
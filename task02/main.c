#include <stdio.h>

//Escreva um programa que verifique, em uma palavraing, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
int main() {
    system("cls");
    char palavra[100];
    int i, count = 0;
    printf("Digite uma palavra: ");
    gets(palavra);
    for (i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') {
            count++;
        }
    }
    printf("A palavra %s tem [ %d ] letras 'a'.\n",palavra, count);
    return 0;
}
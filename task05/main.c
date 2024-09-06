#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em salas diferentes. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada. Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?

int main() {
    int interruptores[3] = {0, 0, 0}; 
    int lampadas[3] = {0, 0, 0}; 
    int quente[3] = {0, 0, 0};
    
    interruptores[0] = 1; 
    lampadas[0] = 1;
    printf("Ligando o primeiro interruptor...\n");
    sleep(5);
    
    
    interruptores[0] = 0;
    lampadas[0] = 0;
    quente[0] = 1; 
    printf("Desligando o primeiro interruptor e ligando o segundo...\n");
    interruptores[1] = 1; 
    lampadas[1] = 1;
    
    printf("Indo para a sala das lampadas...\n");
    sleep(5);

    for (int i = 0; i < 3; i++) {
        if (lampadas[i] == 1) {
            printf("A lampada %d esta acesa -> Controlada pelo interruptor %d\n", i + 1, i + 1);
        } else if (lampadas[i] == 0 && quente[i] == 1) {
            printf("A lampada %d esta apagada, mas quente -> Controlada pelo interruptor %d\n", i + 1, i + 1);
        } else {
            printf("A lampada %d esta apagada e fria -> Controlada pelo interruptor %d\n", i + 1, i + 1);
        }
    }
    return 0;
}

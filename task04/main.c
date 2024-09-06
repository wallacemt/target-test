/*
Descubra a lógica e complete o próximo elemento:
a) 1, 3, 5, 7, ___
b) 2, 4, 8, 16, 32, 64, ____
c) 0, 1, 4, 9, 16, 25, 36, ____
d) 4, 16, 36, 64, ____
e) 1, 1, 2, 3, 5, 8, ____
f) 2,10, 12, 16, 17, 18, 19, ____
*/

int proximo_sequencia_a();
int proximo_sequencia_b();
int proximo_sequencia_c();
int proximo_sequencia_d();
int proximo_sequencia_e();
int proximo_sequencia_f();

int main() {
    system("cls");
    printf("a) Proximo numero na sequencia: 1, 3, 5, 7 -> %d\n", proximo_sequencia_a());
    printf("b) Proximo numero na sequencia: 2, 4, 8, 16, 32, 64 -> %d\n", proximo_sequencia_b());
    printf("c) Proximo numero na sequencia: 0, 1, 4, 9, 16, 25, 36 -> %d\n", proximo_sequencia_c());
    printf("d) Proximo numero na sequencia: 4, 16, 36, 64 -> %d\n", proximo_sequencia_d());
    printf("e) Proximo numero na sequencia: 1, 1, 2, 3, 5, 8 -> %d\n", proximo_sequencia_e());
    printf("f) Proximo numero na sequencia: 2, 10, 12, 16, 17, 18, 19 -> %d\n", proximo_sequencia_f());
    return 0;
}

int proximo_sequencia_a() {
    int ultimo = 7; 
    return ultimo + 2; 
}

int proximo_sequencia_b() {
    int ultimo = 64; 
    return ultimo * 2;
}

int proximo_sequencia_c() {
    int ultimo_indice = 6; 
    return (ultimo_indice + 1) * (ultimo_indice + 1);
}
int proximo_sequencia_d() {
    int ultimo_par = 8;
    return (ultimo_par + 2) * (ultimo_par + 2); 
}

int proximo_sequencia_e() {
    int penultimo = 5; 
    int ultimo = 8; 
    return penultimo + ultimo;
}

int proximo_sequencia_f() {
    int ultimo = 19; 
    return ultimo + 1;
}

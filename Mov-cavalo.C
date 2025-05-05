#include <stdio.h>

void movimentos_cavalo() {
    // Imprime "Cima" duas vezes usando um loop for, depois imprime "Direita"
    int i = 0;
    while (i < 1){
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        i++;
    }
}

int main() {

   
    printf("\nCAVALO:\n");
    movimentos_cavalo();

    return 0;
}

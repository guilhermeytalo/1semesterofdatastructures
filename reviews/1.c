/*
1. Dado um vetor de números inteiros v de tamanho n e um número k, retorne verdadeiro
se a soma de qualquer par de números em v for igual a k.
○ Exemplo: dado v = [10,15,3,7] e k = 17, a saída deve ser true, pois 10 + 7 é 17
*/
#include <stdio.h>
void main() {
    int n = 4;
    int v[4] = {10, 15, 3, 7};
    int k = 27;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++) {
            printf("%d %d\n", v[i], v[j]);
            if(v[i] + v[j] == k) {
                printf("Verdadeiro\n");
                return;
            }
        }
    }

    printf("Falso\n");
    return;
}
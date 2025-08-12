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
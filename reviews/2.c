#include <stdio.h>

int main() {
    int n = 5;
    int v[] = {1, 2, 3, 4, 5};
    int r[n];


    for (int i = 0; i < n; i++) {
        int produto = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                // produto = produto * v[j];
                produto *= v[i];
            }
        }
        r[i] = produto;
    }
    
    printf("|  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", r[i]);
    }

    return 0;
}
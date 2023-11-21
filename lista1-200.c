#include <stdio.h>

int main() {

    int matriz[20][10];

    for(int i = 0; i < 10; i++) {

        for(int j = 0; j < 20; j++) {

            matriz[j][i] = (i + 1) + 10*j;

        }

    }

    for(int i = 0; i < 20; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
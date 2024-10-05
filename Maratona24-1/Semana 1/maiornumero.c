#include <stdio.h>

int main () {

    int maior=0;
    int N=1;

    while (N != 0) {
        scanf ("%d" , &N);
        if (maior < N) {
            maior = N;
        }
    } 

    printf ("%d", maior);

    return 0;
}
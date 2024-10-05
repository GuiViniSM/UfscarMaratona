#include <stdio.h>
#include <stdbool.h>

int main () {
    int N;
    int interruptor;
    bool A = 0;
    bool B = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &interruptor);
        if(interruptor == 1){
            A = !A;
        } 
        else if (interruptor == 2){
            A = !A;
            B = !B;
        } 
        else{
            printf("Input invalido");
        }
    }
    printf("A = %d; ", A);
    printf("B = %d", B);

    return 0;

}
#include <stdio.h>

int main () {

    int P, R;

    scanf ("%d%d", &P, &R);

    if (P==0) {
        printf ("C");
    }
    else if (P==1) {
        if (R==0) {
            printf ("B");
        }
        else if (R==1) {
            printf ("A");
        }
        else 
            printf ("error");
    }
    else 
        printf ("error");

    return 0;
}
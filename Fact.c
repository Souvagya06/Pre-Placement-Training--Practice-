#include <stdio.h>
int main() {
    int x, factorial = 1;
    printf ("Enter a number: ");
    scanf ("%d", &x);
    while (x>0) {
        factorial *= x;
        x--;
    }
    printf ("Ffactorial is : %d", factorial);
    return 0;
}
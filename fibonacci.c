//write a program to get the nth term of fibonacci series
#include <stdio.h>
int fibonacci (int n);

int main() {
    int n;
    printf ("No. of terms: ");
    scanf ("%d", &n);
    int arr[n];
    printf ("The nth term is : %d", fibonacci (n));
}

int fibonacci (int n) {
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    int fibo1 = fibonacci(n-1);
    int fibo2 = fibonacci(n-2);
    int term = fibo1 + fibo2;
    return term;
}
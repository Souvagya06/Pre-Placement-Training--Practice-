#include <stdio.h>
int main() {
    int n, a=0, b=1, new=0, i, c=2, sum=0;
    printf ("Terms: ");
    scanf ("%d", &n);
    int arr[n+1]; arr[0] = a; arr[1] = b;
    for (i=0; i<n-1; i++) {
        new = a+b;
        a=b;
        b=new;
        arr[c] = new;
        c+=1;
    }
    for (i=1; i<=n; i++) {
        sum += arr[i]*arr[i];
    }
    printf ("Summation: %d", sum);
}
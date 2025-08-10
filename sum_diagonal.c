#include <stdio.h>
int main() {
    int n, i, m, sum = 0;
    printf ("No. of rows and columns: ");
    scanf ("%d", &n);
    int arr[n][n];
    for (i=0; i<n; i++) {
        for (m=0; m<n; m++){
            printf ("Enter an element: ");
            scanf ("%d", &arr[i][m]);
        }
    }
    for (i=0; i<n; i++){
        for (m=0; m<n; m++) {
            printf ("%d, ", arr[i][m]);
            if (i==m){
                sum += arr[i][m];
            }
        }
        printf ("\n");
    }
    printf ("Sum of diagonal: %d", sum);
}
// write a program to find the GCD and LCM of two numbers
#include <stdio.h>
int  main() {
    int x, arr[] = {}, i, m, j=0;
    printf ("Enter a no.: ");
    scanf ("%d", &x);
    int y, arr2[] = {}, k=0;
    printf ("Enter another no.: ");
    scanf ("%d", &y);
    
    printf ("The factors of %d are: ", x);
    for (i=1; i<=x; i++) {
        if (x%i==0) {
            arr[j] = i;
            j++;
        }
    }
    for (i=0; i<=j-1; i++) {
        printf ("%d, ", arr[i]);
    }
    printf ("\nThe factors of %d are: ", y);
    for (i=1; i<=y; i++) {
        if (y%i==0) {
            arr2[k]=i;
            k++;
        }
    }
    for (i=0; i<=k-1; i++) {
        printf ("%d, ", arr2[i]);
    }
    int count = 0, arr3[] = {};
    printf ("\nThe common factors are: ");
    for (i=0; i<=k; i++) {
        for (m=0; m<=j; m++) {
            if (arr2[i] == arr[m]) {
                arr3[count] = arr[m];
                printf ("%d, ", arr[m]);
                count++;
            }
        }
    }
    printf ("\nThe GCD is: %d", arr3[count-1]);
    int lcm;
    lcm = (x*y)/arr3[count-1];
    printf ("\n%d, %d", x, y);
    printf ("\nThe LCM is: %d", lcm);
}
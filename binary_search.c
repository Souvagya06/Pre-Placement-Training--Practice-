#include <stdio.h>
int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}, target = 3, start = 0;
    int end = (sizeof(arr)/sizeof(arr[0]))-1, mid, found = 0;
    while (start <= end) {
        mid = (start+end)/2;
        if (arr[mid] == target) {
            printf ("Target found at : %d", mid);
            found = 1;
            break;
        }
        if (arr[mid] < target) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    if (found == 0) {
        printf ("Target not found");
    }
    
}
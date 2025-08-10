//write a program to reverse a string without using strrev function.
#include <stdio.h>
#include <string.h>
int main() {
    char st[100], st2[100];
    printf("Enter a string: ");
    fgets(st, 100, stdin);
    st[strcspn(st, "\n")] = '\0'; 

    int m = strlen(st) - 1, i;
    for (i = 0; st[i] != '\0'; i++) {
        st2[m] = st[i];
        m--;
    }
    st2[strlen(st)] = '\0'; 
    printf ("%s", st2);
    return 0;
}
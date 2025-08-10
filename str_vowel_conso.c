//write a program to enter a string and count the no. of vowels and consonants
#include <stdio.h>
#include <string.h>
int main () {
    char st[100];
    printf ("Enter a word: ");
    fgets (st, 100, stdin);
    st[strcspn (st, "\n")] = '\0';
    int i, vo_count = 0, con_count=0;
    for (i=0; i<strlen(st); i++) {
        if ((st[i]=='a') || (st[i]=='e') || (st[i]=='i') || (st[i]=='o') || (st[i]=='u') || (st[i]=='A') || (st[i]=='E') || (st[i]=='I') || (st[i]=='O') || (st[i]=='U')) {
            vo_count += 1;
        }else {
            con_count += 1;
        }
    }
    printf ("No. of Vowels: %d\n", vo_count);
    printf ("No. of Consonants: %d", con_count);
}
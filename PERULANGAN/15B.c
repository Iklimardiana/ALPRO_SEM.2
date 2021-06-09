/*
AUTHOR  : IKLIMA MARDIANA
NIM     : 2008765
EMAIL   : 11iklimardiana9@upi.edu
KELAS   : KOM2A
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    printf ("Masukkan angka: ");
    scanf ("%d", &n);
        for (i=0; i<n; i++){
            for (j=n-1; j>i; j--){
                printf ("  ");
            }
            for (j=0; j<1; j++){
                printf ("* ");
            }
            printf ("\n");
        }
    return 0;
}
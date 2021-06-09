/*
    Author  : Iklima Mardiana
    email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas11 : KOM2A
*/
#include <stdio.h>
void Pola(int n){
    int i, j;
    for (i=0; i<n; i++){
        for (j=n-1; j>i; j--){
            printf ("  ");
        }for (j=0; j<1; j++){
            printf ("* ");
        }
        printf ("\n");
    }
}
int main (){
    int angka;
    printf ("Masukkan angka: ");
    scanf ("%d", &angka);
    Pola (angka);
    return 0;
}
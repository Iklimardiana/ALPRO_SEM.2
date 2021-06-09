/*
    Author  : Iklima Mardiana
    Email   : 11iklimardiana@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/

#include <stdio.h>
void Pola(int n){
    int i, j;
    for (i=0; i<n; i++){                            
        for (j=0; j<n; j++){
            if (j==i || j+i==n-1 ){
                printf ("* ");
            } else {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}

int main(){
    int angka;
    printf ("Masukkan angka ganjil lebih dari 5: ");
    scanf ("%d", &angka);
    if (angka%2!=0 && angka>=5){
    Pola (angka);
    }else {
        printf ("masukkan angka ganjil lebih dari lima!");
    }
    return 0;
}
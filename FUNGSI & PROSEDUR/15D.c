/*
    Author  : Iklima Mardiana
    NIM     : 2008765
    Email   : 11iklimardiana9@upi.edu
    Kelas   : KOM2A
*/

#include <stdio.h>

void Pola (int n){
    int i, j, m;
    m=n/2;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i==m || j==m || (j==0 && i>=m) || (i==0 && j<=m) || (j==n-1 && i<=m) || (i==n-1 && j>=m)){
                printf ("* ");
            }else {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}
int main (){
    int angka;
    printf ("Masukkan angka ganjil >=5: ");
    scanf ("%d", &angka);
    if (angka>=5 && angka%2!=0){
        Pola (angka);
    }else{
        printf ("Masukan tidak valid!");
    }
    return 0;
}
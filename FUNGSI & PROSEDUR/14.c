/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>

void pola(int n){
    int i, j;
    for (i=0; i<n; i++){
        for (j=0; j<=i; j++){
            printf ("* ");
        }for (j=0; j<1; j++){
            printf ("  \n");
        }
    }
}

int main (){
    int angka;
    printf ("Masukkan angka 1-1000: ");
    scanf ("%d", &angka);
    if (angka<=1000 && angka>=1){
        pola (angka);
    }else{
        printf ("Masukkan angka >=1 dan <=1000");
    }
    return 0;
}
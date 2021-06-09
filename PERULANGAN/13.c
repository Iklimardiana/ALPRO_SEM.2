/*
    Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/

#include <stdio.h>
int main(){
    int i, j, n;
    printf ("Masukkan angka 1-1000: ");
    scanf ("%d", &n);
    if (n>=1 && n<=1000){
        for (i=0; i<n; i++){
            for (j=0; j<=i; j++){
                printf ("* ");
            }for (j=0; j<1; j++){
                printf ("  \n");
            }
        }
    }else{
        printf ("Angka harus >=1 dan <=1000");
    }
    return 0;
}
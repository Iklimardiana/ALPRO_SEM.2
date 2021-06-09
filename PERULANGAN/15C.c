/*
    Nama    : Iklima Mardiana
    NIM     : 2008765
    Email   : 11iklimardiana9@upi.edu
    Kelas   : KOM2A
*/

#include <stdio.h>

int main(){
    int n, i, j;
    printf ("Masukkan angka ganjil lebih dari atau sama dengan 5: ");
    scanf ("%d", &n);
    if (n>=5 && n%2!=0){
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){   //j=2 j=3 j=4
                if (j==i || j+i==n-1){      //n-1 = 4
                    printf ("* ");
                }else{
                    printf ("  ");
                }
            }
            printf ("\n");
        }
    }
    else {
        printf ("Masukkan angkan ganjil dan >=5");
    }
    return 0;
}
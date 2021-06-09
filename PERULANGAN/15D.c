/*
    Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
    Soal    : Buatlah algoritma dalam bahasa C, mencetak pola bintang tertentu berdasarkan nilai n yang diinput sebagai berikut :
              d. Jika diinput n>=5, n harus ganjil
                 * * *   *
                     *   *
                 * * * * *
                 *   *
                 *   * * *
*/
#include <stdio.h>
int main(){

int i, j, n;
printf ("Masukkan angka ganjil: ");
scanf ("%d", &n);
int m = (n/2);  //m=2
if (n%2!=0 && n>=5){
    for (i=0; i<n;i++){  
        for (j=0; j<n; j++){    //j=1 j=2 j=3 j=4
            if ((i==m|| (j==m) || (i==0 && j<=m) || (j==0 && i>=m) || (j==n-1 && i<=m) || (i==n-1 && j>=m)))
            {
                printf ("* "); //i=4 j=4
            }
            else 
            {
                printf ("  ");
            }
        }
        printf ("\n");
    }
}else{
    printf ("Masukkan angka ganjil >=5");
}
return 0;
}
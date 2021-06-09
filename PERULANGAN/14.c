/*
    Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/

#include <stdio.h>
int main(){
    int i,j,n;
    printf ("Masukkan angka 1-1000: ");
    scanf ("%d", &n); 
    if (n<=1000 && n>=1){ 
        for (i=0; i<n; i++){
            for (j=0; j<n; j++){
                if (i==0 || (j==n-1 && n!=2) || j==0 || (i!=1 && i==n-1) ){
                    printf ("o"); 
                }else {
                    printf ("*");
                }
            }
            printf ("\n");  
        }
    }else {
        printf ("Masukkan angka <=1000 dan >=1");
    }
    return 0;
}
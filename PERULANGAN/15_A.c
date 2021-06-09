/*
    Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A	
*/

#include <stdio.h>
int main(){	
	int n, i, j;
	printf ("Masukkan angka: ");
	scanf ("%d", &n);
		for(i=0; i<n; i++){
		     for(j=0; j<i; j++){
		          printf("  ");
		     }
		     for(j=0;j<1;j++){  
		          printf("* ");
		     }
		     printf("\n");
		}

	return 0;
}

/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main(){
	int i, n;
	printf ("Masukkan angka: ");
	scanf ("%d", &n);
	if (n>=1){
		for (i; i<=n; i++){
			printf ("%d  ", i);
		}
	}else{
		printf ("Angka yang dimasukkan harus >=1");
	}
	return 0;
}
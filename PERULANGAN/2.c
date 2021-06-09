/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/

#include <stdio.h>
int main(){
	int a, b;
	printf ("Masukkan batas awal: ");
	scanf ("%d", &a);
	printf ("Masukkan angka akhir: ");
	scanf ("%d", &b);
	if (a>=b){
		printf ("Angka awal harus lebih dari angka akhir");
	}else if (a<0) {
		printf ("Angka awal harus lebih dari 0 (Positif)");
	}else{
		for (a; a<=b; a++){
			printf ("%d ", a);
		}
	}
	return 0;
}
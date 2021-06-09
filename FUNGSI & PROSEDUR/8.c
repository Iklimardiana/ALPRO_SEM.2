/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/
#include <stdio.h>

int kubus(int a, int b, int c){
	int cek;
	if (a==b && b==c && c==a){
		cek =1;
	}else {
		cek =0;
	}
	return cek;
}
int main (){
	int A,B, C, tampung;
	printf ("Masukkan angka ke-1: ");
	scanf ("%d", &A );
	printf ("Masukkan angka ke-2: ");
	scanf ("%d", &B );
	printf ("Masukkan angka ke-3: ");
	scanf ("%d", &C );
	tampung = kubus(A,B,C);
	if (tampung==1){
		printf ("Merupakan kubus");
	}
	else{
		printf ("Bukan kubus");
	}
	return 0;
}

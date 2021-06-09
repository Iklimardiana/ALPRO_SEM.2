/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>

int cekribuan(int a, int b, int c, int hasil){
	if (a>=1000 && b>=1000 && c>=1000){
		hasil = 1;
	}else {
		hasil = 0;
	}
	return hasil;
}

int main (){
	int d, e, f, tampung;
	printf ("Masukkan angka ke-1: "); scanf ("%d", &d);
	printf ("Masukkan angka ke-2: "); scanf ("%d", &e);
	printf ("Masukkan angka ke-3: "); scanf ("%d", &f);
	tampung = cekribuan(d,e,f, tampung);
	if (tampung==1){
		printf ("Semua angka masukan adalah ribuan");
	}else {
		printf ("Tidak semua angka masukan termasuk ribuan");
	}
	return 0;
}


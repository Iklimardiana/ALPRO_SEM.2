/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main(){
	int ayam;
	printf ("Masukkan jumlah anak ayam: ");
	scanf ("%d", &ayam);
	for (ayam; ayam>1; ayam--){
		printf ("Anak ayam turun %d, mati 1 tinggal %d\n", ayam, ayam-1);
	}
	printf ("Anak ayam turun %d, mati 1 tinggal induknya", ayam);
	return 0;
}

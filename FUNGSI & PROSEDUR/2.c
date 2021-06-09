/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include<stdio.h>
#include<stdlib.h>

void deret(int awal, int akhir){
	for (awal; awal<=akhir; awal++){
		printf ("%d ", awal);
	}
}
	int main(){
		int a, b;
			printf ("Masukkan batas awal: ");
			scanf ("%d", &a);
			printf ("Masukkan batas akhir: ");
			scanf ("%d", &b);
		if (a>=1 && a<=b){
			deret(a,b);
		}
		else {
			printf ("Masukkan angka awal lebih dari 0 dan angka awal<=angka akhir");
		}
	return 0;
}

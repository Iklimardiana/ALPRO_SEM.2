/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/
#include <stdio.h>

void looping (int a, int b){
	int jumlah;
	jumlah = 0;
	while (a<b){
		if (a%2==1){
			printf ("%d + ", a);
			jumlah=jumlah+a;
		}a++;
	}
	printf("%d", a);
	printf ("=%d", jumlah+a);
}
int main (){
	int awal, akhir;
	printf ("Masukkan angka awal: ");
	scanf ("%d", &awal);
	printf ("Masukkan angka akhir: ");
	scanf ("%d", &akhir);
	looping (awal, akhir);
	return 0;
}

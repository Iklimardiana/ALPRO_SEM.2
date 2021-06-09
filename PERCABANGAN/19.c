/*
	Author	: Iklima Masrdiana
	Email	: 11iklimardiana@upi.edu
	NIM		: 2008765
	Kelas	: KOM2A
*/

#include <stdio.h>
int main(){
	int N, M;
	printf ("Masukkan N hari: ");
	scanf ("%d", &N);
	M=N%7;
	switch (M){
		case 0 : printf ("Senin"); break;
		case 1 : printf ("Selasa"); break;
		case 2 : printf ("Rabu"); break;
		case 3 : printf ("Kamis"); break;
		case 4 : printf ("Jumat"); break;
		case 5 : printf ("Sabtu"); break;
		case 6 : printf ("Minggu"); break;
		default : printf ("Inputan tidak valid!"); 
	}
	return 0;
}

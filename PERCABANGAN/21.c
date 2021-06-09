/*
	Author	: Iklima Mardiana
	Email	: 11iklimardiana9@upi.edu
	NIM		: 2008765
	Kelas	: KOM2A
*/

#include <stdio.h>
int main(){
	char angka;
	printf ("Masukkan karakter angka: ");
	scanf ("%s", &angka);
	switch (angka){
		case '0' : printf ("%d", 0);break;
		case '1' : printf ("%d", 1);break;
		case '2' : printf ("%d", 2);break;
		case '3' : printf ("%d", 3);break;
		case '4' : printf ("%d", 4);break;
		case '5' : printf ("%d", 5);break;
		case '6' : printf ("%d", 6);break;
		case '7' : printf ("%d", 7);break;
		case '8' : printf ("%d", 8);break;
		case '9' : printf ("%d", 9);break;
		default : printf ("%d", -99);break;
	}
	return 0;
}

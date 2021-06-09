/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>

int ceksegitiga(int x, int y, int z)
{
	int hasil;
	int a, b, c;
	if (x >= y && x >= z){
		a = z;
		b = y;
		c = x;
	} else if (y >= x && y >= z){
		a = z;
		b = x;
		c = y;
	} else{
		a = x;
		b = y;
		c = z;
	}

	if (c*c == (b*b + a*a)){
		hasil =1;						
	}else if (c*c > (b*b + a*a)){
		hasil =2;					
	}else{
		hasil = 3;					
	}
	return hasil;
}

int main(){
	int o, p, q, tampung;
	printf ("Masukkan Sisi A: ");
	scanf ("%d", &o);
	printf ("Masukkan Sisi B: ");
	scanf ("%d", &p);
	printf ("Masukkan Sisi C: ");
	scanf ("%d", &q);
	printf ("========================\n");
	tampung = ceksegitiga (o,p,q);
	if (tampung==1){
		printf ("Segitiga Siku-Siku");
	}else if (tampung ==2){
		printf ("Segitiga tumpul");
	}else if (tampung ==3){
		printf ("Segitiga Lancip");
	}
	return 0;
}

/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>
void faktorial(int banyak)
{
	int hasil;
	hasil=1;
	for(banyak; banyak>1; banyak--)
	{
		printf ("%d*", banyak);
		hasil=hasil*banyak;
	}
	printf ("%d = ", banyak);
	printf ("%d", hasil);
}

int main ()
{
	int a;
	printf ("Akan menghitung faktorial dari angka berapa? ");
	scanf ("%d", &a);
	printf ("%d! = ", a);
	faktorial (a);
	return 0; 
}

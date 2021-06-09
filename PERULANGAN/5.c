/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/

#include <stdio.h>
int main(){
	int hasil, l, m;
	printf ("Masukkan angka: ");
	scanf ("%d", &m);
	hasil = 0;
	for (l=1; l<m; l++){
		hasil=hasil+l;
		printf ("%d+", l);
	}
	printf ("%d", l);
	printf ("=%d", hasil+l);
	return 0; 
}
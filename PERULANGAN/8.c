/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main(){
	int a, n;
	float nilai, jumlah, rerata;
	printf ("Berapa banyak data yang akan dimasukkan? ");
	scanf ("%d", &n);
	jumlah=0;
	for (a=1; a<=n; a++){
		printf ("Masukkan nilai ke-%d: ", a);
		scanf ("%f", &nilai);
		jumlah=jumlah+nilai;
	}
	rerata=jumlah/n;
	printf ("Rata-rata = %.2f", rerata);
	return 0;
}

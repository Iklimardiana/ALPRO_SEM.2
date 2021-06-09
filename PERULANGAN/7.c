/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main(){
	int hasil, m, n;
	printf ("Masukkan angka awal: ");
	scanf ("%d", &m);
	printf ("Masukkan angka akhir: ");
	scanf ("%d", &n);
	hasil=0;
	while(m<n){
		if (m%2!=0){
			hasil=hasil+m;
			printf ("%d+", m);
		}m++;
	}
	printf ("%d", m);
	printf ("=%d", hasil+m);
	return 0;
}

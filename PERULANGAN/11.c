/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main(){
	int banyak, hasil;
	hasil=1;
	printf ("Akan menghitung faktorial dari angka berapa? ");
	scanf ("%d", &banyak);
	printf ("%d! = ", banyak);
	for(banyak; banyak>1; banyak--){
		printf ("%d*", banyak);
		hasil=hasil*banyak;
	}
	printf ("%d", banyak);
	printf ("= %d", hasil);
	return 0;
}

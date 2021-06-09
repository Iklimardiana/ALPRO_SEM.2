/*	
	Author 		: Iklima Mardiana         
	email 		: 11iklimardiana9@upi.edu
	Deskripsi 	: program perhitungan luas lingkaran
	*/

#include <stdio.h>
#define phi 3.14

int main(){
	float Luas_lingkaran,r; 
	printf ("=========================\n");
	printf ("MENGHITUNG LUAS LINGKARAN\n");
	printf ("=========================\n");
	printf ("Masukkan angka untuk menentukan jari-jari lingkaran : ");
	scanf ("%f", &r);
	printf ("Jari-jari lingkaran = %.1f meter\n",r);
	Luas_lingkaran = phi*r*r;
	printf ("Luas lingkaran = %.2f meter persegi",Luas_lingkaran);
	return 0;
	
}

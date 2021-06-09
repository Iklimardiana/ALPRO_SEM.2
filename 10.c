/*	
	Penulis   : Iklima Mardiana
	Email	  : 11iklimardiana9@upi.edu
	Deskripsi : Program menghitung luas trapesium
*/

#include <stdio.h>

int main(){
	int sisi_atas, sisi_alas, tinggi, Luas_trapesium;
	
	
	printf ("=========================\n");
	printf ("Menghitung Luas Trapesium\n");
	printf ("=========================\n");
	printf ("\n");
	printf ("Masukkan angka untuk menentukan sisi alas: ");
	scanf("%d", &sisi_alas);
	printf ("Masukkan angka untuk menentukan sisi atas: ");
	scanf ("%d", &sisi_atas);
	printf ("Masukkan angka untuk menentukan tinggi trapesium: ");
	scanf ("%d", &tinggi);
	Luas_trapesium = ((sisi_alas + sisi_atas)*tinggi/2);
	printf ("Tinggi = %d Cm\n", tinggi);
	printf ("Sisi alas = %d Cm\n", sisi_alas);
	printf ("Sisi atas = %d cm\n", sisi_atas);
	printf ("Luas trapesium adalah %d Cm persegi\n", Luas_trapesium );
	
	return 0;
}

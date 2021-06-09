/*Menentukan Hari Keberapa dalam tahun berjalan, berdasarkan tanggal dan bulan yang
diinput pada tahun berjalan. (Asumsi bulan februari=28 hari). Contoh jika diinput tanggal 20
bulan 1, maka Hari Ke 20. Jika diinput tanggal 1 bulan 3, maka Hari Ke-60 (31+28+1) dst.
*/

#include<stdio.h>
int main (){
	int tanggal, bulan, jumlah_hari;
	printf ("Masukkan tanggal: ");
	scanf ("%d", &tanggal);
	printf ("Masukkan bulan: ");
	scanf ("%d", &bulan);
	switch (bulan){
		case 1 : jumlah_hari= tanggal;break;
		case 2 : jumlah_hari= 31+tanggal;break;
		case 3 : jumlah_hari= 31+28+tanggal;break;
		case 4 : jumlah_hari= 31+28+31+tanggal;break;
		case 5 : jumlah_hari= 31+28+31+30+tanggal;break;
		case 6 : jumlah_hari= 31+28+31+30+31+tanggal;break;
		case 7 : jumlah_hari= 31+28+31+30+31+30+tanggal;break;
		case 8 : jumlah_hari= 31+28+31+30+31+30+31+tanggal;break;
		case 9 : jumlah_hari= 31+28+31+30+31+30+31+31+tanggal;break;
		case 10 : jumlah_hari= 31+28+31+30+31+30+31+31+30+tanggal;break;
		case 11 : jumlah_hari= 31+28+31+30+31+30+31+31+30+31+tanggal;break;
		case 12 : jumlah_hari= 31+28+31+30+31+30+31+31+30+31+30+tanggal;break;
		default : printf ("Inputan tidak valid!");break;
	}
	printf("Maka tanggal %d pada bulan %d adalah hari ke-%d", tanggal,bulan,jumlah_hari);
	return 0;
}

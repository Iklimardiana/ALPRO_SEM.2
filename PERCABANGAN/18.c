/*Sebuah acara wisata akam menggunakan mobil berkapasitas 7 penumpang per mobil.
Apabila terjadi kelebihan penumpang (meskipun hanya 1 orang), maka mobil yang
digunakan ditambah 1. Buat program untuk menghitung jumlah mobil yang diperlukan
berdasarkan jumlah peserta yang akan ikut. 
*/

#include <stdio.h>

int main(){
	int penumpang, mobil;
	printf ("Berapa jumlah penumpang? ");
	scanf ("%d", &penumpang);
	if (penumpang%7==0){
		mobil = penumpang/7;
		printf("Mobil yang dibutuhkan adalah %d", mobil);
	}else {
		mobil = (penumpang/7)+1;
		printf("Mobil yang dibutuhkan adalah %d", mobil);
	}
	
	return 0;
}

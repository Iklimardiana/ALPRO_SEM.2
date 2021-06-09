/*Menentukan lama bekerja seseorang berdasarkan jam masuk dan jam keluar dengan
asumsi jam hanya 1 sampai dengan 12 dan lama bekerja seorang pegawai kurang dari 12
jam.
*/
#include <stdio.h>
int main(){
	int jam_masuk, jam_keluar;

	printf ("Masukkan jam masuk: ");
	scanf ("%d", &jam_masuk);
	printf ("Masukkan jam keluar: ");
	scanf ("%d", &jam_keluar);
	if ((jam_keluar>=1 && jam_keluar<=12) && (jam_masuk<=12 && jam_masuk>=1)){
			if (jam_masuk<jam_keluar){
				printf ("Lama bekerja adalah %d jam", jam_keluar-jam_masuk);
			}else {
				printf ("Lama bekerja adalah %d jam", (12-jam_masuk)+jam_keluar);
			}
	}else{
		printf ("Masukan tidak valid");
	}
		
	
	return 0;
}

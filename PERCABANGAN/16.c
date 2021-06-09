/*Menentukan biaya parkir berdasarkan lama parkir yang dihitung berdasarkan selisih jam
masuk dan jam keluar (dengan ketentuan seperti soal no 1). Biaya parkir 2 jam pertama
1500 dan perjam berikutnya 1000. 
*/
#include <stdio.h>
int main (){
	int jam_masuk, jam_keluar, lama_parkir, biaya_parkir;
	printf ("Masukkan jam masuk: ");
	scanf ("%d", &jam_masuk);
	printf ("Masukkan jam keluar: ");
	scanf ("%d", &jam_keluar);
	if ((jam_masuk<=12&&jam_masuk>=1)&&(jam_keluar<=12&&jam_keluar>=1)){
		if (jam_masuk<jam_keluar){
			lama_parkir = jam_keluar-jam_masuk;
			printf ("Lama parkir adalah %d jam\n", lama_parkir);{
				if (lama_parkir<=2){
					biaya_parkir=1500;
					printf ("Biaya parkir adalah %d\n", biaya_parkir);
				}else{
					biaya_parkir = 1500+((lama_parkir-2)*1000);
					printf ("Biaya parkir adalah %d\n", biaya_parkir);
				}
			}
			
		}else if (jam_masuk>=jam_keluar){
				lama_parkir = (12-jam_masuk)+jam_keluar;
				printf ("Lama parkir adalah %d jam\n", lama_parkir);{
					if (lama_parkir<=2){
					biaya_parkir=1500;
					printf ("Biaya parkir adalah %d\n", biaya_parkir);
				}else{
					biaya_parkir = 1500+((lama_parkir-2)*1000);
					printf ("Biaya parkir adalah %d\n", biaya_parkir);
				}
			}
				}
		}
	
	
	return 0;
}

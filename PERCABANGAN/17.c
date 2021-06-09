/*
	Author	: Iklima Mardiana
	Email	: 11iklimardiana9@upi.edu
	NIM		: 2008765
	Kelas	: KOM2A
*/

#include <stdio.h>
int main(){
	int JamMulai, JamSelesai, MenitMulai, MenitSelesai;
	int LamaKerja_jam, LamaKerja_menit;

	printf ("Jam berapa memulai pekerjaan? (sertakan menitnya): ");
	scanf ("%d %d",&JamMulai, &MenitMulai);
	printf ("Jam berapa selesainya pekerjaan? (Sertakan menitnya): ");
	scanf ("%d %d", &JamSelesai, &MenitSelesai);

	if ((JamMulai<=12 && JamSelesai<=12)&& (JamMulai>=1 && JamSelesai>=1) && (MenitSelesai<=59 && MenitMulai <=59) 
		&& (MenitSelesai>=0 && MenitMulai>=0)){
		if (JamMulai<=JamSelesai){
			LamaKerja_jam = JamSelesai-JamMulai;
			if (MenitMulai<MenitSelesai){
				LamaKerja_menit = MenitSelesai-MenitMulai;
			}else{
				LamaKerja_menit = (60-MenitMulai)+MenitSelesai;
				LamaKerja_jam = (JamSelesai-JamMulai)-1;
			}
		}else{
			LamaKerja_jam = (12-JamMulai)+JamSelesai;
			if (MenitMulai<MenitSelesai){
			LamaKerja_menit = MenitSelesai-MenitMulai;
			}else{
				LamaKerja_menit = (60-MenitMulai)+MenitSelesai;
			}
		}
		printf ("Mulai bekerja = %d:%d\n", JamMulai, MenitMulai);
		printf ("Selesai bekerja = %d:%d\n", JamSelesai, MenitSelesai);
		printf ("Lamanya bekerja dalam hitungan jam = %d jam %d menit\n", LamaKerja_jam, LamaKerja_menit);
		printf ("Lamanya bekerja dalam hitungan menit = %d menit", (LamaKerja_jam*60)+LamaKerja_menit);
	}else {
		printf ("Masukan tidak valid!");
	}
	return 0;
}

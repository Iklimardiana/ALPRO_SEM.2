/*Pak Eki memiliki N ekor bebek. Ia ingin menempatkan bebek-bebeknya tersebut pada
kandang-kandang. Ia juga ingin agar setiap kandang berisi paling banyak M ekor bebek.
Tentukan jumlah kandang paling sedikit yang diperlukan Pak Eki
*/
#include <stdio.h>
int main (){
	int N,M, kandang; //N= Jumlah bebek //M = Maksimal penampungan bebek dalam satu kandang
	printf ("Masukkan jumlah bebek: ");
	scanf ("%d", &N);
	printf ("Berapa maksimal bebek yang akan ditampung dalam satu kandang? ");
	scanf ("%d", &M);
	kandang = (M+N)/M;
	printf ("Kandang yang dibutuhkan adalah %d kandang", kandang);
	return 0;
}

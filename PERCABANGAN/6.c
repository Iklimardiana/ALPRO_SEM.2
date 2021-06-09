/* Pasar swalayan x memberikan diskon harga bagi pembeli yang nilai total belanjanya lebih
dari Rp 100.000. Tulislah algoritma untuk menentukan harga belanja setelah dikurangi
diskon. Data masukan adalah nilai total belanja pembeli, sedangkan keluarannya adalah
diskon harga dan nilai belanja setelah dikurangi diskon.
*/

#include <stdio.h>
int main (){
	float total_belanja, harga_akhir;
	int diskon;
	diskon = 25;
	printf ("Masukkan harga total: ");
	scanf ("%f", &total_belanja);
	if (total_belanja>100000){
		harga_akhir = total_belanja-(total_belanja*25/100);
		printf ("diskon (%%) = %d\n", diskon);
		printf ("Harga akhir adalah %.0f", harga_akhir);
	}else {
		printf ("Harga total adalah %.0f",total_belanja);
	}
	return 0;
}

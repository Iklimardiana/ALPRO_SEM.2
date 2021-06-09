/*buatlah algoritma dalam bahasa C, yang menerima masukan berupa 3 buah integer, periksa
apakah masukan adalah ribuan.
*/
#include <stdio.h>

int main(){
	int a,b,c;
	printf ("Masukkan nilai ke-1: ");
	scanf ("%d", &a);
	printf ("Masukkan nilai ke-2: ");
	scanf (" %d", &b);
	printf ("Masukkan nilai ke-3: ");
	scanf (" %d", &c);
	if (a>=1000&&b>=1000&&c>=1000){
		printf ("Semua masukan adalah ribuan");
	}else {
		printf ("Tidak semua masukan adalah ribuan");
	}
	return 0;
}

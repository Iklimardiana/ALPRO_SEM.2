/*Buatlah algoritma dalam bahasa C, menerima masukan berupa sebuah bilangan ril, periksa
apakah angka didepan koma dan angka dibelakang koma adalah kelipatan 3 (angka
dibelakang koma pasti 2 angka).
*/
#include <stdio.h>

int main (){
	float angka;
	int depan_koma;
	int belakang_koma;
	printf ("Masukkan bilanan ril: ");
	scanf ("%f", &angka);
	if (depan_koma%3==0){
		depan_koma=angka;
		printf ("Angka depan koma adalah kelipatan 3\n");
	}else {
		printf ("Angka di depan koma bukan kelipata 3\n");
	}if (belakang_koma%3==0){
		belakang_koma=(angka-depan_koma)*100;
		printf ("Angka di belakang koma adalah kelipatan 3\n");
	}else {
		printf ("Angka di belakang koma bukan kelipatan 3\n");
	}
	return 0;
}

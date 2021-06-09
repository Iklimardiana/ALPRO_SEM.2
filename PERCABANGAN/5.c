/*Buatlah algoritma yang membaca sebuah bilangan bulat positif lalu menentukan apakah
bilangan tersebut merupakan kelipatan 4.
*/
#include <stdio.h>
int main(){
	int angka;
	printf ("Masukkan angka: ");
	scanf ("%d", &angka);
	if (angka%4==0){
		printf ("Angka tersebut adalah kelipatan 4");
	}else {
		printf ("Bukan kelipatan 4");
	}
	return 0;
}

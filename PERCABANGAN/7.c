/*Buatlah algoritma dalam bahasa C, yang menerima masukan tiga buah sisi, dimana jika
semua sisi sama maka tampilkan “Termasuk Kubus”, jika ada sisi yang tidak sama maka
tampilkan bukan kubus.
*/
#include <stdio.h>

int main (){
	int sisi_a, sisi_b, sisi_c;
	printf ("Masukkan sisi A: ");
	scanf ("%d", &sisi_a);
	printf ("Masukkan sisi B: ");
	scanf ("%d", &sisi_b);
	printf ("Masukkan sisi C: ");
	scanf ("%d", &sisi_c);
	if (sisi_a==sisi_b){
		if (sisi_b==sisi_c){
			printf ("Merupakan kubus");
		}
	}else {
		printf ("Bukan termasuk kubus");
	}
	return 0;
}

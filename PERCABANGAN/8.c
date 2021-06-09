/*Buatlah algoritma dalam bahasa C, yang menerima tiga buah angka masukan dan
menampilkan nilai yang paling besar dari ketiga masukan.
*/

#include <stdio.h>
int main (){
	int a,b,c;
	printf ("Masukkan nilai a: ");
	scanf ("%d", &a);
	printf ("Masukkan nilai b: ");
	scanf ("%d", &b);
	printf ("Masukkan nilai c: ");
	scanf ("%d", &c);
	if (a>b){
		if (a>c){
			printf ("Angka yang terbesar adalah %d",a);
		}else {
			printf ("Angka yang terbesar adalah %d",c);
		}
	}else if (b>c){
		printf ("Angka yang terbesar adalah %d",b);
	}else {
		printf ("Angka yang terbesar adalah %d",c);
	}
	return 0;
}

/*Buatlah algoritma dalam bahasa C, yang menerima masukan berupa 2 buah bilangan
integer, jika kedua masukan adalah bilangan genap maka tampilkan hasil penjumlahan
keduanya, jika keduanya bilangan ganjil maka tampilkan perkalian keduanya
*/#include <stdio.h>

int main(){
	int a,b;
	printf ("Masukkan niai ke-1: ");
	scanf ("%d", &a);
	printf ("Masukkan nilai ke-2: ");
	scanf ("%d", &b);
	if (a%2==0 && b%2==0){
		printf ("%d+%d=%d", a,b,a+b);
	}else {
		printf ("%d*%d=%d", a,b,a*b);
	}
	return 0;
}

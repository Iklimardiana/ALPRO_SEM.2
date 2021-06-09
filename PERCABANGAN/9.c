/*Buatlah algoritma dalam bahasa C, berupa menu yang dapat memasukan pilihan jika
menginputkan karakter operator aritmatika ‘+’ akan melakukan penjumlahan, jika ‘-‘
pengurangan sampai karakter ‘*’, ‘/’ dan ‘%’ dua bilangan integer.
*/
#include <stdio.h>

int main (){
	int a,b;
	char oprator;
	printf ("Masukkan operator aritmatika: ");
	scanf ("%c", &oprator);
	printf ("Masukkan angka ke-1: ");
	scanf ("%d", &a);
	printf ("Masukkan angka ke-2: ");
	scanf ("%d", &b);
	switch (oprator){
		case '+' : printf ("%d+%d=%d", a,b,a+b);break;
		case '-' : printf ("%d-%d=%d", a,b,a-b);break;
		case '*' : printf ("%d*%d=%d", a,b,a*b);break;
		case '/' : printf ("%d/%d=%d", a,b,a/b);break;
		case '%' : printf ("%d mod %d=%d", a,b,a%b);break;
		default : printf ("Masukan tidak valid");break;
	}
	return 0;
}

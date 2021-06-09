/*Tuliskan algoritma yang membaca :
a) Bilangan bulat positif dalam rentang 1 sd 10. Lalu konversikan kedalam angka
romawai.
b) Kembangan algoritma diatas (a) di atas sehingga dapat mengkonversi bilangan bulat
positif ke dalam angka romawi
*/
#include <stdio.h>

int main (){
	int angka;
		printf ("Masukkan angka 1-10: ");
		scanf ("%d", &angka);
		printf ("=================================\n");
		printf ("Konversi bilangan bulat ke romawi\n");
		printf ("=================================\n");
	switch (angka){
		case 1 : printf ("Angka %d = I", angka);break;
		case 2 : printf ("Angka %d = II", angka);break;
		case 3 : printf ("Angka %d = III", angka);break;
		case 4 : printf ("Angka %d = IV", angka);break;
		case 5 : printf ("Angka %d = V", angka);break;
		case 6 : printf ("Angka %d = VI", angka);break;
		case 7 : printf ("Angka %d = VII", angka);break;
		case 8 : printf ("Angka %d = VIII", angka);break;
		case 9 : printf ("Angka %d = IX", angka);break;
		case 10 : printf ("Angka %d = X", angka);break;
		default : printf ("Inputan tidak valid!");
	}

	
	return 0;
}

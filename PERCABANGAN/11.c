/*Menentukan Bilangan terbesar dari tiga buah bilangan yang diinput dari alat masukan x,y
dan z. Dengan asumsi x,y dan z nilainya berbeda.
*/
#include <stdio.h>

int main (){
	int x,y,z;
	printf ("Masukkan nilai x: ");
	scanf ("%d", &x);
	printf ("Masukkan nilai y: ");
	scanf ("%d", &y);
	printf ("Masukkan nilai z :");
	scanf ("%d", &z);
	if (x==y||x==z||y==z){
		printf ("Terdapat inputan yang sama!");
	}else {
		if(x>y){
			if(x>z){
				printf ("Nilai yang terbesar adalah %d", x);
			}else {
				printf ("Nilai yang terbesar adalah %d", z);
			}
		}else {
			if (y>z){
				printf ("Nilai yang terbesar adalah %d", y);
			}else {
				printf ("Nilai yang terbesar adalah %d", z);
			}
		}
	}
	
	return 0;
}

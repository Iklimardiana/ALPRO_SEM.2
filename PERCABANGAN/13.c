/*Tulislah algoritma membaca tiga buah bilangan bulat, lalu mengurutkan tiga buah bilangan
tersebut dari nilai yang kecil ke nilai yang besar. Keluaran adalah tiga buah bilangan yang
terutrut
*/
#include <stdio.h>
int main (){
	int a,b,c;
	printf ("Masukkan nilai ke-1: ");
	scanf ("%d", &a);
	printf ("Masukkan nilai ke-2: ");
	scanf ("%d", &b);
	printf ("Masukkan nilai ke-3: ");
	scanf ("%d", &c);
	if (a<b){
		if(b<c){
			printf ("%d-%d-%d", a,b,c);
		}else if (c<a){
			printf ("%d-%d-%d", c,a,b);
		}else {
			printf ("%d-%d-%d", a,c,b);
		}
		
	}else if (b<a){
		if (a<c){
			printf ("%d-%d-%d", b,a,c);
		}else if (c<b){
			printf ("%d-%d-%d", c,b,a);
		}else {
			printf ("%d-%d-%d", b,c,a);
		}
	}
	return 0;
}

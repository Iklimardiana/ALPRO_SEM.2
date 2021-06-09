/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/
#include <stdio.h>

//deklarasi prosedur
void bilangan(int n){
	int i;
	for (i=1; i<=n; i++){
		printf ("%d ", i);
	}
//memanggil prosedur
}
int main(){
	int a;
	printf ("Berapa kali angka akan diulang? ");
	scanf ("%d", &a);
	bilangan(a);

return 0;
}


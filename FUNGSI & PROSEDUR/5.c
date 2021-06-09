/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>
void tambah(int n){
	int i, result;
	result =0;
	for (i=1; i<n; i++){
		printf ("%d + ", i);
		result=result+i;
	}
	printf ("%d ", i);
	printf ("=%d\n", result+i);
}
int main(){
	int a;
	printf ("Berapa kali angka akan diulang? ");
	scanf ("%d", &a);	
	tambah(a);

	return 0;
}

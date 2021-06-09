/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/
#include <stdio.h>
#include <stdlib.h>

void kalimat(int n){
	int i;	
	for (i=1; i<=n; i++){
		printf ("Saya senang belajar bahasa C\n");
	}
}
	int main(){
		int a;
		printf ("Berapa kalimat akan diulang? ");
		scanf ("%d", &a);
		kalimat(a);
		return 0;
	}


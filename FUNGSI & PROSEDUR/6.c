/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>

void ganjil(int awal, int akhir){
	int banyak_data_ganjil;
	if(awal%2==0 && akhir%2==0){
		banyak_data_ganjil=(akhir-awal)/2;
	}
	else if(((akhir-awal)%2==1) || ((akhir-awal)%2==0)){  
		banyak_data_ganjil=((akhir-awal)/2)+1; 
	}
	printf ("Banyaknya data ganjil adalah %d\n", banyak_data_ganjil);
	printf ("Bilangan ganjil = ");
	while (awal<=akhir){
		if (awal % 2!=0){
			printf ("%d ",awal);
		}
		awal++;
	}
}
int main(){
	int a,b;
	printf ("Masukkan batas awal: ");
	scanf ("%d", &a);
	printf ("Masukkan batas akir: ");
	scanf ("%d", &b);
	ganjil(a, b);

	return 0;
}

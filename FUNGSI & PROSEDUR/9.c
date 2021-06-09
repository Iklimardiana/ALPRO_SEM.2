/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>

void PrimaKomposit(int awal,int akhir){
	int i, bagi, mod, Y;
		printf ("Bilangan prima:\n");
		for (i=awal; i<=akhir; i++){
		Y = 0;
		for (bagi=2; bagi<=i; bagi++){
			mod = i%bagi;
			if (mod==0){
				Y = Y+1;
			}
		}
		if (Y==1){
			printf ("%d ", i);
		}
	}
	printf ("\n");
	printf ("Bilangan komposit: \n");
	for (i=awal; i<=akhir; i++){
		Y = 0;
		for (bagi=2; bagi<=i; bagi++){
			mod = i%bagi; //i=4
			if (mod==0){
				Y = Y+1; //y=1
			}
		}
		if (Y>1){
			printf ("%d ", i);
				}
			}		
	}
	
int main(){
	int Awal, Akhir;
	printf ("Masukkan nilai awal: ");
	scanf ("%d", &Awal);
	printf ("Masukkan nilai akhir: ");
	scanf ("%d", &Akhir);
	if (Awal>=1 && Akhir<=100){
		PrimaKomposit(Awal, Akhir);
	}else{
		printf ("Masukkan batas awal >=1 dan batas akhir <=100");
	}
	
	return 0;
}

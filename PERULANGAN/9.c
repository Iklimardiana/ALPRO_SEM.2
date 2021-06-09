/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main(){
	int awal, akhir,i, bagi, mod, Y;
	printf ("Masukkan nilai awal: ");
	scanf ("%d", &awal);
	printf ("Masukkan nilai akhir: ");
	scanf ("%d", &akhir);
	if(awal>=1 && akhir<=100){
	printf ("Bilangan prima: \n");
	for (i=awal; i<=akhir; i++){			//awal=2
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
	printf ("Bilangan komposit: \n");{
	for (i=awal; i<=akhir; i++){
		Y = 0;
		for (bagi=2; bagi<=i; bagi++){
			mod = i%bagi;
			if (mod==0){
				Y = Y+1;
			}
		}
		if (Y>1){
			printf ("%d ", i);
			}
		}		
	}
}else{
	printf ("Masukkan angka>=1 dan <=100");
}
return 0;
}

/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/

#include <stdio.h>

int main(){
	int angka1, angka2, mod;
	printf ("Masukkan angka 1: ");
	scanf ("%d", &angka1);
	printf ("Masukkan angka 2: ");
	scanf ("%d", &angka2);

	printf ("FPB dari %d dan %d adalah ", angka1, angka2);	
	mod = angka1%angka2;	//2%6 = 2								
	while (mod !=0){
		angka1=angka2; 		//agka1 = 6
		angka2=mod;			//angka2 = 2
		mod=angka1%angka2; 	//6%2 = 0
	}
	printf (" %d", angka2);
	return 0;
}

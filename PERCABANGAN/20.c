/*
	Author	: Iklima Mardiana
	Email	: 11iklimardiana9@upi.edu
	NIM		: 2008765
	Kelas	: KOM2A
*/
#include <stdio.h>
int main(){
	int bilangan, D, E;
	printf ("Masukkan bilangan: ");
	scanf ("%d", &bilangan);
	E=bilangan%10;
	D=(bilangan/10)%10;
	if (bilangan <1 || bilangan>99){
		printf ("Masukkan bilangan yang lebih dari 0 dan kurang dari 100");
	}else{
		if (bilangan==10){
			printf ("SEPULUH");
		}

		if (bilangan>=20 && bilangan<=99){
		switch (D){
			case 2: printf ("DUA PULUH ");break;
			case 3: printf ("TIGA PULUH ");break;
			case 4: printf ("EMPAT PULUH ");break;
			case 5: printf ("LIMA PULUH ");break;
			case 6: printf ("ENAM PULUH ");break;
			case 7: printf ("TUJUH PULUH ");break;
			case 8: printf ("DELAPAN PULUH ");break;
			case 9: printf ("SEMBILAN PULUH ");break;
			}
		switch (E){
			case 1: printf ("SATU ");break;
			case 2: printf ("DUA ");break;
			case 3: printf ("TIGA ");break;
			case 4: printf ("EMPAT ");break;
			case 5: printf ("LIMA ");break;
			case 6: printf ("ENAM ");break;
			case 7: printf ("TUJUH ");break;
			case 8: printf ("DELAPAN ");break;
			case 9: printf ("SEMBILAN ");break;
			}	
		}
		if (bilangan<10){
			switch (E){
			case 1: printf ("SATU ");break;
			case 2: printf ("DUA ");break;
			case 3: printf ("TIGA ");break;
			case 4: printf ("EMPAT ");break;
			case 5: printf ("LIMA ");break;
			case 6: printf ("ENAM ");break;
			case 7: printf ("TUJUH ");break;
			case 8: printf ("DELAPAN ");break;
			case 9: printf ("SEMBILAN ");break;
			}
		}
		if (bilangan>=11 && bilangan<=19){
		switch (E){
			case 1: printf ("SEBELAS ");break;
			case 2: printf ("DUA ");break;
			case 3: printf ("TIGA ");break;
			case 4: printf ("EMPAT ");break;
			case 5: printf ("LIMA ");break;
			case 6: printf ("ENAM ");break;
			case 7: printf ("TUJUH ");break;
			case 8: printf ("DELAPAN ");break;
			case 9: printf ("SEMBILAN ");break;
			}
			if (bilangan>=12 && bilangan<=19){
					printf ("BELAS");
				}
		}

		}
	return 0;
}

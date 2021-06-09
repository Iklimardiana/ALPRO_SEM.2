/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>

void romawi (int angka){
	int m, n, o, p, a;
	for (a=1; a<=angka; a++){
		printf ("%d dikonversi ke romawi menjadi ",a);
		m = (a/1000)%10;
		n = (a/100)%10;
		o = (a/10)%10;
		p = a%10;
		switch (m){
			case 1 : printf ("M");break;
			case 2 : printf ("MM");break;
			case 3 : printf ("MMM");break;
		}
		if (n>=6 && n<=8){
			printf ("D");
			switch (n){
				case 1: case 6: printf ("C");break;
				case 2: case 7: printf ("CC");break;
				case 3: case 8: printf ("CCC");break;
				case 4: printf ("CD");break;
				case 5: printf ("D");break;
				case 9: printf ("CM");break;
			}
		}
			if (o>=6 && o<=8){
				printf ("L");
			}
				switch (o){
					case 1 : case 6: printf ("X");break;
					case 2 : case 7: printf ("XX");break;
					case 3 : case 8: printf ("XXX");break;
					case 4 : printf ("XL");break;
					case 5 : printf ("L");break;
					case 9 : printf ("XC");break;
				}
			if (p>=6 && p<=8){
				printf ("V");
			}
				switch (p){
					case 1 : case 6: printf ("I");break;
					case 2 : case 7: printf ("II");break;
					case 3 : case 8: printf ("III");break;
					case 4 : printf ("IV");break;
					case 5 : printf ("V");break;
					case 9 : printf ("IX");break;
				}
				printf ("\n");	
			}
		}
	
int main(){
	int bilangan;
	printf ("Berapa banyak bilangan yang akan dikonversi?");
	scanf ("%d", &bilangan);
	if (bilangan>=1 && bilangan<=4000){
		romawi (bilangan);	
	}else{
		printf ("angka yang dimasukkan harus >=1 dan <=4000");
	}
	return 0;
}



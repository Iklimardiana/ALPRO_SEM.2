/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main(){
	int m, n, o, p, bilangan,a;
	
	printf ("Berapa banyak bilangan yang akan dimasukkan? ");
	scanf ("%d", &bilangan);
	if (bilangan>0 && bilangan<4000){
		for (a=1; a<=bilangan; a++){
			printf ("%d dikonversi ke bilangan romawi menjadi ",a);
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
			}
				switch (n){
					case 1 : case 6: printf ("C");break;
					case 2 : case 7: printf ("CC");break;
					case 3 : case 8: printf ("CCC");break;
					case 4 : printf ("CD");break;
					case 5 : printf ("D");break;
					case 9 : printf ("CM");break;
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
		else {
			printf ("Masukkan bilangan bulat positif kurang dari 4000");
		}

	return 0;
}

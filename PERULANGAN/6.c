/*
	Author  : Iklima Mardiana
    Email   : 11iklimardiana9@upi.edu
    NIM     : 2008765
    Kelas   : KOM2A
*/
#include <stdio.h>
int main (){
	int a, c, banyak_data_ganjil;
	printf ("Masukkan batas awal: ");
	scanf ("%d", &a);
	printf ("Masukkan batas akhir: ");
	scanf ("%d", &c);
	if(c%2==0 && a%2==0){ //c = genap, a=genap  45678
		banyak_data_ganjil=(c-a)/2; //8-4=4 4/2=2
		printf ("Banyaknya bilangan ganjil adalah %d\n", banyak_data_ganjil);
	}
	else if(((c-a)%2==1) || ((c-a)%2==0)){  //(c-a)%2=ganjil Misal: 5-2 //2345
		banyak_data_ganjil=((c-a)/2)+1; //5-2= 3/2=1+1=2 7-1=6 6/2=3, 3+1 =4 //1234567
		printf ("Banyaknya bilangan ganjil adalah %d\n", banyak_data_ganjil);
	}
	printf ("Bilangan ganjil = ");
	while (a<=c){
		if (a % 2!=0){
			printf ("%d ",a);
		}
		a++;
	}
	return 0;
}

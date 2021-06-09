/*
	Author	: Iklima Mardiana
	NIM		: 2008765
	Kelas	: KOM2A
	Email	: 11iklimardiana9@upi.edu
*/

#include <stdio.h>

void FPB(int angka1,int angka2)
{
	printf ("FPB dari %d dan %d adalah ", angka1, angka2);
	int mod;
	mod = angka1%angka2; //3%5=3
	while (mod!=0)
	{
		angka1=angka2; //angka1 = 5 // angka1= 3	//angka1= 2
		angka2=mod; //angka 2= 3	// angka 2= 2	//angka2 =1
		mod=angka1%angka2; //5%3 = 2	//3%2 =1 	//mod =2%1 =0
	}
	printf ("%d", angka2);
}

int main(){
	int a,b;
	printf ("Masukkan angka ke-1: ");
	scanf ("%d", &a);
	printf ("Masukkan angka ke-2: ");
	scanf ("%d", &b);
	FPB(a,b);
	return 0;
}

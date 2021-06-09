/*	
	Author	  : Iklima Mardiana
	Email	  : 11iklimardiana9@upi.edu
	Deskripsi : Program konversi celcius ke reamur

*/

#include <stdio.h>

int main(){
	float Celcius, reamur;
	
	printf ("Berapa derajat celcius suhu yang ingin anda konversikan ke reamur? ");
	scanf ("%f",&Celcius);
	reamur = 4*Celcius/5;
	printf ("%.1f derajat celcius adalah %.2f derajat reamur",Celcius,reamur);
	return 0;
}

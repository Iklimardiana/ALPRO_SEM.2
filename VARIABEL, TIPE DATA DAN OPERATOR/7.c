/*	
	Author	  : Iklima Mardiana
	Email	  : 11iklimardiana9@upi.edu
	Deskripsi : Program konversi celcius ke reamur
*/
#include <stdio.h>

int main(){
	
	float Celcius, fahrenheit;

	printf ("Berapa derajat celcius suhu yang ingin anda konversikan ke fahrenheit?: ");
	scanf ("%f", &Celcius);
	fahrenheit = (9*Celcius/5)+32;
	printf ("%.1f derajat celcius = %.2f derajat fahrenheit", Celcius, fahrenheit);
	
	return 0;
}

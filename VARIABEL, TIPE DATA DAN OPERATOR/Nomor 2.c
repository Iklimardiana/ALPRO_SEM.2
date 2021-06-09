/*	
	Author		: Iklima Mardiana
	Email 		: 11iklimardiana9@upi.edu
	Deskripsi	: program inputan 3 buah bilangan ril
*/
	
#include <stdio.h>
int main ()
{
	float x,y,z;
	printf ("Masukkan nilai x : ");
	scanf("%f", &x);
	printf ("Masukkan nilai y : ");
	scanf("%f", &y);
	printf ("Masukkan nilai z : ");
	scanf("%f", &z);

	printf("%.1f+%.1f+%.1f=%.2f\n",x,y,z, x+y+z);
	printf("%.1f-%.1f-%.1f=%.2f\n",x,y,z, x-y-z);
	printf("%.1f*%.1f*%.1f=%.2f\n",x,y,z, x*y*z);
	printf("%.1f/%.1f/%.1f=%.2f\n",x,y,z, x/y/z);
	
	
	return 0;
}
	

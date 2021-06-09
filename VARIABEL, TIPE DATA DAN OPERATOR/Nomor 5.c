/*	
	Author 		: Iklima Mardiana
	Email 		: 11iklimardiana9@upi.edu
	Deskripsi 	:Program operasi kode ASCII
*/

#include <stdio.h>
int main()
{
	float a,b,c,d,e;
	a = '2';
	b = 'w';
	c = 'z';
	d = '3';
	e = 'X';
	
	printf("--------------------------------------------\n");
	printf("Operasi hitung character kode ASCII ((2*w)+(z+3)/X) : \n");
	printf("--------------------------------------------\n");
	printf("(%.0f*%.0f)+(%.0f+%.0f)/%.0f=%.3f\n",a,b,c,d,e,((a*b)+(c+d)/e));

	return 0;
	
}
	


/*Buatlah algoritma dalam bahasa C, saya akan diberi hadiah jika rangking 1 di kelas, dan naik
kelas
*/
#include <stdio.h>


int main(){
	int rangking;
	char naikkelas;
	printf ("Rangking berapa? ");
	scanf ("%d", &rangking);
	printf ("Naik kelas? [y/t]");
	scanf (" %c", &naikkelas);
	(rangking==1 && naikkelas=='y')? printf ("Kamu mendapatkan hadiah"): printf ("Kamu tidak mendapatkan hadiah");
	return 0;	
}


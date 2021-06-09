#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tabInt[10]={10,9,8,7,6,5,4,3,2,1};
    int i,temp,tukar,k,jmlTukar;
    //Looping Tukar Metode Bubble
    jmlTukar=0;
    do
    {
        tukar=0;
        for(i=0;i<(10-1);i++)
        {
            if(tabInt[i]>tabInt[i+1])
            {
                jmlTukar++;
                temp=tabInt[i];
                tabInt[i]=tabInt[i+1];
                tabInt[i+1]=temp;
                tukar=1;
            }
            for(k=0;k<10;k++){
                printf("%d ",tabInt[k]);
            }
            printf("\n");
        }
        
    }while(tukar==1);
    
    //Untuk Cetak
    for(i=0;i<10;i++)
    {
        printf(" %d", tabInt[i]);
    }
    printf("\nJumlah Penukaran=%d",jmlTukar);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabInt[5]={34,67,23,28,98};
    int i,temp,tukar;
    
    //Looping Tukar Metode Bubble
    do
    {
        tukar=0;
        for(i=0;i<(5-1);i++)
        {
            if(tabInt[i]>tabInt[i+1])
            {
                temp=tabInt[i];
                tabInt[i]=tabInt[i+1];
                tabInt[i+1]=temp;
                tukar=1;
            }
        }
        
    }while(tukar==1);
    
    //Untuk Cetak
    for(i=0;i<5;i++)
    {
        printf(" %d", tabInt[i]);
    }

    return 0;
}

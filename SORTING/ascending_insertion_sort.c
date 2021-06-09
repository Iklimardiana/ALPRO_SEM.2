#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabInt[10]={34,67,23,28,98,15,89,67,28,18};
    int i,data_sisip,j;
    
    //Pengulangan insertion short
    for(i=1;i<10;i++)
    {
        //Variabel index data sisip
        data_sisip = tabInt[i];
        
        //Variabel index data sebelum data sisip
        j=i-1;
        
        //Pengulangan menukar data siip dan data sebelumnya
        while((data_sisip<tabInt[j]) && (j>=0))
        {
            tabInt[j+1]=tabInt[j];
            j=j-1;
        }
        
        tabInt[j+1]=data_sisip;
        
    }
    
    //Mencetak array
    for(i=0;i<10;i++)
    {
        printf(" %d", tabInt[i]);
    }

    return 0;
}

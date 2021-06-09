#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Deklarasi nilai array
    int tabInt[10]={34,67,23,28,98,15,89,67,28,18};
    //Deklarasi indeks i dan j dan min indeks dan temp
    int i, temp, minIndeks, j;
    for(i=0; i<(10-1); i++)
    {
        minIndeks=i;
        
        for(j=(i+1);j<10;j++)
        {
            if(tabInt[j]>tabInt[minIndeks])
            {
                minIndeks=j;
            }
        }
        temp=tabInt[i];
        tabInt[i]=tabInt[minIndeks];
        tabInt[minIndeks]=temp;
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d ", tabInt[i]);
    }

    return 0;
}

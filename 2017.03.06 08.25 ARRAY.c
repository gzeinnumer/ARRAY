/* ARRAY */
#include "stdio.h"
main()
{
    int nilai[6]={1,5,4,7,6,5};
    int i,gan,gen;
    gan=0;
    gen=0;
    for(i=0; i<6; i++)
    {
        printf("hasil: %d\n",nilai[i]);
        /*printf("Masukan Nilai : "); scanf("%d",&nilai[i]);
        if(nilai[i]%2==2)
            {gan=gan+1;}
        else
            {gen=gen+1;}*/
    }
    printf("\ngenap %d ",gen);
    printf("\nganjil %d ",gen);
}

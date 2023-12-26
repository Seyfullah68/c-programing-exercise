#include <stdio.h>
#include <stdlib.h>
#define a 3
#define b 2

void oku(int seri[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&seri[i][j]);
        }
    }
}
void bastir(int seri[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%3d",seri[i][j]);
        }
        printf("\n");
    }
}
void hesapla(int seri[a][b],int *buyuk, int *kucuk, int *top)
{
    *buyuk=seri[0][0];
    *kucuk=seri[0][0];
    *top=0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(seri[i][j]<*kucuk)
            {
                *kucuk=seri[i][j];
            }
            if(seri[i][j]>*buyuk)
            {
                *buyuk=seri[i][j];


        }
        *top=*top+seri[i][j];
    }
}
}
int main()
{
    int dizi[a][b];
    int max,min,toplam;
    printf(" %d x %d lik matris giriniz\n",a,b);
    oku(dizi);
    bastir(dizi);
    hesapla(dizi,&max,&min,&toplam);
    printf("max: %d, min: %d, toplam: %d",max,min,toplam);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define max 40

void boy(char seri[max], int *x)
{
    int i=0;
    for(i=0;seri[i]!='\0';i++);
    *x=i;
}

void ortak(char a[max],char b[max],int *p)
{
    int i=0,j=0;
    int k=0;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
                k++;
        }
    }
    *p=k;
}

int main()
{
    char dizi[max];
    int i=0;
    int by;
    printf("cumleyi giriniz\n");
    do
    {
        scanf("%c",&dizi[i]);
        i++;
    }
    while(dizi[i-1]!='\n');
    dizi[i-1]='\0';
    printf("diziniz:\n");
    for(i=0;dizi[i]!='\0';i++)
    {
        printf("%c",dizi[i]);
    }
    boy(dizi,&by);
    printf("\n boyu: %d\n",by);
    char diziler1[max];
    char diziler2[max];
    printf("kelimeleri giriniz\n");
    scanf("%s %s",&diziler1,&diziler2);
    int y;
    ortak(diziler1,diziler2,&y);
    printf("%d kadar ortak kelime var",y);
    return 0;
}

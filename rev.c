
#include<stdio.h>
void main()
{
int i,j,k,a,l;
a=4;
for(i=a;i>=1;i--)
{
     for(j=a;j>i;j--)
        printf(" ");

    for(k=1;k<=i;k++)
        printf("%d",k);

    for(l=i-1;l>=1;l--)

        printf("%d",l);

    printf("\n");
}
}

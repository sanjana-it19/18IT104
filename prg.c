#include<stdio.h>
void main()
{
int i,j,k,a;
a=4;
for(i=1;i<=a;i++)
{
        for(j=a-1;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
//printf("\n");}
//for(i=0;i<=a-1;i++)
        for(k=i-1;k>=1;k--)
            printf("%d",k);
        printf("\n");

}
}

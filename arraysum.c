#include<stdio.h>
int main()
{
int a[5],b[5],c[5],i;
printf("Enter elements of array first");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("Elements of array second");
for(i=0;i<5;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<5;i++)
{
c[i]=a[i]+b[i];
printf("Sum of respective elements is %d\n",c[i]);
}
return 0;
}




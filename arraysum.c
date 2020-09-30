#include<stdio.h>
int main()
{
long long int n;
printf("Enter the size of the array");
scanf("%lld",&n);
long long int a[n],b[n],c[n],i;
printf("Enter elements of first array");
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
}
printf("Elements of second array");
for(i=0;i<n;i++)
{
scanf("%lld",&b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i]+b[i];
printf("Sum of respective elements is %lld\n",c[i]);
}
return 0;
}




#include<stdio.h>
int main()
{
int num,sum=0,n,s,r;
printf("Enter any number other than 1");
scanf("%d",&num);
r=num;
while(num != 0)
{
s = num % 10;
sum = sum + (s*s*s);
num = num/10;
}
if(r == sum)
{ 
printf("Input Number is Armstrong Number");
}
else
 printf("Input Number is Not Armstrong Number");
return 0;
}

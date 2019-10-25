#include<stdio.h>
int main()
{
 int a[40],sum=0;
 for(int i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 for(int i=0;i<10;i++)
 {
  sum=sum+a[i];
 }
printf("Average of given numbers is %d",sum/10);
return 0;
}

//Program to check triangular matrix

#include <stdio.h>
int main ()
{
 int n, i, j, is_uppr=1, is_lowr=1, a;
 printf("Enter the order of matrix"); 
 scanf("%d",&n);
 
 for( i=0; i<n; i++)
 {
  for( j=0; j<n; j++)
  {
   scanf("%d",&a);
      if( j>i && a!=0) //Check for lower triangular condition
	is_lowr = -1;
      if( j<i && a!=0) //Check for upper triangular condition
	is_uppr = -1;
    }
  }
if(is_uppr==1)
{
 printf("Yes input matrix is upper triangular\n");
}
if(is_lowr==1)
{
 printf("Yes input matrix is lower triangular\n");
}
if(is_uppr == -1&&is_lowr == -1)
{
 printf("Input matrix is not triangular\n");
}
return 0;
}
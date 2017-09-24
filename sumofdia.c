#include<stdio.h>
int main()
{
int a[3][3],i,j,sum1=0,sum2=0;
printf("Enter elements of matrix A(3 * 3)");
for(i=0;i<3;i++) /* for loop for rows */
{ 
 for(j=0;j<3;j++) /* for loop for columns */
 { 
  scanf("%d",&a[i][j]); /* scanning elements of matrix of 3*3 */
 }
}
for(i=0;i<3;i++) /* loops of reading elements of matrix */
{
 for(j=0;j<3;j++) 
 {
  if(i==j)        /* if rows no. and columns no. are then elements of left diagonal */
  {
    sum1=sum1+a[i][j]; /* sum of elements of left diagonal */
  }
 }
}
printf("Sum of left dia is %d",sum1);
for(i=0;i<3;i++) /* loops of reading elements */
{
 for(j=0;j<3;j++)
 {
  if((i+j)==2) /* if the sum no. of row and column is 2 if rows and columns are starting
		  from 0 then elements are of right diagonal */
   sum2=sum2+a[i][j]; /* sum of elements of right diagonal */
 }
}
printf("Sum of right diagonal is %d",sum2);
return 0;
}


#include<stdio.h>
#include<string.h>

int main()
{
 char A[10], B[10];
 printf("Enter String A\n");
 gets(A); /* scanning string A */
 strcpy(B,A); /* Copying String A into B */
 printf("String A is %s\n",A);
 printf("String B is %s\n",B);
 return 0; 
}

#include<stdio.h>
int main(){
int A[3][3],B[3][3],C[3][3],i,j;

printf("Enter 9 number for first matrix");
for (i=0;i<=2;i++)
 for (j=0;j<=2;j++)
 scanf("%d",&A[i][j]);
printf("Enter 9 Number for second matrix");
for (i=0;i<=2;i++)
 for (j=0;j<=2;j++)
 scanf("%d",&B[i][j]);
 for (i=0;i<=2;i++)
 {
 for (j=0;j<=2;j++)
 {
     C[3][3]=A[i][j]+B[i][j];
     printf("%d",C[i][j]);
 }
 printf("\n");
 }
 getch();
  return 0;



}

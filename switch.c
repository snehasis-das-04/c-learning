#include<stdio.h>
int main(){
    int a,b,op;
    printf("Enter the values of a&b:");
    scanf("%d %d",&a,&b);
    printf(" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division \n");
    printf("Enter Your choice:");
    scanf("%d",&op);
    switch(op){
case 1 :
    printf("sum of %d is %d : %d",a,b,a+b);
    break;

case 2 :
    printf("Difference of %d is %d : %d ",a,b,a-b);
    break;

case 3 :
    printf("Multiplication of %d is %d : %d",a,b,a*b);
    break;

case 4 :
    printf("division of %d is %d : %",a,b,a/b);
    break;

default :
    printf("Enter your choice");
    break;

    }
    return 0;


}

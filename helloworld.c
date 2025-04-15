#include<stdio.h>

int main(){
    int start, end, i;
    printf("Enter First Number:");
    scanf("%d",&start);
    printf("Enter Second Number:");
    scanf("%d",&end);
    for(i=start; i<= end; i++){
    int j,temp=0;
        for(j=2; j<=(i-1); j++){
            if (i%j == 0){
                temp+=1;
            }


        }
              if (temp<1) printf("%d the number is",i);
}
return 0;
}

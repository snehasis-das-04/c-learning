#include<stdio.h>

int main(){
    int start, end;
    printf("Enter First Number:");
    scanf("%d",&start);
    printf("Enter Second Number:");
    scanf("%d",&end);

    for(int i=start; i<=end; i++){
        int temp=0;
        for(int j=2; j<=(i-1); j++){
            if (i%j == 0){
                temp+=1;
            }

        }
        if (temp<1) printf("%d \n",i);
    }

    return 0;
}

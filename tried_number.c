#include<stdio.h>
int main(){
    int num,start;
    int temp1,temp2,temp3;
    int d1,d2,d3;
    printf("Enter number : ");
    scanf("%d",&start);

    if(start<100 || start>999){
        printf("Entered number is invalid ");
    }
    printf("Triad numbers starting from %d:\n", start);

     for(num=start;num<=333;num++){
        temp1=num;
        temp2=num*2;
        temp3=num*3;

        int usedDigit[10]={0};
        int isValid = 1;

        if(temp1>0){
            d1=temp1%10;
            if(usedDigit[d1]){
                isValid =0;
                break;
            }
            usedDigit[d1]=1;
            temp1/=10;
        }

        if(temp2>0){
            d2=temp2%10;
            if(usedDigit[d2]){
                isValid =0;
                break;
            }
            usedDigit[d2]=1;
            temp2/=10;
        }

        if(temp3>0){
            d3=temp3%10;
            if(usedDigit[d3]){
                isValid =0;
                break;
            }
            usedDigit[d3]=1;
            temp3/=10;
        }

        if(isValid){
            printf("%d %d %d ",num,num*2,num*3);
        }
    }
}
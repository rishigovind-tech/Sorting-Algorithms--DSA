#include<stdio.h>

int factorial(int num)
{
    if(num==1 || num==0){
        return 1;
    }
    printf("%d * %d\n",num,num-1);
    return num * factorial(num-1);
}

int main(){
    int result=factorial(5);
    printf("%d",result);
}
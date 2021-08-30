#include<stdio.h>
#include<stdbool.h>
bool ChkPrime(int N)
{
    if((N%2)==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    auto int a;
    bool bret=0;
    printf("Enter number:\n");
    scanf("%d",&a);
    bret =ChkPrime(a);
    if(bret==1){
        printf("Even Number.");
    }
    else{
        printf("Odd Number.");
    }



}
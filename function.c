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
int Maximum(int iNo1,int iNo2){
    if(iNo1>iNo2){
        return iNo1;
    }
    else{
        return iNo2;
    }
}

int main(){
    auto int a=0;
    bool bret=0;
    printf("Enter number:\n");
    scanf("%d",&a);
    bool (*Primeptr)(int);
    Primeptr=ChkPrime;
    bret =Primeptr(a);
    if(bret==1){
        printf("Even Number.");
    }
    else{
        printf("Odd Number.");
    }
   auto int i=0,j=0,Mret=0;
    printf("\n****** Maximum function starts ********");
    printf("\nEnter 1st number:");
    scanf("%d",&i);
    printf("Enter 2nd number:");
    scanf("%d",&j);
    int (*Maxptr)(int ,int);
    Maxptr=Maximum;
    Mret=Maxptr(i,j);
    printf("Maximum Number is :%d",Mret);
    return 0;

}
#include<stdio.h>
#include<stdbool.h>

int ChkPlindrom(int);
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter number:");
    scanf("%d",&iValue);
    bRet=ChkPlindrom(iValue);
    if (bRet==true)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}
int ChkPlindrom(int iNo)
{
    int iDigit=0;
    int iTemp=iNo;
    int iRev=0;
    while (iNo !=0)
    {
        iDigit=iNo%10;
        iRev= (iRev *10) +iDigit;
        iNo=iNo/10;
    }
        if(iRev ==iTemp)
        {
            return true;
        }
        else{
            return false;
        }   

}
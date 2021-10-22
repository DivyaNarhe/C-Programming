#include<stdio.h>
int DigitOperation();
int main()
{   int iValue=0;
    int iRet=0;
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=DigitOperation(iValue);
   printf("\ncount is:%d",iRet);
    //printf("Addition is:%d",iRet);
   
    return 0;
}
int DigitOperation(int iNo)
{
    if(iNo==0)
    {
        return 1;
    }
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iSum=0;
    int iDigit=0;
    int iCnt=0;
    while (iNo!=0)
    {
        iDigit=iNo %10;
        iCnt++;
      iSum=iSum + iDigit;
        iNo=iNo /10;
    }
    //return iCnt;
    return iSum;
    
}
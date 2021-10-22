#include<stdio.h>
int CountEven(int); //Declaration
int main()  //Entry point function
{
    int iValue=0;  //local variable
    int iRet=0;    // local variable
    printf("Enter number:");
    scanf("%d",&iValue);
    iRet=CountEven(iValue);
    printf("Number of Even digit are :%d",iRet);

return 0;
}
int CountEven(int iNo)   //function
{
    int iCnt=0;
    int iDigit=0;
    if(iNo == 0)          //Filter
    {   
        return 1; 
    }
    
    if(iNo < 0)            //Input Updater
    {
           iNo = -iNo; 
    }
    
    while (iNo>0)
    {
        iDigit=iNo %10;
        if((iDigit%2)==0)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
    
}
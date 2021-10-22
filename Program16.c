#include<stdio.h>
#include<stdbool.h>

int SumFactor(int iNo);
bool CheckPerfect();
int main()
{
    int iValue=0;
    bool bRet=false;

    printf("\nEnter number:");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("\nNumber is perfect");
    }
    else
    {
        printf("\nNumber is not perfect");
    }
    return 0;
}

bool CheckPerfect(int inumber)
{
    int iRet=0;
    iRet=SumFactor(inumber);

    if(inumber<0)
    {
        inumber=-inumber;
    }

    if(iRet==inumber)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int SumFactor(int iNo)
{
    int iSum=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if((iNo%iCnt)==0)
        {
        iSum=iSum+iCnt;
        }
    }    
    return iSum;   
}
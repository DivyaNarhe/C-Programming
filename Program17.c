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
    int iSum=0;
    int iCnt=0;
    if(inumber<0)
    {
        inumber=-inumber;
    }
    for(iCnt=1;iCnt<=(inumber/2);iCnt++)
    {
        if((inumber%iCnt)==0)
        {
        iSum=iSum+iCnt;
        }
    }    
    if(iSum==inumber)
    {
        return true;
    }
    else
    {
        return false;
    }

}


#include<stdio.h>
int Power(int ,int );
int main()
{
    int ino1=0;
    int ino2=0;
    int iret=0;

    printf("Enter number:");
    scanf("%d",&ino1);
    printf("Enter number:");
    scanf("%d",&ino2);

    iret=Power(ino1,ino2);
    printf("power is :%d",iret);
    return 0;
}
int Power(int ivalue1,int ivalue2)
{
    int ans=1;
    int icnt=0;
    
    for(icnt=1;icnt<=ivalue2;icnt++)
    {
        ans=ans*ivalue1;
    }
    return ans;
}
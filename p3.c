#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit4(UINT ino)
{
    UINT imask=0x00000008;
    UINT iresult=0; 

    iresult = ino & imask;
   if(iresult==imask) 
   {
       return true;
   }
   else
   {
       return false;
   }
}
int main()
{
    UINT ivalue=0;
    bool bret=false;

    printf("Enter no:");
    scanf("%d",&ivalue);

    bret = CheckBit4(ivalue);

    if(bret==true)
    {
        printf("4 th bit is on");
    }
    else
    {
        printf("4 th bit is off");
    }
    return 0;
}
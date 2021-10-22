#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit7_12(UINT ino)
{
    UINT imask=0x00000840;
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

    bret = CheckBit7_12(ivalue);

    if(bret==true)
    {
        printf(" bit is on");
    }
    else
    {
        printf(" bit is off");
    }
    return 0;
}
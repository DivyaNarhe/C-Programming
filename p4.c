#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit21(UINT ino)
{
    UINT imask=0x00100000;
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

    bret = CheckBit21(ivalue);

    if(bret==true)
    {
        printf("21 th bit is on");
    }
    else
    {
        printf("21 th bit is off");
    }
    return 0;
}
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBitlast4(UINT ino)
{
    UINT imask=0x0000000f;
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

    bret = CheckBitlast4(ivalue);

    if(bret==true)
    {
        printf("4 bits is on");
    }
    else
    {
        printf("4 bits is off");
    }
    return 0;
}
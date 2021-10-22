#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT ino, UINT pos)
{
    UINT imask=0x00000001;
    UINT iresult=0; 

    if((pos<1) || (pos>32))
    {
        return false;
    }
    
    imask = imask<<(pos - 1);
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
    UINT ivalue=0,ibit=0;
    bool bret=false;

    printf("Enter no:");
    scanf("%d",&ivalue);

    printf("Enter position:");
    scanf("%d",&ibit);

    bret = CheckBit(ivalue,ibit);

    if(bret==true)
    {
        printf(" Bit is on");
    }
    else
    {
        printf(" Bit is off");
    }
    return 0;
}
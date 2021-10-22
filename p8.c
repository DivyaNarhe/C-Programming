#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBitby2Position(UINT ino, UINT pos1, UINT pos2)
{
    UINT imask=0;
    UINT imask1=0x00000001;
    UINT imask2=0x00000001;
    UINT iresult=0; 

    if((pos1<1) || (pos1>32))
    {
        return false;
    }
    if((pos2<1) || (pos2>32))
    {
        return false;
    }
    
    imask1 = imask1<<(pos1 - 1);
    imask2 = imask2<<(pos2 - 1);

    imask = imask1 & imask2;
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
    UINT ivalue1=0,ibit1=0, ibit2=0;
    bool bret=false;

    printf("Enter no:");
    scanf("%d",&ivalue1);

    printf("Enter position:");
    scanf("%d",&ibit1);

   printf("Enter position:");
    scanf("%d",&ibit2);

    bret = CheckBitby2Position(ivalue1,ibit1 ,ibit2);

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
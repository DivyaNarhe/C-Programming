#include<stdio.h>
void DisplayBinary(int ino)
{
    int idigit=0;
    while(ino!=0)
    {
        idigit=ino%2;
        printf("%d\t",idigit);
        ino=ino/2;
    }
    
}
int main()
{
    int ivalue=0;
    printf("Enter no:");
    scanf("%d",&ivalue);

    DisplayBinary(ivalue);

    return 0;
}
#include<stdio.h>
void Display();

int main()
{   
    int ivalue=0;
    
    printf("Enter no:");
    scanf("%d",&ivalue);
    
    Display(ivalue);
    return 0;
}

void Display(int ino)
{
    int idigit=0;
    
    while(ino>0)
    {
    idigit = ino % 10;      //7
    printf("%d\n",idigit);
    ino=ino/10;             //0
    }
}
#include<stdio.h>
void Display();

int main()
{
    Display();
    return 0;
}
void Display()
{
    int ino=7521;
    int idigit=0;
    
    while(ino>0)
    {
    idigit = ino % 10;      
    printf("%d\n",idigit);
    ino=ino/10;             
    }
}
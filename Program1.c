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
    
    idigit = ino % 10;     //1
    printf("%d\n",idigit);
    ino=ino/10;            //752
    
    idigit = ino % 10;     //2
    printf("%d\n",idigit);
    ino=ino/10;            //75

    idigit = ino % 10;      //5
    printf("%d\n",idigit);
    ino=ino/10;             //7

    idigit = ino % 10;      //7
    printf("%d\n",idigit);
    ino=ino/10;             //0

}
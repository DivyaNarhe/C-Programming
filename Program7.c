#include<stdio.h>
int Counter(int);

int main()
{   
    int ivalue=0;
    int iret=0;
    printf("Enter no:");
    scanf("%d",&ivalue);
    
    iret = Counter(ivalue);
    printf("\n count digit is:%d",iret);

    return 0;
}

int Counter(int ino)
{
    int idigit=0;
    int icnt=0;
    
    if(ino==0)
    {
        return 1;
    }
    if(ino<0)
    {
        ino=-ino;
    }
    while(ino!=0)
    {
    idigit = ino % 10;  
    icnt++;
    ino=ino/10;       
    }
    
    return icnt;
}
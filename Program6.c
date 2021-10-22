#include<stdio.h>
int Display(int);

int main()
{   
    int ivalue=0;
    int iret=0;
    printf("Enter no:");
    scanf("%d",&ivalue);
    
    iret = Display(ivalue);
    printf("\n Addition is:%d",iret);

    return 0;
}

int Display(int ino)
{
    int idigit=0;
    int isum=0;
    int icnt=0;

    if(ino<0)
    {
        ino=-ino;
    }
    while(ino!=0)
    {
    idigit = ino % 10;  
    isum = isum + idigit;  
    ino=ino/10;             
    }
    return isum;
    
    

}
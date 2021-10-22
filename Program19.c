#include<stdio.h>
void DisplayTable(int);
int main()
{
    int ino=0;

    printf("\n Enter number:");
    scanf("%d",&ino);

    DisplayTable(ino);
    
    return 0;
}
void DisplayTable(int inumber)
{
    int icnt=0;
    int ians=0;
    
    if(inumber<0)
    {
        inumber-inumber;
    }
    if(inumber==0)
    {
        return ;
    }
    for(icnt=1;icnt<=10;icnt++)
    {
        ians=inumber*icnt;
        printf( "\n%d*%d=%d",inumber,icnt,ians);
    }

}
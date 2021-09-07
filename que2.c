/*Accept number from user and 
display '*' on screen using while loop */
#include<stdio.h>
void Display(int iNo) 
{ 
 while( iNo>=1 ) 
 { 
 printf(" * \n"); 
 iNo --;
 } 
} 
int main() 
{
    int iValue = 0; 
 printf("Enter number :"); 
 scanf("%d" ,&iValue); 
 Display(iValue); 
 return 0; 
}
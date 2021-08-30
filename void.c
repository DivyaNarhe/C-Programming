#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60};
    void *vptr1=arr;
    void *vptr2=arr+5;
    printf("\n**** Value ****\n");
    printf("*(int *)vptr2 : %u\n",*(int *)vptr2);
    printf("\n**** Address ****\n");
    printf("Vptr1 :%u\n",vptr1);
    printf("Vptr2 :%u\n",vptr2);
    printf("\n**** Arithmetic ****\n");
    printf("(int *)vptr1+3 : %u\n",(int *)vptr1+3);
    printf("(int *)vptr2-3 : %u\n",(int *)vptr2-3);
    printf("(int *)vptr2-(int *)vptr1 : %d\n",(int *)vptr2-(int *)vptr1);
    

    return 0;
}
#include<stdio.h>

int main(){
    int arr[]={10,20,30,40,50};
    int *aptr=&(arr[0]);
    int *bptr=&(arr[4]);
    printf("\n********size**\n");
    printf("Size of array is :%d\n",sizeof(arr));
    printf("Size of pointer aptr is :%d\n",sizeof(aptr));
    printf("Size of pointer bptr is :%d\n",sizeof(bptr));
    printf("\n******Address*******\n");
    printf("Address of arr:%u\n",arr);
    printf("Address of aptr:%u\n",aptr);
    printf("Address of bptr:%u\n",bptr);
    printf("\n*********Values***********\n");
    printf("Value at arr[0]:%d\n",arr[0]);
    printf("Value at arr[1]:%d\n",arr[1]);
    printf("Value at arr[2]:%d\n",arr[2]);
    printf("Value at arr[3]:%d\n",arr[3]);
    printf("Value at arr[4]:%d\n",arr[4]);
    printf("Value of *aptr:%d\n",*aptr);
    printf("Value of *bptr:%d\n",*bptr);
    printf("\n**Pointer Arithmetic**\n");
    printf("aptr+2=%u\n",aptr+2);
    printf("bptr-2=%u\n",bptr-2);
    printf("bptr-aptr=%d\n",bptr-aptr);
    return 0;

}
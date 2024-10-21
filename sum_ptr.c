#include<stdio.h>

// int sum(int *a,int *b){

//     int sum;
//     sum=a+b;
//     return sum;
// }

int main(){


   int arr[10]={1,2,3,4};
   int brr[10]={6,7,8,9};
   int *ptr=arr;
   int *ptr2=brr;
   int temp;

   for(int i=0;i<2;i++){
    temp=*(ptr+i);
    *(ptr+i)=*(ptr+(4-i-1));
    *(ptr+(4-i-1))=temp;
   }
   for(int i=0;i<4;i++){
    printf("%d",arr[i]);
   
   }
   
    


    return 0;
}
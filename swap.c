#include <stdio.h>
#include <assert.h>
#include <stdlib.h>


void swap_max(int arr[], int l, int n){ 
 int i=0,t,x,max=arr[n];
 
 for(i=n;i<l;i++){ 
   
   if(arr[i]>=max){
    max=arr[i];
    x=i;
   }
 } 
  t=arr[n];
  arr[n]=arr[x];
  arr[x]=t;

}



void ssort(int arr[], int l){

   for(int n=0;n<l;n++){
   
      swap_max(arr, l, n);
   
   }

}





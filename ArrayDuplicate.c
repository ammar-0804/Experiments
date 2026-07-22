Q. An array contains 10 elements. Given a number "x" that may occur several times in the array, perform the following tasks:
 a) Write a program to find the number of occurrences of "x" in the array, along with the position 
    of the first occurrence in the array.

   soln:

#include<stdio.h> 
int main(){ 
 int size, dupli, count=0, occur=-1,index; 
 printf("Enter the number of elements in an array: "); 
 scanf("%d", &size); 
 
 int arr[size]; 
 for(int i=0;i<size;i++){ 
 printf("Enter number %d: ", (i+1)); 
 scanf("%d", &arr[i]); 
 } 
 printf("Enter target element: "); 
 scanf("%d", &dupli); 
 for(int i=0;i<size;i++){ 
 if(dupli == arr[i]){ 
 count++; 
 if(occur<0){ 
 occur = i+1; 
 } 
 } 
 
 } 
 if(count>1){ 
 printf("The duplication of %d is:%d\n", dupli, count); 
 printf("The first position of occurence is %d.\n", occur); 
 } 
 else{ 
 printf("No duplication found"); 
 } 
 return 0; 
} 

//wap to find maximum number in array
#include<stdio.h>
	int main()    
{    
     
    int i, arr[] = {23,48,234,98,73};         
    int length = sizeof(arr)/sizeof(arr[0]);       
    int max = arr[0];    
           
    for ( i = 0; i < length; i++) {         
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element  in given array: %d\n", max);    
    return 0;    
}

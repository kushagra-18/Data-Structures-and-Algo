#include <iostream>

using namespace std;

void maxMinArray(int arr[], int size)
{
  

int min = arr[0],max = arr[0],i; 

    for (i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
            max = arr[i]; 
        
    }

     for (i = 1; i < size; i++) 
    {
        if (arr[i] < min) 

            min = arr[i];
    }




cout<<"Maximum Element:"<<max<<end;

cout<<"Minimum Element:"<<min;

}


int main(){

int arr[] = {8,1,2,3,7,9,12,14,18,7};

int size = sizeof(arr)/sizeof(arr[0]);

maxMinArray(arr,size);

return 0;
}
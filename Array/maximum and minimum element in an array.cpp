#include <iostream>

using namespace std;

void maxMinArray(int arr[], int size)
{


    int start = 0;
    int end = size-1;

    while(start < end){

    int temp = arr[start];

    arr[start] = arr[end];

    arr[end] = temp;

    start++;
    end--;
    }

 for(int i = 0;i<size;i++ )   
    cout<<arr[i]<<" ";
}


int main(){

int arr[] = {1,2,3,7,9,1,0,4,5,6};

int size = sizeof(arr)/sizeof(arr[0]);

reverseArray(arr,size);

return 0;
}
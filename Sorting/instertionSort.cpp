#include <iostream>
#include<algorithm>

using namespace std;

void insertionSort(int arr[], int size)
{

    int i,j = 0;

  for(i = 1;i<size;i++){

      int curr = arr[i];
      j = i-1;

      while(arr[j] > curr  && j>=0){

            arr[j+1] = arr[j];
            j--;
    }
        arr[j+1] = curr;
 }
for(i = 0;i<size;i++){

    cout<<arr[i]<<" ";
    }
}

int main(){

int arr[] = {10,8,20,17,2,5};

int size = sizeof(arr)/sizeof(arr[0]);

insertionSort(arr,size);

return 0;
}
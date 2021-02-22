#include <iostream>
#include<algorithm>

using namespace std;

void selectionSort(int arr[], int size)
{

    int i,j = 0,midEl;

  for(i = 0;i<size-1;i++){

       midEl = i; 

      for(j = i+1;j<size;j++){

            if(arr[j] < arr[midEl])
                midEl = j;
      }
       swap(arr[midEl],arr[i]);
 
  }


  //for pritning

for(i = 0;i<size;i++){

    cout<<arr[i]<<" ";
    }

}



int main(){

int arr[] = {10,5,8,20,2,18};

int size = sizeof(arr)/sizeof(arr[0]);

selectionSort(arr,size);

return 0;
}
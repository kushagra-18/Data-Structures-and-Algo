#include <iostream>
#include<algorithm>

using namespace std;

void bubbleSort(int arr[], int size)
{

    int i,j = 0;

  for(i = 0;i<size;i++){

      bool swapped = false; //for efficient performance

      for(j = 0;j<size-i-1;j++){

            if(arr[i] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;    
            }
      }

    if(swapped == false){
        break;
    }

  }
for(i = 0;i<size;i++){

    cout<<arr[i]<<" ";
}

}



int main(){

int arr[] = {10,8,20,5};

int size = sizeof(arr)/sizeof(arr[0]);

bubbleSort(arr,size);

return 0;
}
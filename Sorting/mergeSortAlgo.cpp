#include <iostream>
#include<algorithm>

using namespace std;

void mergeSort(int arr[], int l,int r)
{

int m = l + (r-l)/2;

mergeSort(arr,l,r);
mergeSort(arr,m+1,r);
merge(arr,l,m,r);

  }
  
for(int i = 0;i<size;i++){

    cout<<arr[i]<<" ";
    }

}



int main(){

int arr[] = {10,8,20,5};

int size = sizeof(arr)/sizeof(arr[0]);

int l = arr[0];
int r = arr[size -1];

mergeSortSort(arr,l,r);

return 0;
}
#include <iostream>
#include<algorithm>

using namespace std;

void kSum(int arr[], int size,int k)
{
    int i, currMax,totMax;
  
     currMax = totMax = arr[0];

    for(i = 1; i<size;i++){

        currMax = max(currMax + arr[i],arr[i]);
        if(currMax > totMax){
            totMax = currMax;

        }
    }

cout<<"Maximum sum of subarray:"<<totMax;
}

int main(){

int arr[] = {1, 5, 7, 1};

int k = 4;

int size = sizeof(arr)/sizeof(arr[0]);

kSum(arr,size,k);

return 0;
}
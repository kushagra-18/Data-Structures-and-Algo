#include <iostream>
#include<algorithm>

using namespace std;

void kadaneAlgo(int arr[], int size)
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

int arr[] = {1,2,3,-2,5};

int size = sizeof(arr)/sizeof(arr[0]);

kadaneAlgo(arr,size);

return 0;
}
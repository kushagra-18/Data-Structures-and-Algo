#include <iostream>

using namespace std;

void maxMinArray(int arr[], int size)
{

for(int i = 0;i<size; i++){

    max = arr[0];

        if(max > arr[i]){
            
            arr[0] = max;

        }

}

cout<<max;

}


int main(){

int arr[] = {8,1,2,3,7,9,14};

int size = sizeof(arr)/sizeof(arr[0]);

maxMinArray(arr,size);

return 0;
}
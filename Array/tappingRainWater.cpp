#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void tappingRain(int arr[], int size)
{   
    
    int max,i,count = 0;

    if(arr[0] >= arr[size-1]){
        max = arr[size-1];
    }else{

        max = arr[0];
    }

    for(i = 1; i<size-1;i++)
    {
        count = count + (max - arr[i]);

    }

    if(count < 0)
    count = 0;

cout<<"Max water:"<<count;

}

int main()
{

int arr[] = {5,0,6,2,3};

int size = sizeof(arr)/sizeof(arr[0]);

tappingRain(arr,size);

return 0;

}
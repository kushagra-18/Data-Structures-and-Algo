#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void minDiff(int arr[], int size)
{

   int minEl = arr[0],i,j;
   int res = arr[1] - arr[0];

    for(i = 1;i<size;i++){

        res = max(res, arr[i] - minEl );

        minEl = min(minEl,arr[i]);

    }

cout<<"Min Element:"<<res;



}

int main()
{

int arr[] = {2,3,10,6,4,8,1};

int size = sizeof(arr)/sizeof(arr[0]);

minDiff(arr,size);

return 0;

}
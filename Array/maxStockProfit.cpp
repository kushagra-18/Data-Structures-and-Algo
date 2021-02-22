#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void maxStock(int arr[], int size)
{   
    
    int profit = 0,i;

    for(i = 1; i<size;i++)
    {
        if(arr[i] > arr[i-1]){

            profit = profit + (arr[i] - arr[i-1]);
        }


    }

cout<<"Profit:"<<profit;

}

int main()
{

int arr[] = {1,5,3,8,12};

int size = sizeof(arr)/sizeof(arr[0]);

maxStock(arr,size);

return 0;

}
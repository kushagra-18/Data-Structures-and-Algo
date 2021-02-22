#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void negElement(int arr[], int size)
{

    int j = 0;

    int currLead = arr[size-1];

    cout<<currLead<<" ";

    for(int i = size-2;i>=0;i--){

            if (arr[i] > currLead){
                    currLead = arr[i];
                    cout<<currLead<<" ";
        }
    }
}

int main()
{

int arr[] = {7,10,4,10,6,5,2};

int size = sizeof(arr)/sizeof(arr[0]);

negElement(arr,size);

return 0;

}
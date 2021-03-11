#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void negElement(int arr[], int size)
{

    int j = 0 ;

    for(int i = 0;i<size;i++){

            if (arr[i] == 0){

                if(i!=j)
                {
                    swap(arr[i],arr[j]);
                    j++;
                }
        }
    }

for(int i = 0;i<size;i++){

    cout<<arr[i]<<" ";

    }
}

int main()
{

int arr[] = {0,1,0,3,12};

int size = sizeof(arr)/sizeof(arr[0]);

negElement(arr,size);

return 0;

}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void maxOnes(int arr[], int size)
{   
    
    int count = 0,i,res = 0;

    for(i = 0; i<size;i++){

        if(arr[i] == 1)
        {
             res = max(count,res);   
            count++;
        }

            else{
            
            count = 0;
            }

    }

cout<<"Max Ones:"<<res;



}

int main()
{

int arr[] = {1,0,1,1,0,1};

int size = sizeof(arr)/sizeof(arr[0]);

maxOnes(arr,size);

return 0;

}
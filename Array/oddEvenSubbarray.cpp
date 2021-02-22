#include <iostream>
#include<algorithm>

using namespace std;

void addEven(int arr[], int size)
{
    int i, count = 1,totMax = 1;

    for(i = 0; i<size-1;i++){

        if((arr[i] + arr[i + 1]) % 2 == 1){

            count++;

        }else{

            totMax = max(count,totMax);

            count = 1;

        }
    }

cout<<"Length of max sub arrray:"<<max(totMax,count);
}

int main(){

int arr[] = {7,10,13,14};

int size = sizeof(arr)/sizeof(arr[0]);

addEven(arr,size);

return 0;
}
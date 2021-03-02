#include <iostream>
#include<algorithm>

using namespace std;

void margeArray(int arr[],int arr1[], int size,int size1)
{

    int i = 0,j = 0;

while(i < size && j<size1){

    if(arr[i] < arr1[j] ){

        cout<<arr[i++]<<" ";


     }else {

         cout<<arr1[j++]<<" ";
     }

    }
    
     while(i<size){

         cout<<arr[i++]<<" ";
     }

     while(j<size1){

         cout<<arr1[j++]<<" ";
     }
}
int main(){

int arr[] = {10,15,20,40};

int arr1[] = {5,6,6,10,15};


int size = sizeof(arr)/sizeof(arr[0]);

int size1 = sizeof(arr1)/sizeof(arr1[0]);

margeArray(arr,arr1,size,size1);

return 0;
}
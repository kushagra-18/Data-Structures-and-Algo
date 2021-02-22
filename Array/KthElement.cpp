#include <iostream>
#include <algorithm>

using namespace std;

void kthELement(int arr[], int size,int k)
{
  
  sort(arr, arr + size);

  cout<<arr[k-1];


}


int main(){

int arr[] = {8,1,2,3,7,9,12,14,18,7};

int size = sizeof(arr)/sizeof(arr[0]);

int k;
cout<<"Enter K:";
cin>>k;

kthELement(arr,size,k);

return 0;
}
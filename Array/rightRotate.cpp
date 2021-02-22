#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rightRotate(int arr1[], int size1)
{

  int temp = arr1[size1-1],i;

  for(i = size1-1;i>0;i--){

      arr1[i] = arr1[i-1];
  }
  
  arr1[0] = temp;


  for (i = 0;i<size1;i++){

      cout<<arr1[i]<<" ";
  }

}


int main(){

int arr1[] = {1,2,3,4,5};


int size1 = sizeof(arr1)/sizeof(arr1[0]);


rightRotate(arr1,size1);

return 0;
}
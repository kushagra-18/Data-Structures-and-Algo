#include <iostream>
#include<algorithm>

using namespace std;

void pythTip(int arr[], int size)
{
    int i,j;

    //squaring each number
   
   for(i = 0; i<size;i++){

       arr[i] = arr[i]*arr[i];
   }


sort(arr, arr + size);

   for(i = 0;i<size;i++){

       for(j = 0;j<size;j++){

           


       }
  
  
  
  
  
   }









    }

cout<<"Maximum sum of subarray:"<<totMax;
}

int main(){

int arr[] = {3, 1, 4, 6, 5};

int size = sizeof(arr)/sizeof(arr[0]);

pythTip(arr,size);

return 0;
}
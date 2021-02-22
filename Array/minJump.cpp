#include <iostream>
#include<algorithm>

using namespace std;

void minJump(int arr[], int size)
{

    int i = 0,count = 0,n = 0;

  while(i<size){

      n = arr[n] + n;
      count++;
      if(n>=size){
          break;
      }
      i++;

  }

cout<<"Minimum jumps:"<<count;

}

int main(){

int arr[] = {1,3 ,5 ,8 ,9 ,2, 6, 7, 6, 8 ,9 };

int size = sizeof(arr)/sizeof(arr[0]);

minJump(arr,size);

return 0;
}
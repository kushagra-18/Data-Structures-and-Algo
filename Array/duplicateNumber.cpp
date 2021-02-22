#include <iostream>
#include<algorithm>

using namespace std;

void duplicateNumber(int arr[], int size)
{

    int i,j = 0,n = 0;

  for(i = 0;i<size;i++){

      for(j = 0;j<size;j++)

            if(i!=j){
                if(arr[i]==arr[j])
                    n = arr[i];

            }

  }

cout<<"Repeated Number:"<<n;

}

int main(){

int arr[] = {1,1,2};

int size = sizeof(arr)/sizeof(arr[0]);

duplicateNumber(arr,size);

return 0;
}
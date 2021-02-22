#include <iostream>
#include <algorithm>
#include <vector>
#include<unordered_map>

using namespace std;

void unionArr(int arr1[],int arr2[], int size1,int size2)
{

  unordered_map<int, int> map;

   
   for(int i = 0; i<size1;i++){

       map[arr1[i]]++;
   }


   for(int j = 0; j<size1;j++){

       map[arr2[j]]++;
   }
    
    cout<<map.size();
  





}


int main(){

int arr1[] = {1,2,3,4,5};

int arr2[] = {1,2,3};

int size1 = sizeof(arr1)/sizeof(arr1[0]);

int size2 = sizeof(arr2)/sizeof(arr2[0]);

unionArr(arr1,arr2,size1,size2);

return 0;
}
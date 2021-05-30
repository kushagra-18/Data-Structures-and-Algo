#include <iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>


using namespace std;

vector <int> twoPairs(int arr[], int size,int n)
{

    vector <int> res;

    unordered_set <int> mp;

   
   int i,x;


   for(i = 0;i<size;i++){


    x = n - arr[i];

    if(mp.find(x)!= mp.end()){

        res.push_back(x);
        res.push_back(arr[i]);

        return res;


    }

        mp.insert(arr[i]);


   }

   return {};


}

int main(){

int arr[] = {10,5,2,3,-6,9,11};

int n = 4;

int size = sizeof(arr)/sizeof(arr[0]);

auto nums = twoPairs(arr,size,n);

cout<<nums[0]<<" "<<nums[1];

return 0;
}
#include <iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>


using namespace std;

vector <vector<int>> threePairs(vector <int> arr, int n,int target)
{

    sort(arr.begin(),arr.end());

    vector <vector<int>> res;

    int targetSum = 0;

    for(int i = 0;i<n-3;i++){

        int j = i + 1;
        int k = n - 1;


            while(j<k)
            {

                targetSum += arr[i] + arr[j] + arr[k];


                if(target==targetSum){

                    res.push_back({arr[i],arr[j],arr[k]});
                    
                    j++;
                    k--;
                    
                }else if(targetSum > target){

                        k--;

                }else{

                    j++;
                }

            }

    }


return res;
}

int main(){

vector<int> arr{-1,0,1,2,-1,-4};

int n = 0;

int size = arr.size();

auto nums = threePairs(arr,size,n);

for(auto i: nums){


    for(auto x : i){

        cout<<x<<" , ";
    }

    cout<<"\n";
}



return 0;
}
#include<vector>
#include <iostream>
using namespace std;

vector<int> productArray(vector<int> arr){
    
    int n = arr.size();
    vector<int> output;

    int tot = 1;

    for(int i = 0;i<n;i++){

        tot = tot*arr[i];

    }


    for(int i = 0;i<n;i++){

        int res = tot/arr[i];

        output.push_back(res);

    }
    
    

    
    
    
    return output;
}

int main()

{

    vector <int> arr =  {1,2,3,4,5};

    auto b = productArray(arr);

    for(auto x : b){

        cout<<x<<" ";
    }
  

return 0;

}


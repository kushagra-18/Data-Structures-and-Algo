#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

 vector<int> sortSubArray(int arr[], int n)
{   
    
	    vector <int> a;
	    
	    for(int k = 0;k<n;k++){
	        
	        a.push_back(arr[k]);
	        
	    }
	    
	    sort(a.begin(),a.end());
	    
	    int i,j;
	    
	    for(i = 0;i<n;){
	        
	            if(a[i]!=arr[i]){
	                
	                break;
	                
	            }
	        
	        i++;
	    }
	    
	    	    for(j = n-1;j>0;){
	        
	            if(a[j]!=arr[j]){
	                
	                break;
	                
	            }
	        
	        j--;
	    }
	    
	    if(i==n){
	        
	        return {0,0};
	    }
	    
	    return {i,j};
	}



int main()
{

int arr[] = {10,12,20,30,25,40,32,31,35,50,60};

int size = sizeof(arr)/sizeof(arr[0]);

auto x = sortSubArray(arr,size);

for(auto i: x){

    cout<<i<<" ";
}

return 0;

}
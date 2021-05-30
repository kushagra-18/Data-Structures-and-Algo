#include <iostream>
#include <map>
using namespace std;

int main(){

    int nums[7] = {2,2,1,1,1,2,2};

    int size = 7;

        map<int,int> mp;   

        map<int,int> :: iterator it;    
        
        int ans=0,i;
     
      for(int i:nums)
      {
            mp[i]++; 
            cout<<mp[i]<<" "<<i<<"\n"; 
      }


  for(it = mp.begin(); it!= mp.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<"\n"; 
    }

    return 0;

}
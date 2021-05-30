#include <iostream>
#include<algorithm>
#include<unordered_set>
#include<vector>


using namespace std;

int  longestBand(vector<int> arr)
{
    unordered_set<int> st;

   int n = arr.size(),i,count = 1;

   for(auto x: arr){

       st.insert(x);

   }


int largestLen = 1;

   for(auto el: st){

       int parent = el - 1;

       // 

       if(st.find(parent) == st.end()){

           int nextNo = el + 1;
           count = 1;

           while(st.find(nextNo)!=st.end()){
               nextNo++;
               count++;
           }


            largestLen = max(count,largestLen);
          

       }
   }

 
   
return largestLen;

}

int main(){

vector<int> arr{0,3,7,2,5,8,4,6,0,1};

cout<<longestBand(arr);

return 0;
}
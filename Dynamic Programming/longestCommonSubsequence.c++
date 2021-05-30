    
#include <iostream>
 #include <vector>
 using namespace std;
    
    int longestCommonSubsequence(string text1, string text2,int m , int n ) {
        

    vector<vector<int>> memo

 
        if((m==0)|| (n == 0)){
            
            return 0;
        }
        
        if(text1[m-1] == text2[n-1]){
            
            
            return 1 + longestCommonSubsequence(text1,text2,m-1,n-1);
        }else{

          return  max(longestCommonSubsequence(text1,text2,m-1,n),longestCommonSubsequence(text1,text2,m,n-1));
        }

    }

int main(){

string text1 = "abc", text2 = "def";

int m = text1.size(), n = text2.size();

cout<<longestCommonSubsequence(text1,text2,m,n);

return 0;
}
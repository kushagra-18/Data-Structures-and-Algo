#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Using DP
int rope(int n,int a,int b,int c)
{

    if(n==0){

        return 0;
    }

    if(n<0){

        return -1;
    }


    vector <int> dp(n+1,-1);

    dp[0] = 0;
    //dp[1] = 1;

    int res = 0;

for(int i = 1;i<=n;i++)
{

res = max(rope(i-a,a,b,c),rope(i-b,a,b,c));

res = max(res,rope(i-c,a,b,c));

dp[i] = res; 

}

             if(dp[n]==-1)
             return -1;

    return dp[n] + 1;

}

int main(){

     int n = 72,a = 5, b = 9,c = 12;


    cout<<rope(n,a,b,c);

    return 0;

}
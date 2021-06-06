#include <iostream>
#include<vector>
using namespace std;
// Using DP
int factorial(int n)
{

    if(n==0){

        return 1;
    }

    vector <int> dp(n+1,-1);

    dp[0] = 1;

    for(int i = 1;i<=n;i++)
    dp[i] =  i*dp[i-1];

return dp[n];

}

int main(){

    int n = 5;

    cout<<factorial(n);

    return 0;

}
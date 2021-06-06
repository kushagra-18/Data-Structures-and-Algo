#include <iostream>
#include<vector>
using namespace std;
// Using DP
int sumOfDigits(int n)
{

    if(n==0){

        return 0;
    }

    if(n<10)
    return n;



return sumOfDigits(n/10) + (n%10);

}

int main(){

    int n = 9;

    cout<<sumOfDigits(n);

    return 0;

}
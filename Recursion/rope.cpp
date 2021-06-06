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


    


int res = max(rope(n-a,a,b,c),rope(n-b,a,b,c));

res = max(res,rope(n-c,a,b,c));

             if(res==-1)
             return -1;

    return res + 1;

}

int main(){

    int n = 72,a = 5, b = 9,c = 12;


    cout<<rope(n,a,b,c);

    return 0;

}
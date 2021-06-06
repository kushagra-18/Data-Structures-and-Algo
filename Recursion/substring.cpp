#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subString(string s,string curr = "", int idx = 0)
{

    if(s.size()== idx){

        cout<<curr<<" ";
        return ;
    }


    subString(s,curr,idx+1);
    subString(s,curr + s[idx],idx+1);
 

}

int main(){

    string s = "ABC";

    subString(s);

    return 0;

}
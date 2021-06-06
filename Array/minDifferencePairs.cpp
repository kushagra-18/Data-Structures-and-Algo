#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

pair<int,int> minDiff(vector <int> a,vector <int> b)
{   
    int n = a.size(), m = b.size();

    pair <int,int> res;
    
    int i = 0,j = 0;
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int diff, minDiff = INT_MAX;

    while(i<n && j<m)
    {

        diff = abs(a[i] - b[j]);

        if(diff< minDiff){

            minDiff = diff;

            res.first = a[i];
            res.second = b[j];

        }

        

        if(a[i] < b[j])
        {

            i++;

        }else{
            j++;
        }
        



    }


return res;

}

int main()

{

    vector <int> a=  {1, 3, 15, 11, 2};
    vector <int> b = {23, 127, 235, 19, 8};



    auto x = minDiff(a,b);

    cout<<x.first<<" "<<x.second;

return 0;

}
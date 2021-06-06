#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

int minDiff(vector <int> a,vector <int> b)
{   
    int n = a.size(), m = b.size();
    
    int i = 0,j = 0;
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int diff, minDiff = INT_MAX;

    while(i<n && j<m)
    {

        diff = abs(a[i] - b[j]);

        minDiff = min(minDiff,diff);

        if(a[i] < b[j])
        {

            i++;

        }else{
            j++;
        }
        



    }


return minDiff;

}

int main()

{

    vector <int> a=  {1, 3, 15, 11, 2};
    vector <int> b = {23, 127, 235, 19, 8};

    cout<<minDiff(a,b);

return 0;

}
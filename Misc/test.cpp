#include <iostream>

using namespace std;


vector <int> matchingStrings(vector<string> strings, vector<string> queries) {

    int n2 = strings.size();
    int n  = queries.size();
    
      vector<int> sol;
    
    for (int i = 0; i < n;i++){
        
        sol[i] = 0;
        
        for (int j =0; j < n2; j++){
            
            if(strings[j] == queries[i])
            
            {
                sol[i] = sol[i] + 1;
    
            }
            
        }
    }
       
return sol;
}


int main()
{

  char strings[2] = ['ab','ab','abc'];
  char queries[2] = ['ab','abc','bc'];

    vector<int> res = matchingStrings(strings, queries);

    cout<<res;



return 0 ;
}

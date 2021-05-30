 #include <iostream>
 #include <vector>
 using namespace std;
 
 int fib(int n) {
        
        vector <int> memo (n+1,-1);
        
        
      if(memo[n] == -1)
      {
          int res;
          
          if(n==0||n==1)
              
              res= n;    
          else
              
              res = fib(n-1) + fib(n-2);
          memo[n] = res;
              
      }       
              
    return memo[n];
        
    }


    int main(){


    int n = 29;

    cout<<fib(n);

    return 0;

    }

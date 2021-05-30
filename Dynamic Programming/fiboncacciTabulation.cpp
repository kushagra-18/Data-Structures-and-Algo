 #include <iostream>
 #include <vector>
 using namespace std;

 //using Tabulation
 
 int fib(int n) {
        
        vector <int> f(n+1);
        
    f[0] = 0, f[1] = 1;

    for(int i = 2;i<=n;i++){

        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
        
    }


    int main(){


    int n = 29;

    cout<<fib(n);

    return 0;

    }

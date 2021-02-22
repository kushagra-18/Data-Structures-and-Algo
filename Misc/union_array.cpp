#include<iostream> 
using namespace std; 
 
void pattern(int n)
{
    int i, j;
     
      

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= (2 * n); j++)
        { 
             
         
            if (i < j)
                cout << " ";
            else
                cout << "*";
              
          
            if (i <= ((2 * n) - j))
                cout << " ";
            else
                cout << "*";
        }
        cout << endl; 
    }
}
  
// Driver Code
int main()
{
    pattern(5);
     
    return 0;
}
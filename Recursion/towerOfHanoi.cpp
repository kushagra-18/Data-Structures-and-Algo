#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void towerOfHanoi(int n, char A,char B,char C)
{

    if(n==1){

        cout<<"Move disk 1 from "<<A<<" to "<<C<<"\n";
        
    }

   

  
    towerOfHanoi(n-1,A,B,C);
     cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<"\n";
    towerOfHanoi(n-1,B,A,C);
    
 

}

int main()
{
    int n = 3; 

    towerOfHanoi(n, 'A', 'C', 'B'); 

    return 0;
}
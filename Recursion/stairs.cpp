#include <iostream>

using namespace std;
// NOT AN OPTIMAL SOLUTION
int stairs (int n)
{

    if(n<0){

        return 0;
    }

    if(n==0){

        return 1;
    }

    return stairs(n-1) + stairs(n-2);
}

int main(){

    int n = 300;

    cout<<stairs(n);

    return 0;

}
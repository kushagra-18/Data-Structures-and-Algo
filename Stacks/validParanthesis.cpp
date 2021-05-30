#include <iostream>
#include<stack>

using namespace std;


bool matching(char a, char b){

return ((a=='(' && b == ')') ||
(a=='{' && b == '}') ||
(a=='[' && b == ']'));

}


bool valid(string word){

stack<char> s;

int n = word.length();

for(int i =0; i<n;i++){

if(word[i] == '(' || word[i] == '[' ||word[i] == '{'){

        s.push(word[i]);
}else{

        if(s.empty() == true){
            return false;
        }else if(matching(word[i],s.top())== false){

            return false;
        }else
        {

            s.pop();
        }
    } 
}
return (s.empty() == true); // for extra opening bracket



}




int main() 
{ 
    string expr = "[()]{}{[()()]()}"; 
  
    if (valid(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
} 

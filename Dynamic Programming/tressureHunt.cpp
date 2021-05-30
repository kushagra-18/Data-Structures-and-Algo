#include <iostream>
 #include <vector>
 using namespace std;


 string tressureHunt(vector <int> arr, int start){

     int n = arr.size(),i,flag = 1,temp;

        i = start-1;

     while(i!=0){

         if(arr[i]==0){

             flag = 0;
             break;

         }

         if(i-arr[i] > 0){

          i = i - arr[i];
         }else{

             break;
         }

     }

     if(flag==1){


     while(i<n){

         if(arr[i]==0){

             flag = 0;
             break;

         }

         if(i+arr[i] < n){

          i = i + arr[i];
         }else{

             break;
         }

        }

     }


     //


if(flag==0){

    return "YES";
}else{

    return "NO";
}

 }

 int main(){


vector <int> arr = {10,20,30,40,0,50};

int start = 4;

cout<<tressureHunt(arr,start);

return 0;

 }
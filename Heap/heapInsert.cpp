#include <iostream>
#include <vector>

using namespace std;

class minHeap{

private:

        vector <int> heap;

        int size;

        int capacity;
    
        int left(int i){

            return(2*i+1);
        }

        int right(int i){

            return(2*i+2);
        }

        int parent(int i){

            return((i-1)/2);
            }


public:   

        minHeap(int capacity);

        void insert(int k);

        void printHeap();
 
};


void minHeap::insert(int k){

    if(size == capacity){

        cout<<"HEAP IS FULL \n";
        return;
    }

    size++;

    int i = size - 1;

    heap[i] = k;

    while(i!=0 && heap[parent(i)] > heap[i])
{
    swap(heap[i],heap[parent(i)]);
    i = parent(i);
}

}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class minHeap{
    public:
        minHeap():v(){ 
        };

        void printMin(){
            cout << v.front();
        };

        void addElement(int element){
            v.push_back(element);
            heapify((v.size() - 1));
        };

        void deleteElement(int element){            
        };
    
        void heapify(){
            
        };

        void swap(int x, int y){
        }
    
    private:
    std::vector<int> v;
};

int main(int argc, char** argv) {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count;
    cin >> count;

    minHeap heap;

    for(int x = 0; x< count; x++){
    int command, value;
        cin >> command;
        if (command == 3){
            cout << "Printed out " ;
            heap.printMin()
            cout << endl;
        }
        else if (command == 2){
            cin >> value;    
            heap.deleteElement(value);
        }
        else if (command == 1){
            cin >> value;
            heap.addElement(value);
        }
        
        cout << "Command is " << command << " Value is " << value << endl ; 
    }
    return 0;
}

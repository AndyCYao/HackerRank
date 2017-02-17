#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class LL{
    private:
        MainNode* internalList[20];
        
    public:
        LL(){
            //Constructor
        }
    
        void add(char* string){
            //get the length
            int position = strlen(string);
            
            //use the length to find the array 
            //if the size already exists, then
            if(internalList[position]){
                
                //check if this string already exists
                NodeString * temp;
                temp = internalList -> startNode;
                while(temp -> next != NULL){
                    if(temp-> name[] == string){
                        temp -> frequency += 1;
                    }
                }
            }
            else{
                NodeString newString(1, string);
                internalList[position] -> addStart = NodeString;
            }
        }

        class MainNode(){
            NodeString * startNode;
            MainNode(){};
            addStart(NodeString newStart){
                startNode = startNode;
            }
        }
    
        struct NodeString(){
            int frequency;
            char * name[];
            Node * next;
            
            NodeString(int _frequency, char * _name[]){
                frequency = _frequency;
                name = _name;
            }
        }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

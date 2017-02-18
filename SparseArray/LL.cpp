#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct NodeString{
        int frequency;
        char * name;
        NodeString * next;
                
        NodeString(int _frequency, char * _name)
            {
            frequency = _frequency;
            name = _name;
            }
};

class UnrollList{
    private:
        NodeString * startNode;
    public:
        UnrollList(){};
        ~UnrollList(){};

        void addStart(NodeString &newStart){
            if(startNode){
                startNode -> next = &newStart;
            }
            else{
                startNode = &newStart;
            }
        }


};

class LL{
    private:
        //UnrollList* internalList[];
        std::vector<UnrollList> internalList;
    public:
        LL(){
            //Constructor
            //internalList[20] = new UnrollList();
            
            internalList = vector<UnrollList>(20);
        }
        ~LL(){};
        void add(char* string){
            /*
            //get the length
            int position = strlen(string);
            
            //use the length to find the array 
            //if the size already exists, then
            if(internalList(position)){
                
                //check if this string already exists
                NodeString * temp;
                temp = internalList[position] -> startNode;
                while(temp -> next != NULL){
                    if(temp-> name == string){
                        temp -> frequency += 1;
                        break;
                    }
                    temp -> next = temp -> next -> next;
                }
                //if you haven't found it
                NodeString newString(1, string);
                temp -> next = &newString;
            }
            else{
                NodeString newString(1, string);
                internalList[position] -> addStart(newString);
            }
            */
        }   
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    LL* sparseArray = new LL();
    //sparseArray.add("test");
    
    delete(sparseArray);
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
    public:
    Node * next;
    int value;
};
class SequenceList{
    Node * head;
    public:
    SequenceList(){
        //head will keep the size of the sequence list
        head = new Node();
        }
    
    void push_back(int _value){
        Node * newBack = new Node();
        newBack -> value = _value;
        Node * temp = head;
   
        while(temp -> next){
            temp = temp -> next;            
        }
        head -> value += 1;
        temp = newBack;
    }
    
    int get_size(){
        return head -> value;
    }
    
    int get_value_at(int index){
        // in this impl. head doesn't count , 0 is at the 
        // node after head
        Node * temp = head -> next;
        for(int x = 0; x < index; x++){
            temp = temp -> next;
        }
        return temp -> value;
    }  
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, Q;
    int lastAnswer = 0;
    cin >> N >> Q;
    SequenceList * seq[N];
    // initiate the list here?
    for(int x = 0; x < N; x++){
        SequenceList * seqTemp = new SequenceList();
        seq[x] = seqTemp;
    }
    
    int queryType;
    int xOR, value;
    for(int x = 0; x < Q; x++){
        cin >> queryType >> xOR >> value;
        if(queryType == 1){
           int sequence = (xOR ^ lastAnswer) % N;
           SequenceList * seqTemp = seq[sequence];
           seqTemp -> push_back(value);
            
        }
        else{
            int sequence = (xOR ^ lastAnswer) % N;
            SequenceList * seqTemp = seq[sequence];
            lastAnswer = seqTemp -> get_value_at(value % seqTemp -> get_size());
            cout << lastAnswer << endl;
        }
    }
    return 0;
}


#include <iostream>
using namespace std;

class Stack{

    private: int top = -1;

    public: void push(int element){
        top++;
        elements[top] = element;
    }

    public: void pop(){
        top--;
    }

    public: void print(){
        for(int i=0; i<elements.length; i++){
            cout << elements[i] <<endl;
        }
    }
    
    int elements[1000];

};

int main() {

    Stack *st = new Stack();
    for(int i=0; i<10; i++)
        st->push(i);
    st->print();

    return 0;
}
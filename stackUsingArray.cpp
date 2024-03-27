#include <bits/stdc++.h>
using namespace std;

class Stack{
    
    int size;
    int * arr;
    int top;

    public:
    Stack() {
        size = 1000;
        top = -1;
        arr = new int[size];
    }

    void Push(int val) {
        top++;
        arr[top] = val;
    }
    int Pop() {
        int val = arr[top] ;
        top--;
        return val;
    }
    int Top() {
        return arr[top];
    }
    int Size() {
        return top+1;
    }
};
int main() {
    Stack s;
  s.Push(6);
  s.Push(3);
  s.Push(7);
  cout<<"the top element is: "<<s.Top()<<endl;
  cout<<"size of the stack is: "<<s.Size()<<endl;
  cout<<"the deleted element is: "<<s.Top();
  cout<<"the top element is: "<<s.Top()<<endl;
  return 0;
}
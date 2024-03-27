#include <iostream>
using namespace std;

class Node{
    private:
    int data;
    Node* next;

    public:
    Node() {
        data = 0;
        next = NULL;
    }

    void push(int x) {
        Node* t = new Node;
        if(t == NULL) {
            cout<<"Overflow";
        }
        else {
            t->data = x;
            t->next = next;
            next = t;
        }
    }

    int pop() {
        Node* p = next;
        int x = -1;
        if(next == NULL) {
            cout<<"Underflow";
        }
        else {
            x = p->data;
            next = next->next;
            delete p;
        }
        return x;
    }

    void display() {
        Node* temp = next;
        while(temp != NULL) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main() {
    Node st;
    st.push(1);
    st.push(2);
    st.push(4);

    st.display();
    cout<<"Poped element: "<<st.pop();
    cout<<endl;
    st.display();
    return 0;
}
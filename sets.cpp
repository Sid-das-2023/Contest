#include <bits/stdc++.h>
using namespace std;

void printSet(set<string> &s) {
    //method 1
    for(string value : s) {
        cout<<value<<" ";
    }
    cout<<endl;

    // //method 2
    // for(auto it = s.begin(); it != s.end(); ++it) {
    //     cout<<(*it)<<" ";
    // }
    // cout<<endl;
}
int main() {
    
    // declaration
    set<string> s;
    // insertion
    s.insert("abc");
    s.insert("xyz");
    s.insert("bcd");

    // finding an element;
    s.find("abc"); 
    // if this element is found this function returns the iterator to the element, otherwise it returns the iterator to s.end();

    // printing
    printSet(s);


    // multiset --> these allow to store duplicates in the set
    multiset<string> ms;
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("xyz");
    ms.insert("bcd");
    
    for(auto it: ms) {
        cout<<it<<" ";
    }
    cout<<endl;

    //deletion in multiset
    // //case 1 (using iterator)
    // auto it = ms.find("abc");
    // if(it != ms.end())
    //     ms.erase(it);
    
    // // this deletes only one occurance of the value "abc";

    //case 2 (directly using the value) 
    ms.erase("abc");

    // this erases all the occurances of the given value

    for(auto it: ms) {
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        set<string> names;
        while(n--) {
            string name;
            cin>>name;
            names.insert(name);
        }
        for(auto it: names) {
            cout<<it<<endl;
        }
    }
}
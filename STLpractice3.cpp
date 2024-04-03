#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, vector<string>, greater<int>> marks; // using vector<string> since more than one student can secure the same mark
    while(n--) {
        string name;
        int mark;
        cin >> name >> mark;
        marks[mark].push_back(name);
    }

    for(const auto &pair : marks) {
        int mark = pair.first;
        vector<string> names = pair.second;
        sort(names.begin(), names.end());  // this is to sort the names of the student having same marks 
        for (const string &name : names) {
            cout << name << " " << mark << endl;
        }
    }
}
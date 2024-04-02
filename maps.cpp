#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> mp;
    mp[1] = "abc";
    mp[3] = "cdc";
    mp.insert({4, "ads"});

    //printing map
    //method 1
    map<int, string> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++) {
        cout<<(*it).first <<" "<<(*it).second<<endl;
    }

    //method 2
    for(auto &pr : mp) {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
}
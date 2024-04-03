#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--) {
		int n, k;
		cin >> n >> k;

		multiset<long long> bags;
		for(int i = 0; i < n; i++) {
			int candy_cnt;
			cin >> candy_cnt;
			bags.insert(candy_cnt);
		}
        long long total_candies = 0;
        
        for(int i = 0; i < k; i++) {
            auto last_it = (--bags.end()); // returns the iterator to the last element in the set
            total_candies += (*last_it);
            bags.erase(last_it);
            bags.insert((*last_it)/2);
        }

        cout<<total_candies<<endl;
	}
}
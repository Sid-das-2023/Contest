#include <bits/stdc++.h>
using namespace std;
void printSumK(int ind, vector<int> &ds, int sum, int k, int arr[], int n) {
    // base case
    if(ind == n) {
        if(sum == k) {
            for(auto it: ds) {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    // not take condition
    printSumK(ind+1, ds, sum, k, arr, n);

    // take condition
    ds.push_back(arr[ind]);
    sum += arr[ind];
    printSumK(ind+1, ds, sum, k, arr, n);
    ds.pop_back();
    sum -= arr[ind];
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int k = 2;
    vector<int> ds;
    printSumK(0, ds, 0, k, arr, n);

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool canPlaceCows(vector<int> &stalls, int k, int dist) {
    int count = 1; 
    int lastPos = stalls[0];
    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= dist) {
            count++;
            lastPos = stalls[i]; 
        }
        if (count >= k) return true; 
    }
    return false;
}
int solveAggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int low = 1;
    int high = stalls[n - 1] - stalls[0]; 
    int ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canPlaceCows(stalls, k, mid)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    cout << "Maximum Minimum Distance: " << solveAggressiveCows(stalls, k) << endl;
    return 0;
}
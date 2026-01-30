#include<unordered_set>
#include<functional>
#include<iostream>
#include<iomanip>
#include<utility>
#include<memory>
#include<string>
#include<vector>
#include<deque>
#include<queue>
#include<stack>
#include<list>
#include<set>
#include<map>
using namespace std;
int search(const vector<int>& arr, int target){
    int n = arr.size();
    if(n==0) return -1;
    int low = 0, high = n-1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]>arr[high]){
            low = mid+1;
        }else{
            high = mid;
        }
    }
    int pivot = low;
    if(target>= arr[pivot] && target<=arr[n-1]){
        low = pivot;
        high = n-1;
    }else{
        low = 0;
        high = pivot-1;
    }
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) low = mid+1;
        else high = mid -1;
    }
    return -1;
}
int main(){
    vector<int> vec;
    for(int i = 5;i<=10;i++){
        vec.push_back(i);
    }
    for(int i = 0;i<5;i++){
        vec.push_back(i);
    }
    cout<<search(vec,9);
    return 0;
}
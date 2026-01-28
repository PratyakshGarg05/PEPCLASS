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
int main(){
    int arr[] = {1,1,1,1,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = n-1;
    int lastIndex = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==1){
            low=mid+1;
            lastIndex = mid;
        }else{
            high = mid-1;
        }
    }
    cout<<lastIndex+1<<endl;
    return 0;
}
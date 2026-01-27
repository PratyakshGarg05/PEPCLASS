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
    int arr[] = {0,1,2,1,1,0,2,0,1,1,0,2,0,2};
    int low = 0,mid = 0, high = 14-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++,
            mid++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}
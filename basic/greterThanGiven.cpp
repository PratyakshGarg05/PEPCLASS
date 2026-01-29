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
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int low = 0;
    int high = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            cout<<arr[mid+1];
            return 0;
        }else if(arr[mid]<target){
            low=mid+1;
        }else{
            high = mid-1;
        }
    }
    return 0;
}
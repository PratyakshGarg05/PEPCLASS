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
    int arr[] = {1,2,3,4,5,6,7,8,9,8,7,6,5,3,2,1};
    int target = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = n-1;
    int peak = 0;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    high = low;
    low = 0;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    low = peak;
    high = n-1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]==target){
            cout<<mid<<endl;
            return 0;
        }
        else if(arr[mid]<target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return 0;
}

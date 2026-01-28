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
    int arr[] = {1,2,3,4,5,6,7,8,5,4,3,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 0, high = n-1;
    int mid;
    while(low<high){
        mid = low + (high-low)/2;
        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }else{
            high = mid;
        }
    }
    cout<<arr[low]<<endl;
    return 0;
}
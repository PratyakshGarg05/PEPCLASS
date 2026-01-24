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
    int size;
    cout<<"Enter size: ";
    cin>>size;
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    int arr[size];
    cout<<"Enter sorted array: ";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Target: ";
    cin>>target;
    int start = 0;
    int end= size-1;
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<start<<" "<<end;
            return 0;
        }else if(arr[start]+arr[end]>target){
            end--;
        }else{
            start++;
        }
    }
    cout<<"Not found";
    return 0;
}
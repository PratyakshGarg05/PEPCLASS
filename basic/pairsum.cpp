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
    int target = 6;
    int start = 0;
    int end= 8;
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
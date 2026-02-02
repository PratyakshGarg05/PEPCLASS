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
    int arr[] = {1,2,3,4,5,6,7,8,9,0,2,3,4,5,4,3,2,4,5,6,7,6,4,3,2,5,7,4,3,6,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0;i<5;i++){
        sum+=arr[i];
    }
    int begin = 0, back = 4;
    for(int i = 5;i<n;i++){
        int k = 5;
        int tempSum = sum+=(arr[i]-arr[i-k]);
        sum=max(sum,tempSum);
    }
    cout<<"Max sum: "<<sum;
    return 0;
}
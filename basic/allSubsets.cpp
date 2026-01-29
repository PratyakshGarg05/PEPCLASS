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
void findSubsets(vector<int>&arr, vector<int>&curr, int index){
    if(index==arr.size()){
        cout<<"{ ";
        for(int x: curr){
            cout<<x<<" ";
        }
        cout<<"}"<<endl;
        return;
    }
    curr.push_back(arr[index]);
    findSubsets(arr,curr,index+1);
    curr.pop_back();
    findSubsets(arr,curr,index+1);
}
int main(){
    vector<int> data;
    for (int i = 1; i <= 6; i++) {
        data.push_back(i);
    }
    vector<int> empty;
    findSubsets(data,empty,0);
    return 0;
}
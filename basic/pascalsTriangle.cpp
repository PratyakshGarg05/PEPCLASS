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
    int n = 0;
    cout<<"Enter number of rows: ";
    cin>>n;
    if(n<=0) return 0;
    vector<vector<int>> vec(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            if(j==0 || j==i){
                vec[i].push_back(1);
                continue;
            }
            else{
                vec[i].push_back(vec[i-1][j-1]+vec[i-1][j]);
            }
        }
    }
    for(int i = 0;i<n;i++){
        for(int s = 0;s<n-i-1;s++){
            cout<<" ";
        }
        for(auto x: vec[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
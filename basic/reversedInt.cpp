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
    int n;
    cin>>n;
    long long m = 0;
    while(n){
        m = m*10 + (n%10);
        n/=10;
        if(m>INT_MAX){
            cout<<-1;
            return 0;
        }
    }
    cout<<m;
    return 0;
}
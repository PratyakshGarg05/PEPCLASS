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
bool check(int n){
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==-0 || n%3==0) return 0;
    for(int i = 5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n = 77;
    bool prime = check(n);
    prime==1?cout<<"Prime"<<endl:cout<<"Notprime"<<endl;
    return 0;
}
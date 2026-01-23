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
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 1;i<10;i++){
        if(arr[i-1]>arr[i]){
            cout<<"Unsorted";
            return 0;
        }
    }
    cout<<"Sorted";
    return 0;
}
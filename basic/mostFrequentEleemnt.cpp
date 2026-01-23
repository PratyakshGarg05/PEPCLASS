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
    unordered_map<int,int> count;
    int arr[] = {1,2,1,1,1,1,2,2,2,2,3};
    int maxFreq = 0;
    int result = arr[0];
    for(int i = 0;i<10;i++){
        int current = arr[i];
        count[current]++;
        if(count[current]>=maxFreq){
            maxFreq = count[current];
            result = current;
        }
    }
    cout<<"Most Freq Element is: "<<result;
    return 0;
}
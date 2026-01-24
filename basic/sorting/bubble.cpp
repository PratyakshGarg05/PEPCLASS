#include<iostream>
using namespace std;
void bsort(vector<int> &vec){
    int n = vec.size();
    bool swapped = 0;
    for(int i = 0;i<n-1;i++){
        swapped=0;
        for(int j = 0;j<n-i-1;j++){
            if(vec[j]>vec[j+1]){
                swapped = 1;
                swap(vec[j],vec[j+1]);
            }
        }
        if(!swapped){
            break;
        }
    }
}
int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(9);
    vec.push_back(6);
    vec.push_back(5);
    vec.push_back(4);
    vec.push_back(0);
    vec.push_back(8);
    vec.push_back(7); // on MacOs vector cannot be defined like {1,2,3,4....}
    bsort(vec);
    for(auto x: vec){
        cout<<x<<' ';
    }
    return 0;
}
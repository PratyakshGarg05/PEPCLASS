#include <vector>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    unsigned long long n;
    cout<<"Enter N: ";
    cin>>n;
    if(n==0){ 
        cout<<"Fits";
        return 0;
    }
    string s = to_string(n);
    reverse(s.begin(),s.end());
    unsigned long long m = stoll(s);
    int size1 =0;
    int size2 =0;
    while(n){
        size1++;
        n/=2;
    }
    while(m){
        size2++;
        m/=2;
    }
    cout<<"bits in n= "<<size1<<endl;
    cout<<"bits in reversed n = "<<size2<<endl;
    if(size1 == size2){
        cout<<"Fits";
    }else{
        cout<<"Doesn't Fit";
    }
    return 0;
}
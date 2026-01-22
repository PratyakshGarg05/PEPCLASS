#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    for (int n = 0; n < rows; n++) {
        for (int s = 0; s < rows - n - 1; s++) {
            cout << " ";
        }
        long long value = 1;
        for(int r = 0;r<=n;r++){
            cout<<value<<" ";
            if(n>r){
                value = value * (n-r)/(r+1);
            }
        }
        cout << endl;
    }
    return 0;
}
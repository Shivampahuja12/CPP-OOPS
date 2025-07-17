#include<iostream>
using namespace std;
bool perfectNumber(int n){
    int sum = 0;
    for (int i=1; i<n; i++){
        if (n%i==0) sum += i;
    }
    if (sum == n) return true;
    else return false;
}

int main(){

    int n;
    cin >> n;
    bool x = perfectNumber(n);
    if (x == 1) cout << "Perfect Number" << endl;
    else cout << "Not a perfect number" << endl;
}
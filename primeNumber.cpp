#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){

    for (int i=2; i*i<=n; i++){
        if (n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    if (isPrime(n) == true) cout << "Prime" << endl;
    else cout << "Not prime" << endl;
}
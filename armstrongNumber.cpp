#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int n){
    int len = 0;
    for (int i=n; i>0; i=i/10){
        len++;
    }
    int arm = 0;
    for (int i=n; i>0; i=i/10){
        arm = arm + pow(i%10, len);
    }

    if (arm == n) return true;
    else return false;
}
int main(){
    int n;
    cin >> n;
    if (armstrong(n) == true) cout << "Armstrong" << endl;
    else cout << "Not Armstrong" << endl;
}
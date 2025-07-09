#include<iostream>
using namespace std;


int reverseNum(int n){
    int rev = 0;
    for (int i=n; i>0; i=i/10){
        rev = rev * 10 + i%10;
    }
    return rev;
}
int main(){
    int num = 12345;
    cout << reverseNum(num) << endl;
}
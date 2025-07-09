#include<iostream>
using namespace std;

int digitSum(int n){
    int sum = 0;
    for (int i=n; i>0; i=i/10){
        sum += i%10;
    }
    return sum;
}
int main(){
    int num = 12345;
    cout << digitSum(num)<< endl;
}
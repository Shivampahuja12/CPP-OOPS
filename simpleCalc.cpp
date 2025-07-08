#include<iostream>
using namespace std;
int main(){
    int a, b;
    float result;
    cin >> a >> b;
    int c;
    cin >> c;
    switch(c){
        case 1: 
        result = a+b;
        cout << result << endl;
        break;
        case 2: 
        result = a-b;
        cout << result << endl;
        break;
        case 3: 
        result = a*b;
        cout << result << endl;
        break;
        case 4: 
        result = a/b;
        cout << result << endl;
        break;
        default: cout << "Invalid Input" << endl;
    }
}
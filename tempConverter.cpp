#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter temperature: C-celsius/ F-fahrenheit/ K-kelvin: ";
    cin >> ch;
    float cel, fah, kel;
    if (ch == 'C') cin >> cel;
    if (ch == 'F') cin >> fah;
    if (ch == 'K') cin >> kel;

    if (ch == 'C'){
        cout << "Fahrenheit = " << (cel * 9/5) + 32 << endl;
        cout << "Kelvin = " << cel + 275.15 << endl;
    }
    if (ch == 'F'){
        cout << "Celsius = " << (fah-32)*5/9 << endl;
        cout << "Kelvin = " << (fah -32)*5/9 + 273.15 << endl;
    }
    if (ch == 'K'){
        cout << "Fahrenheit = " << (kel - 273.15) * 9/5 + 32 << endl;
        cout << "Celsius = " << kel - 273.15 << endl;
    }

}
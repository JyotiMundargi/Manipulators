#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int num1 = 150;
    double num2 = 123.456789;
    
    cout << setw(10) << num1 << endl; 
    cout << setprecision(4) << num2 << endl;
    cout << fixed << num2 << endl;
    cout << scientific << num2 << endl; 
    
    return 0;
}
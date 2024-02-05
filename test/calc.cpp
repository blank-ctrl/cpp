#include <iostream>

using namespace std;

float num1, num2, res;
char ops;

int main(){
    cout << "Num1: " << endl;
    cin >> num1;
    cout << "Num2: " << endl;
    cin >> num2;

    cout << "Operator: " << endl;
    cin >> ops;

    switch (ops){
        case '+':
        res = num1 + num2;
        break;

        case '-':
        res = num1 - num2;
        break;

        case '*':
        res = num1 * num2;
        break;

        case '/':
        res = num1 / num2;
        break;

        default:
        cout << "Wrong Operator. Choose +,-,*,/: " << endl;
        break;

    }
    cout << res << endl;
    return 0;
}
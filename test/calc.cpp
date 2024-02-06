#include <iostream>

using namespace std;

double num1, num2, res;
char ops, dem;

int main(){
    cout << "Insert Calculation as followed (\"Number Operator[+,-,*,/] Number\"): " << endl;
    cin >> num1 >> ops >> num2;

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
        if (num2 != 0){
            res = num1 / num2;
            break;
        }

        default:
        cout << "There was a misinput" << endl;
        break;
    }

    cout << res << endl;

    cout << "Press y if you want to perform another calculation: " << endl;
    cin >> dem;

    if (dem == 'y'){
        main();
    }
    
    return 0;
}
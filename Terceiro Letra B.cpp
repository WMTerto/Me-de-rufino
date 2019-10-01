#include <iostream>

using namespace std;

int main()
{
short int num1, num2, res;
    cout << "Digite dois numeros: " << endl;
        cin >> num1 >> num2;
            if (num1 > 0 && num2 > 0){
            res = num1+num2;
            if (res < 0)
            cout << "Ouve Overflow! "<< endl;
            else
                cout << "Nao ouve overflow, o resultado e:" << res << endl;

    }
    else if (num1 < 0 && num2 <0 ){
    res = num1+num2;
    if (res > 0)
            cout << "Overflow! "<< endl;
            else
                cout << "Nao ouve overflow, o resultado e:" << res << endl;

    }

    return 0;
}

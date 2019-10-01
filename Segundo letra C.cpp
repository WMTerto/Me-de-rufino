#include <iostream>

using namespace std;

int main()
{int aux;
float b, num;
    cout << "Digite um numero" << endl;
    cin >> num;
    b=num/7;
    aux=b;
    if(b == aux)
        cout << "numero divisivel por 7" << endl;
            else
            cout << "numero nao divisivel por 7" << endl;

    return 0;
}

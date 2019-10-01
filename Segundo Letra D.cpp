#include <iostream>

using namespace std;

int main()
{
    int num,i,resultado=0;
    cout << "Digite um numero" << endl;
    cin >> num;
for (i=2; i<= num/2; i++){
    if(num%i == 0){
        resultado++;
        break;
    }
}
if (resultado == 0)
    cout << "Numero Primo" << endl;
else
    cout << "Nao e Um Numero Primo" << endl;
    return 0;
}

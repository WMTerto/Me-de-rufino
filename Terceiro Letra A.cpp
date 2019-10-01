#include <iostream>

using namespace std;

int main()
{ short int y;
        cout << "O tamanho de uma variavel no short int e: -32768 a 32767 " << endl;
        cout << "Ao armazenar em Y um valor maior do que caberia em uma variavel short int" << endl;
        cout << "Ocorrera um Overflow, neste caso o valor armazendao em Y foi 32800:" << endl;
        cout << "Porem o valor imprimido na tela sera outro, ";
    y = 32800;
        cout << "Y: " << y << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
   int c = 10;
	cout << "c ==" << c*(2/3) << endl;
    // Resultado ser� Zero, pois 2/3 retornar� a parte inteira da divis�o que � o 0 antes da virgula

    return 0;
}
/*Para resolver isso bastar criar uma variavel do tipo float e por a casa decimal em um dos valores da divisao 2/3
exemplo 3.00

int main()
{
   int c = 10;
	cout << "c ==" << c*(2./3) << endl;
    return 0;
}
*/

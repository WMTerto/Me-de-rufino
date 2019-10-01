#include <iostream>

using namespace std;

int main()
{
   int c = 10;
	cout << "c ==" << c*(2/3) << endl;
    // Resultado será Zero, pois 2/3 retornará a parte inteira da divisão que é o 0 antes da virgula

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

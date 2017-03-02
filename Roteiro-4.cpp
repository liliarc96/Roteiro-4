#include <iostream>
using namespace std;

int main()
{
    int maior, numero;
    maior=-99999;

    while(numero != 0)
    {
        cout<< "Digite o numero: \n";
        cin>> numero;

        if ((numero > maior) && (numero != 0))
        {
            maior=numero;
        }
    }
    if (maior != -99999)
    {
        cout<< "O maior numero eh: " << maior << endl;
    }
    else
    {
        cout<< "Nenhum numero lido.";
    }
}

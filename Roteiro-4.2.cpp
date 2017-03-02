#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
      srand((unsigned)time(0));
      int chute;
      int maior = 100;
      int menor = 1;
      int aleatorio = rand()% 100;

      cout<< "Adivinhe um numero entre 1 e 100";
      cin>> chute;

      while (chute != aleatorio)
      {
          if (chute != aleatorio)
          {
              if (chute > aleatorio)
              {
                  cout<< "Muito alto. Tente novamente";
              }
              else
              {
                  cout<< "Muito baixo. Tente novamente";
              }
          }
      }
      cout<< "Parabens. Voce acertou o numero";
}

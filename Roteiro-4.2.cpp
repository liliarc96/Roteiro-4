#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
      srand((unsigned)time(0));
      int chute;
      int aleatorio = rand() % 100 + 1;

      cout<< "Adivinhe um numero entre 1 e 100\n";
      cin>> chute;

      while (chute != aleatorio)
      {
          if (chute != aleatorio)
          {
              if (chute > aleatorio)
              {
                  cout<< "Muito alto. Tente novamente\n";
                  cout<< "Adivinhe um numero entre 1 e 100\n";
                  cin>> chute;
              }
              else
              {
                  cout<< "Muito baixo. Tente novamente\n";
                  cout<< "Adivinhe um numero entre 1 e 100\n";
                  cin>> chute;
              }
          }
      }
      cout<< "Parabens. Voce acertou o numero";
}

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand((unsigned)time(0));
    int n, dado;
    float percentual[6] = {0,0,0,0,0,0};
    int d[6] = {0,0,0,0,0,0};
    cout<< "Digite o numero de vezes que o dado sera lancado:\n";
    cin>> n;

    for (int i = 0; i < n; i++){
        dado = rand() % 6 + 1;

        if (dado == 1)
        {
            d[0] += 1;
            percentual[0] = (float)d[0]/n;
        }
        if (dado == 2)
        {
            d[1] += 1;
            percentual[1] = (float)d[1]/n;
        }
        if (dado == 3)
        {
            d[2] += 1;
            percentual[2] = (float)d[2]/n;
        }
        if (dado == 4)
        {
            d[3] += 1;
            percentual[3] = (float)d[3]/n;
        }
        if (dado == 5)
        {
            d[4] += 1;
            percentual[4] = (float)d[4]/n;
        }
        if (dado == 6)
        {
            d[5] += 1;
            percentual[5] = (float)d[5]/n;
        }

    }
    for (int j = 0; j < 6; j++)
    {
        cout<< "\nA porcentagem de vezes que o dado caiu no lado " << j+1 << " foi de: " << (percentual[j]*100.0) << "%\n"<< endl;
    }
}

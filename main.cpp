#include <iostream>

using namespace std;

int main()
{
    // variable
    int veiculo = 1, placa;

    // start
    cout << "Digite 1 para carro ou 2 para caminhao: ";
    cin >> veiculo;

    if(veiculo == 1)
    {
        cout << "Tipo de veiculo escolhido: CARRO " << endl;
        cout << endl;
        cout << "Digite o final da placa: ";
        cin >> placa;
    }
    switch(placa)
    {
        case 1 : cout << "Mes pagamento: Fevereiro"; break;
    }
    return 0;
}

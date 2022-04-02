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
        case 2 : cout << "Mes pagamento: Fevereiro"; break;
        case 3 : cout << "Mes pagamento: Fevereiro"; break;
        case 4 : cout << "Mes pagamento: Marco"; break;
        case 5 : cout << "Mes pagamento: Marco"; break;
        case 6 : cout << "Mes pagamento: Marco"; break;
        case 7 : cout << "Mes pagamento: Abril"; break;
        case 8 : cout << "Mes pagamento: Abril"; break;
        case 9 : cout << "Mes pagamento: Abril"; break;
        case 0 : cout << "Mes pagamento: Abril"; break;
        default: cout << "Final invalido"; break;
    }
    if (veiculo == 2)
    {
        cout << "Tipo de veiculo escolhido: CAMINHAO " << endl;
        cout << endl;
        cout << "Digite o final da placa: ";
        cin >> placa;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    float valor;
    int parcelas;
    float Resultado;
    cout <<"Bem 'vindo à LOja Sua Melhor Compra! \n";
    cout <<"Digite o valor que Total de suas compras:" ;
    cout << " R$ "; cin >>valor ;
    cout <<"Podemos vender a vista ou parcelamos em até 10x sem juros. \nQuantas Parcelas dejejas para finalizar?" << std::endl;
    cout << " x "; cin >> parcelas;
    Resultado=(valor/parcelas);
    cout << "R$ " << Resultado ;
    cout <<"\n\n Ótima Compra, volte sempre!";

    system("pause");


return 0;
}

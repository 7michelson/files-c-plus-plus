#include <iostream>
using namespace std;

int main(){
    float Ct;//cotação do Dólar.
    float D;//valor em Dólar.
    float converter;//quanto em dólar deseja converter.
    float R;//Real.
    float rest;//restante


cout << "Quanto em Dólar você possui? US$ :"; cin >> D ;

cout << "Qual a cotação atual do Dólar? R$: "; cin >> Ct ;
cout << "Quanto deseja converter Para reais? US$: : "; cin>> converter ;
R=(Ct*converter);
cout << "Você converteu : R$ "<< R << endl;
rest=(D-converter);
cout << "saldo atual : US$ " << rest << endl;
system("pause");

return 0;
}

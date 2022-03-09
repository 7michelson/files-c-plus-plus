#include <iostream>
using namespace std;

int main(){
    float Ct;//cotação do Dólar.
    
    float converter;//quanto em dólar deseja converter.
    float R;//Real.
  


cout << "Qual a cotação atual do Dólar? R$: "; cin >> Ct ;
cout << "Quanto deseja converter Para reais? US$: : "; cin>> converter ;
R=(Ct*converter);
cout << "Você converteu : R$ "<< R << endl;

system("pause");

return 0;

}

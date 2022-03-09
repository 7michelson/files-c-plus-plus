#include <iostream>
using namespace std;
int main(){
    float valor,compra;
    int parcelas;
    cout<<"Valor total da compra: R$";cin>>compra;
    cout<<"Quantas parcelas: ";cin>>parcelas;
    cout<<"Quanto estas a pagar: R$";cin>>valor;
    if(valor==(compra/parcelas)){
        cout<<"Valor foi  sem juros.\n";
    }else{
            if(valor<(compra/parcelas)){
                cout<<"Houve desconto.\n";
            }else{
                cout<<"Valor foi com juros.\n";
            }
    }
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    cout<<"Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par,\n escreva se é múltiplo de 10; se for ímpar, escreva se é divisível por 5.\n";
    int n;
    cout<<"Qual o numero a ser verificado: ";cin>>n;
    if((n%2)==0){
        cout<<"O numero e Par.\n";
        if((n%10)==0){
            cout<<"Sera multiplo de 10.\n";
        }else{
            cout<<"Nao e multiplode 10.\n";
        }

    }else{
        if((n%2)==1){
            cout<<"O numero e Impar.\n";
            if((n%5)==0){
            cout<<"Sera divisivel de 5.\n";
            }else{
                cout<<"Nao divisivel de 5.\n";
            }

        }
    }
    system("pause");
    return 0;
}

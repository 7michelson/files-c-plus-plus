#include <iostream>
using namespace std;
int main(){
    /*. Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido
     dado o número referente ao dia. Considere que domingo é o dia 1 e sábado é o dia 7.*/
    int num;
    cout<<"Dentre os numeros 1-7, escolha um para saber se é dial util ou fim de semana \n";
    cout<<"Numero: ";cin>>num;
    if((num>=1)&&(num<=7)){
        if((num>=2)&&(num<=6)){
        cout<<"Dia util!\n";
    }
        if((num==1)||(num==7)){
        cout<<"Fim de semana!\n";
        }
    }
    else{
        cout<<"Dia invalido.\n";
    }system("pause");
    return 0;
}

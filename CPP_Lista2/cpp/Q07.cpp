#include <iostream>
using namespace std;
int main(){
    int sanduba,beb,qnt;
    cout<<"Qual o codigo do sandwich? :";cin>>sanduba;
    cout<<"Quantidade : ";cin>>qnt;
    float conta;
    switch(sanduba){
        case 100:
        case 103:conta=1.10*qnt;break;
        case 102:conta=1.50*qnt;break;
        case 101:
        case 104:conta=1.30*qnt;break;
    }
    cout<<"Qual o codigodo sandwich ?";cin>>beb;
    cout<<"Quantidade : ";cin>>qnt;
    switch(beb){
        case 105:conta=conta+(1.0*qnt);break;
        case 106:conta=conta+(2.0*qnt);break;
        case 107:conta=conta+(1.5*qnt);break;
    }
    cout<<"Sua conta total esta em : R$ "<<conta<<endl<<endl;

    system("pause");
    return 0;
}
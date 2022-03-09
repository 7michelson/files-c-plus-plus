#include <iostream>
using namespace std;
int main(){
    cout<<"Bem vindo a inscricao do plano de saude St.Miguel\n";
    int idade;
    float aux;
    cout<<"Por favor informe a sua idade? : ";cin>>idade;
    float plano=100.00+aux;
    if((idade>=0)&&(idade<10)){
        aux=80;
        float plano=100.00+aux;
        cout<<"Valor do Plano: R& "<<plano<<endl;
    }else{
        if((idade>=10)&&(idade<=30)){
            aux=50;
            float plano=100.00+aux;
            cout<<"Valor do Plano: R$ "<<plano<<endl;
        }else if((idade>30)&&(idade<=60)){
                aux=95;
                float plano=100.00+aux;
                cout<<"Valor do Plano: R$ "<<plano<<endl;
            }else if(idade>60){
                    aux=130;
                    float plano=100.00+aux;
                    cout<<"Valor do Plano; R$ "<<plano<<endl;
                }
            }
system("pause");
return 0;
}
#include <iostream>
using namespace std;
int main(){
    float Km,l,prova;
    cout<<"Quantos Kilometros foi o total do seu percurso? Km: ";cin>>Km;
    cout<<"Quantos litros de gasolina foi consumido ate o fim do percurso? l: ";cin>>l;
    prova=(Km/l);
    if(prova<8){
        cout<<"!!!Venda seu carro!!!"<<endl;
    }   if((prova>=8)&&(prova<=12)){
            cout<<"!!!Economico!!!"<<endl;
        }   if(prova>12){
                cout<<"!!!Super economico!!!"<<endl;
            }
    system("pause");
    return 0;
}
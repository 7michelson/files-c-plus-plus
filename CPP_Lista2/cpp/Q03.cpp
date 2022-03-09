#include <iostream>
using namespace std;
int main(){
    cout<<"Objetivo de mostrar a massa ideal de uma pessoa, dependendo do sexo. \n";
    float altura;
    char sexo;
    float m,f;
    cout<<"Indique a altura em metros: ";cin >>altura;
    cout<<"Informe o sexo : m para masculino ou f para feminina: ";cin >>sexo;
    if(sexo=='m'){
        m=(72.7*altura)-58;
        cout<<"masculino :"<<m<<" Kg"<<endl;
    }
    else{
        if(sexo=='f'){
        f=(62.1*altura)-44.7;
        cout<<"feminino :"<<f<<" Kg"<<endl;
        }
        else{
            cout<<"Sexo invalido.Tente novamente:\n";
        }
    }
    
    system("pause");

    return 0;
}

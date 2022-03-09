#include <iostream>
using namespace std;
int main(){
    float c101=(10/100.0),c102=(20/100.0),c103=(30/100.0);
    float cn,salario;
    cout<<"Qual o piso salarial : R$ ";cin>>salario;
    cout<<"Qal o código de aumento :";cin>>cn;
    if((cn>=101)&&(cn<=103)){
        if(cn==101){
            float R=salario*c101;
            cout<<"O aumento será: R$"<<R<<endl;
            float sal=(salario+R);
            cout<<"Novo salário : R$"<<sal<<endl;
        }
        if(cn==102){
            float Res=salario*c102;
            cout<<"O aumento será: R$"<<Res<<endl;
            float sal=(salario+Res);
            cout<<"Novo salário: R$"<<sal<<endl;
        }
        if(cn==103){
            float r=salario*c103;
            cout<<"O aumento será: R$"<<r<<endl;
            float sal=(salario+r);
            cout<<"Novo salário: R$"<<sal<<endl;
        }  
    }
    else{
        if((cn>103)||(cn<101)){
            float tx=(40/100.0);
            float res=(salario*tx);
            cout<<"O aumento será : R$"<<res<<endl;
            float sal=(salario+res);
            cout<<"Novo salario : R$"<<sal<<endl;
        }
    }
    system("pause");
    return 0;
}

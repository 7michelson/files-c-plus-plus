/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago*/
#include <iostream>
using namespace std;
int main(){
    int Ano;
    float Preco;
    float tx1=(1/100.0);
    float tx2=(1.5/100.0);
    cout<<"Qual o ano do carro: ";cin>>Ano;
    cout<<"Qual o preço de fabrica do carro :";cin>>Preco;
    if(Ano<1990){
        float Imposto=(Preco*tx1);
        cout<<"\nO impostoserá :R$ "<<Imposto<<endl;
    }
    else{
        if(Ano>1990){
            float imposto=(Preco*tx2);
            cout<<"\nO imposto será :R$ "<<imposto<<endl;
        }
    }
    system("pause");
    return 0;
}

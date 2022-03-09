#include <iostream>
using namespace std;
int main(){
    int primeiro,segundo,terceiro;
    cout<<"Digite 3 numeros para obter mias informacoes!"<<endl;
    cout<<"\t1 numero: ";cin>>primeiro;
    cout<<"\t2 numero: ";cin>>segundo;
    cout<<"\t3 numero: ";cin>>terceiro;
    if((primeiro==segundo)&&(segundo==terceiro)){
        cout<<" *Todos os numeros sao iguais!!!"<<endl<<endl;
    }else{
        if(((primeiro==segundo)||(primeiro==terceiro)||(segundo==terceiro))&&((primeiro!=segundo)||(primeiro!=terceiro))){
            cout<<" *Dois sao iguai e um diferente!!!"<<endl<<endl;
        }
        cout<<" *Todos sao diferente!!!"<<endl;
    }
}

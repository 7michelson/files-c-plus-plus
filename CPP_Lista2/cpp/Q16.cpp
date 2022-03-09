#include <iostream>
using namespace std;
int main(){
    int idade,restante;
    cout<<"Digite sua idade: ";cin>>idade;
    if(idade>=18){
        cout<<"Pode dirigir!\n";
    }else{
        restante=18-idade;
        if(restante==1){
            cout<<"Nao pode digirir, faltam "<<restante<<" ano para poder dirigir! \n";
        }   else{
            cout<<"Nao pode digirir, faltam "<<restante<<" anos para poder dirigir! \n";
        } 
    } 
    system("pause");
    return 0;
}

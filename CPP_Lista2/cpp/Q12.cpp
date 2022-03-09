#include <iostream>//Questao 12.lista2
using namespace std;
int main(){
    int idade;
    int temposervico;
    cout<<"Qual a sua idade? ";cin>>idade;
    cout<<"Quanto tempo de serviço possui? ";cin>>temposervico;
    if(idade>=65){
      cout<<"Pode aposentar-se."<<endl<<endl;
    }else{
        if(temposervico>=30){
            cout<<"Pode aposentar-se"<<endl<<endl;
        }else{
        if((idade==60)&&(temposervico==25)){
            cout<<"Pode aposentar-se."<<endl<<endl;
        }else{
            cout<<"Nao pode aposentar-se."<<endl<<endl;
           }
        }
    }
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    cout<<"Ler um número inteiro, dar informações se é par ou impar,\nmaior ou menor que 100 e positivo \nou negativo."<<endl;
    int n;
    
    cout<<"Qual número voce quer ler :"; cin>>n;
    
    if((n%2)==0){
        cout<<"Par.\n";

    }
    else{
        if(((n%2)==1)||((n%2)==-1)){
            cout<<"Impar. \n";
        }
    }
    if((n<100)){
            cout<<"Menor que 100.\n";
        }
        else{
            if(n>100){
                cout<<"Maior que 100.\n";
            }
        }
    if((n<0)){
        cout<<"Negativo.\n";
    }
    else{
        if((n>0)){
            cout<<"Positivo.\n";
        }
    }
    system("pause");
return 0;    
}

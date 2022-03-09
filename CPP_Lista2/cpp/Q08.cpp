#include <iostream>
using namespace std;
int main(){
    int num,b,b1,b2,b3,b4,b5,b6,b7,b8,b9;
    int letra;//antecessores e sucessores
    int a,s;
    cout <<"Qual numero voce quer ler? :";cin>>num;
    cout<<"Escolha a para antecessor e s para sucessor: ";cin>>letra;
    
    if(letra=a){
        b=1;b1=2;b2=3;b3=4;b4=5;b5=6;b6=7;b7=8;b8=9;b9=10;
        a=((num-b)+(num-b1)+(num-b2)+(num-b3)+(num-b4)+(num-b5)+(num-b6)+(num-b7)+(num-b8)+(num-b9));
        cout<<"A soma dos 10 antecessores £: "<<a<<endl;
    }else{
        if(letra=s){
            b=1;b1=2;b2=3;b3=4;b4=5;b5=6;b6=7;b7=8;b8=9;b9=10;
            s=((num+b)+(num+b1)+(num+b2)+(num+b3)+(num+b4)+(num+b5)+(num+b6)+(num+b7)+(num+b8)+(num+b9));
            cout<<"A soma dos 10 sucessores £: "<<s<<endl;
            
        }else{
        cout<<"Entrada invalida"<<endl;
        }
    }

    system("pause");
    return 0; 
}

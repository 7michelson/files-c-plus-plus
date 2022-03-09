#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    char letra;
    cout<<"Indique tres numeros inteiros,e ordene de forma decrescente ou crescente.\nLembrando que c para crescente e d para descrescente."<<endl;
    cout<<"\tX: ";cin>>x;
    cout<<"\tY: ";cin>>y;
    cout<<"\tZ: ";cin>>z;
    cout<<"Crescente ou Decrescente: ";cin>>letra;
    if(letra == 'c'){
        if(x<y && y<z){
            cout << x << ' ' << y << ' ' << z;
        }else if(x<z && z<y){
            cout << x << ' ' << z << ' ' << y;
        }else if(y<z && z<x){
            cout << y << ' ' << z << ' ' <<x;
        }else if(y<x && x<z){
            cout << y << ' ' << x << ' '<< z;
        }else if(z<x && x<y){
            cout <<z << ' ' << x << ' ' << y;
        }else if(z<y && y<x){
            cout << z << ' ' << y << ' ' <<x;
        }
    }
        if(letra == 'd'){
            if(x>y && y>z){
            cout << x << ' ' << y << ' ' << z;
        }else if(x>z && z>y){
            cout << x << ' ' << z << ' ' << y;
        }else if(y>z && z>x){
            cout << y << ' ' << z << ' ' <<x;
        }else if(y>x && x>z){
            cout << y << ' ' << x << ' '<< z;
        }else if(z>x && x>y){
            cout <<z << ' ' << x << ' ' << y;
        }else if(z>y && y>x){
            cout << z << ' ' << y << ' ' <<x;
        }
    }else{
        cout<<"\nEntrada invalida"<<endl;
        }
    
    system("pause");
    return 0;
}
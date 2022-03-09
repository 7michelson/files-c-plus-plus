#include <iostream>
using namespace std;
int main(){
    int num=0;
    int unid, dez, cen, soma;
    cout<<"Qual o Numero deseja ler apenas interos maior q zero ate 3 algorismos; ";cin>>num;

    if(num<0){
        cout << "Numero imvalido!!!"<<endl;
    }else if(num>0){
        cen=num/100;
        dez=(num%100)/10;
        unid=(num%100)%10;
        soma=cen+dez+unid;
        cout<<"A soma dos valores ="<<soma<<endl;
    }
    cout<<"Fim de Programa!!"<<endl;
    system("pause");
    return 0;
}
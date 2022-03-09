#include <iostream>
using namespace std;
int main(){
    cout << "Operando  duas variaveis A e B : \n";
    int A,B;
    cout << "Valor de A:" ; cin>>A;
    cout << "Valor de B: " ; cin>>B;
    cout << " A-B = "<< A-B;
    cout << "\n A+B = "<< A+B;
    cout << "\n A*B = "<< A*B;
    cout << "\n A/B = "<< A/B <<endl;

    system("pause ");
    cout <<"Responda (1)para sim e (0)para não : \n";

    bool C,D;
    cout << "valor de C :";cin >> C;
    cout << "valor de D :";cin >> D;
    cout <<"Negação de C :"<<!C <<endl;
    cout <<"Negação de D :"<<!D <<endl;
    cout <<"Conjução (C&&D) :"<< (C&&D)<<endl;
    cout <<"Disjunção (C||D :"<< (C||D)<<endl;

system("pause");

    return 0;
}

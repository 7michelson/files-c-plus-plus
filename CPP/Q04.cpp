#include <iostream>
using namespace std;
//Essa calculadora expressa o valor para quaisquer valores de porcentagem aqual desejar.

int main(){
float num;
float poc;
double Res;
cout <<"Digite um valor para unidade numérica(u.n): " ;
cin >> num ;
cout << num << " u.n \n";
cout << "Digite um Valor para ser calculado a porcentagem: \n";
cin >> poc;
cout << poc<< " % \n" ;

Res=(poc/100)*num;
cout << "Esse será o resultado final da operação: \n "<< Res << "  u.n " << endl;
system("pause");




return 0;
}
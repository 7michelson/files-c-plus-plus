#include <iostream>
using namespace std;
int main(){
    cout <<"!!!!!!! Declaração de duas variaves e troca de ordem entre elas !!!!!!!" << endl;
    int val1 , val2 , aux ;
    
    cout<<"Declare a variavel 1: "; cin >> val1;
    aux=val1;
    cout<< "declare a variavel 2: ";cin >> val2;
    val1=val2;
    val2=aux;
    cout<< "\t val1="<<val1 << " e val2=" << val2;

return 0;
}
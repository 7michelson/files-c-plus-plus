#include <iostream>
using namespace std;

int main(){
    cout <<"Essa Ferramente tem um poder de converter a temperatura celsius para Fahrenheit: "<< endl;
    // conversor de temperatura
    float C;
    float F;

    cout << "Qual a sua temperatura Celsius?; \n";
    cin >> C;
    cout <<C<< " Cº . \n";
    cout <<"Sua temperatura em graus Fahrenheit é: "<< endl;
    F=(9*C+160)/5; 
    cout << F<< "Fº . \n\n";
    
    system("pause");


return 0;
}
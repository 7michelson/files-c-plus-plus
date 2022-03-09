#include <iostream>

int main(){
    int anos;
    int cg_dias;
    float valor_ct;
    
   
    std::cout <<"Dinheiro gasto por um fumante por mes" << std::endl;


std::cout << "Números de anos como fumante:";
std::cin >> anos;
std::cout << "Cigarros Por dia fumados:";
std::cin >> cg_dias;
std::cout <<"Valor da carteira de cigarros:";
std::cin >> valor_ct;
std::cout <<"R$ "<< (365*anos*cg_dias)*(valor_ct/20);
}

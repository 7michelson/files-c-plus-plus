#include <iostream>

int main(){
    int Anos;
    int Meses;
    int Dias;
    int A=12;
    float M=30;
    int B;
    int K=365;
    //(Ano*365) "dias"
    //(Meses*30) "dias"
    //Res=(Anos*365)+(Mese*30)+Dias
  
    std::cout <<"Essa ferramenta, embora não tenha uma precisão certa, \nirá mostrar quantos dias ao total uma pessoa tem "<< std::endl;

std::cout <<"Qual a sua idade, em Anos,meses e Dia? ";
 std::cin >>Anos >> Meses >> Dias; 
 B=(Anos*A);
 std::cout << "Your Age is it : "<<  Anos << " Anos." << std::endl;
std::cout << "Your moth is't : " << Meses << " meses." << std::endl;
std::cout << "Your days is't : " << Dias  << " Dias."<< std::endl;
std::cout << "Your tatal days are: " << int (Anos*K+(Meses*M)+Dias) << " Dias de vida." << std::endl;
std::cout << "\n\n";
std::system("pause");
}
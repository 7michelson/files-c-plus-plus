#include <iostream>

int main(){
    int Anos;
    int Meses;
    int Dias;
    int A=12;
    float M=30.4323;
    int B;
    //(Ano*365) "dias"
    //(Meses*30.4323) "dias"
    //Res=(Anos*365)+(Mese*30.4323)+Dias
    //A precisão do dado fica exelente representando a quantidade de dias tem um mes, 
    //ao ser represntado por um número flutuante, 30.4323 foi a estimativa, essa estimativa
    // foi diante de várias estimativas até chegar numa boa precisão.
    std::cout <<"\t O Software mostra quantos dias ao total uma pessoa tem de vida."<< std::endl;

std::cout <<"Qual a sua idade: em Anos,meses e Dia, respectivamente? ";
 std::cin >>Anos >> Meses >> Dias; 
 B=(Anos*A);
 std::cout << "Seus anos de vida : "<<  Anos << " Anos." << std::endl;
std::cout << "Seus meses : " << Meses << " meses." << std::endl;
std::cout << "Seus dias: " << Dias  << " Dias."<< std::endl;
std::cout << "Ao todo você tem: " << int ((B+Meses)*M)+Dias << " Dias de vida." << std::endl;
system("pause");
}

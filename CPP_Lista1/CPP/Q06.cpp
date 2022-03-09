#include <iostream>
using namespace std;
int main()
{

//float C=(cf)+cf*(td+ti);
float cf;//custo de fabrica

float td=(0.28);//taixa de distribuição

float ti=(0.45);//taixa de imposto 
float C;//custo total do automovel

cout<< "Declare o valor da fabrica do automovel : ";
cin >>cf;
C=(cf)+cf*(td+ti);
cout <<"\t R$ "<< C << "custo total do automavel \n\n";

system("pause");

return 0;
}




#include <iostream>
using namespace std;
int main(){
int nivel,hora;
float salario;
cout<<"Qual o seu nivel de professor: ";cin>>nivel;
cout<<"Qual a quantidade de horas por dia: ";cin>>hora;
    if((nivel>=1)&&(nivel<=3)){
        switch(nivel){
        case 1:salario=hora*12.0;break;
        case 2:salario=hora*17.0;break;
        case 3:salario=hora*25.0;break;
         }cout<<" Salario diario: R$ "<<salario<<endl;
         cout<<" Salario Mensal: R$ "<<salario*30<<endl;
    }
system("pause");
return 0;
}

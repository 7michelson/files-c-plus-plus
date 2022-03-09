#include <iostream>
using namespace std;
//O software ler o tempo de duração de um evento em minutos e converte em : Horas,minutos e segudos.
int main(){
    int seg;
    int min;
    int h;
    
// 1Hora=60min
// 1min=60s
cout << " Quanto tempo em segundos durou o evento?: ";
cin >> seg;
min=seg/60;
h=min/60;
cout<<h<<"horas\t"<<min<<"min\t" <<seg<< " s \n" ;
system("pause");

return 0;
}



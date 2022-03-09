#include <iostream> 
/*A nota final de um estudante e calculada a partir de três notas atribuídas entre o intervalo de 0 até 10,
respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média
das três notas mencionadas anteriormente obedece aos pesos: Trabalho de Laboratório: 2; Avaliação
Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na tela se o aluno está reprovado (media
entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi aprovado.*/
using namespace std;
int main(){
float notafinal,trabalholab,avsemestral,avfinal;
int peso;
cout<<"A nota de cada aliacao vai de 0-10,escreva a nota obtida de cada uma.\n";
cout<<"Trabalho de laboratorio: ";cin>>trabalholab;
cout<<"Prova semestral: ";cin>>avsemestral;
cout<<"Exane final: ";cin>>avfinal;
if(((trabalholab>=0.0)&&(trabalholab<=10.0))&&((avsemestral>=0.0)&&(avsemestral<=10.0))&&((avfinal>=0.0)&&(avfinal<=10.0))){
    notafinal=(1/10.0)*((trabalholab*2)+(avsemestral*3)+(avfinal*5));
    
    if((notafinal>=0.0)&&(notafinal<=2.9)){
        cout<<"Reprovado\n";
    }
        else{
            if((notafinal>=3.0)&&(notafinal<=4.9)){
                cout<<"Recuperacao\n";
            }
            else{
                if((notafinal>=5.0)&&(notafinal<=10.0)){
                    cout<<"Aprovado\n";
                }
            }
        }
    cout<<"Notal final: "<<(notafinal)<<endl;
}else{
    cout<<"Entrada invalida.\n";
}
system("pause");
return 0;
}


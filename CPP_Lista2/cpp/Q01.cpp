/*Dados três valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
triângulo e, se forem, verificar e escrever se é um triângulo equilátero, isósceles ou escalenos. Se eles
não formarem um triângulo, escrever esta mensagem. Considere as seguintes propriedades:
• O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
• Equiláteros: tem os comprimentos dos três lados iguais;
• Isósceles: tem os comprimentos de dois lados iguais;
• Escaleno: tem os comprimentos dos três lados diferentes*/
#include <iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"Teste dando valores para os três comprimentos,se é um triângulo : \n";
    cout<<"Valor de x :";cin >> x;
    cout<<"Valor de y :";cin >> y;
    cout<<"Valor de z :";cin >> z;

    if(((x+y)>z)&&((x+z)>y)&&((y+z)>x)){
        cout<<"É um triangulo "<<endl;
        if((x==y)&&(z==x)){
            cout<<"Equilatero";
        }
            else{
                if(((x==y)&&(z!=x))||((z==x)&&(z!=y))){
                    cout<<"Isosceles";
                    }
                    else{
                        cout<<"Escaleno "<<endl;

                    }
                
            }
    
    }
    else{
        cout<< "Que pena,isso não é um triangulo";
    }
    system("pause");

    
 return 0;   
}

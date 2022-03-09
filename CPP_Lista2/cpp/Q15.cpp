   /*15. Calcule as raízes de uma equação de 2º grau. Observe que:
• x = −b ± √∆/2a, onde ∆ = B2 − 4ac;
• ax2 + bx + c = 0 representa uma equação de 2º grau;
• A variável a tem que ser diferente de zero. Caso seja igual, escreva a mensagem “Não é equação de
segundo grau”;
• Se ∆ < 0, não existe real. Escreva a mensagem “Não existe raiz”;
• Se ∆ = 0, existe uma raiz real. Escreva a raiz e a mensagem “Raiz única”;
• Se ∆ > 0, escreva as duas raízes reais.*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c;
    double delta;
    cout<< "Dado os coeficientes angular,linear econstante da Função quadratica,\n informme equivalentemente as ordens dos coenficiente(a,b,c).\n";
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    cout<<"Funcao: y=("<<a<<"x^2)+("<<b<<"x)+"<<c<<endl;
    if(a!=0){
        cout<<"E uma equacao de 2º grau!"<<endl;
        delta=(pow(b,2)-4*(a*c));
        if(delta>0){
        float x1,x2;
        x1=(-b + (sqrt(delta)))/(2*a);
        x2=(-b - (sqrt(delta)))/(2*a);
        cout<<"Sua raizes sao: "<<x1<<" e "<<x2<<endl;
        }
        else{
            if(delta==0){
            float x;
            cout<<"Existe uma solucao: \n";
            x=(-b)/(2*a);
            cout<<"x= "<<x<<endl;
            }
                if(delta<0){
                    cout<<"Nao existe solucao real!\n";
                }  
        }
    }
    else{
        cout<<"Nao e uma equacao de 2º grau!"<<endl;
    }
    system("pause");
    return 0;
}
#include <iostream>
#include <string>
#include <ctime> 
using namespace std;
//bRUNO mICHELSON lOPES dANTAS
//pEDRO vICTOR 
struct Animais
{
	string nomeAnimal;
	string especieAnimal;
	int idade;
	long int codigoAnimal; 
	char sexoAnimal;
};

struct Proprietario
{
	string nome;
	long int CPF; //key
	int quantidadeAnimais;
	Animais animal[4];
};

void listarRegistros(Proprietario *proprietarios, int n);
void listarVaredura(Proprietario *proprietarios, int n);
void EditDelet(Proprietario *proprietarios, int n);
void listarEspec(Proprietario *proprietarios, int n);
void listarCodAnimal(Proprietario *proprietarios, int n);
void deletarAnimais(Proprietario *proprietarios, int n);

int main()
{
	srand(time(NULL));
	system("clear");
	int opc, n;

		cout << "+---------------------------------------------+\n"
			 << "|   DESEJA ADICIONAR QUANTOS PROPRIETÁRIOS    |\n"
			 << "+---------------------------------------------+\n"
			 << "|\n"
			 << "|\n"
			 << "|>>>> ";
	cin >> n;
	cin.ignore();
	Proprietario proprietarios[n];

	bool teste = true;
	for (int i = 0; i < n; i++)
	{

		cout << "Nome do Proprietario: ";
		getline(cin, proprietarios[i].nome);
		bool flag = false;
		// key
		int cpfExiste;
		do
		{

			int aux = 0;
			cout << "CPF do Proprietário: ";
			cin >> cpfExiste;

			for (int k = 0; k < n; k++)
			{
				if (cpfExiste == proprietarios[k].CPF)
				{
					aux++;
				}
			}

			if (aux > 0)
				cout << "CPF EXISTE";
			if (aux == 0)
				flag = true;
		} while (flag != true);

		proprietarios[i].CPF = cpfExiste;

		cout << "Quantidade de PET's: ";
		cin >> proprietarios[i].quantidadeAnimais;
		cin.ignore();

		cout << "\nInformações dos animal: " << endl;
		for (int j = 0; j < proprietarios[i].quantidadeAnimais; j++)
		{

			cout << "Nome do PET: ";
			getline(cin, proprietarios[i].animal[j].nomeAnimal);

			cout << "Espécie de animal: ";
			getline(cin, proprietarios[i].animal[j].especieAnimal);
			
			proprietarios[i].animal[j].codigoAnimal =  (rand() % 1000 + j);

			cout << "Idade do animal: ";
			cin >> proprietarios[i].animal[j].idade;
			cin.ignore();

			cout << "Sexo do animal (M/F): ";
			cin >> proprietarios[i].animal[j].sexoAnimal;
			cin.ignore();
		}
	}
	system("cls");

	do
	{
		cout << "+=====================================================+\n"
				 << "|               MENU DO PROPRIETÁRIO                  |\n"
				 << "+=====================================================+\n"
				 << "|  [1] - LISTAR TODOS OS PROPRIETÁRIOS C/ SEUS ANIMAIS|\n"
				 << "|  [2] - PROCURAR PROPRIETÁRIO              	       |\n"
				 << "|  [3] - EDITAR OU EXCLUIR PROPRIETÁRIO               |\n"
				 << "|  [4] - LISTAR ANIMAIS                               |\n"
				 << "|  [5] - EDITAR ANIMAL                                |\n"
				 << "|  [6] - DELETAR ANIMAL                               |\n"
				 << "+=====================================================+\n"
				 << "|  [0] - SAIR                                         |\n"
				 << "+=====================================================+\n"
				 << "+\n"
				 << "+\n"

				 << "=>>> ESCOLHA UMA OPÇÃO >>> ";
		cin >> opc;

		switch (opc)
		{
		case 0:
			cout << "Até logo ;D" << endl;
			break;
		case 1:
			listarRegistros(proprietarios, n);
			break;
		case 2:
			listarVaredura(proprietarios, n);
			break;
		case 3:
			EditDelet(proprietarios,n);
			break;
		case 4: 
			listarEspec(proprietarios, n);
			break;
		case 5: 
		listarCodAnimal(proprietarios,n);
			break;
		case 6: 
		deletarAnimais(proprietarios,n);
			break;
		default:
			cout << "Opção inválida :(\n\n\n";
		}
	} while (opc != 0);
}

void listarRegistros(Proprietario *proprietarios, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "------------------------------------------------\n"
				 << "| PROPRIETÁRIO ..........................[" << i + 1 << "]\n"
				 << "| NOME: " << proprietarios[i].nome << endl
				 << "| CPF: " << proprietarios[i].CPF << endl
				 << "| TOTAL DE ANIMAIS: " << proprietarios[i].quantidadeAnimais << endl
				 << "|------------------------------------------------|\n"
				 << "| INFORMAÇÕES SOBRE OS ANIMAIS                   |\n";
		for (int j = 0; j < proprietarios[i].quantidadeAnimais; j++)
		{
			cout << "ANIMAL (" << j + 1 << ")\n"
					 << "Nome: " << proprietarios[i].animal[j].nomeAnimal << endl
					 << "Espécie do animal: " << proprietarios[i].animal[j].especieAnimal << endl
					 << "Idade: " << proprietarios[i].animal[j].idade << endl
					 << "Código do Animal: " << proprietarios[i].animal[j].codigoAnimal << endl;

			if (proprietarios[i].animal[j].sexoAnimal == 'M')
				cout << "Sexo do animal: MACHO\n";
			else
				cout << "Sexo do animal: FÊMEA\n";
		}
		cout << "------------------------------------------------\n\n";
	}
}

void listarVaredura(Proprietario *proprietarios, int n)
{
	int varCpf = 0;
	cout << "Qual CPF deseja Buscar?:";
	cin >> varCpf;
	for (int i = 0; i < n; i++)
	{
		if(varCpf==proprietarios[i].CPF){
			cout << "------------------------------------------------\n"
					 << "| PROPRIETÁRIO ..........................[" << i + 1 << "]\n"
					 << "| NOME: " << proprietarios[i].nome << endl
					 << "| CPF: " << proprietarios[i].CPF << endl
					 << "| TOTAL DE ANIMAIS: " << proprietarios[i].quantidadeAnimais << endl
					 << "|------------------------------------------------|\n"
					 << "| INFORMAÇÕES SOBRE OS ANIMAIS                   |\n";
			for (int j = 0; j < proprietarios[i].quantidadeAnimais; j++)
			{
				cout << "ANIMAL (" << j + 1 << ")\n"
						 << "Nome: " << proprietarios[i].animal[j].nomeAnimal << endl
						 << "Espécie do animal: " << proprietarios[i].animal[j].especieAnimal << endl
						 << "Idade: " << proprietarios[i].animal[j].idade << endl
						 << "Código animal: " << proprietarios[i].animal[j].codigoAnimal << endl;
				if (proprietarios[i].animal[j].sexoAnimal == 'M'){
					cout << "Sexo do animal: MACHO\n";
					}else if(proprietarios[i].animal[j].sexoAnimal == 'F')
						cout << "Sexo do animal: FÊMEA\n";
			
            }
		}
		else
			cout << "\nCPF nao encontrado!" << endl;
	}
}

void EditDelet(Proprietario *proprietarios, int n)
{
 int  cpfchave, opc, aux=0, cpfXerox;//operacao  
 bool cpfExiste = false, flag=false;
	// Laço de verificação de cpf
	do{
	cout<<"\nDigite o CPF para procurar: ";	
	cin>>cpfchave;
		for(int i=0; i<n;i++){
		if(cpfchave==proprietarios[i].CPF){
			aux  = i;
			cout << "\npassei aqui" << endl;
			cpfExiste = true;
			}
			
		}
	} while(cpfExiste== false);

	//laço do menu e fucnionalidades 
	do {
		
	cout << "| MENU DO PROPRIETÁRIO |\n"
	     << "| (1) - Editar         |\n"
	     << "| (2) - Excluir        |\n"
	     << "|----------------------|\n\n";
		 cout<<"Qual operacao deseja fazer: ";
		 cin>>opc;

		 switch (opc)
		 {
		 case 1:
		 cin.ignore();
			cout<<"\nNome do Proprietario: ";
			getline(cin, proprietarios[aux].nome);

		 do {
			int auxCpf = 0;
			cout << "CPF do Proprietário: ";
			cin >> cpfXerox;

			for (int k = 0; k < n; k++){
				if (cpfXerox == proprietarios[k].CPF)
					auxCpf++;
			}

			if (auxCpf > 0)
				cout << "CPF EXISTE";
			if (auxCpf == 0)
				flag = true;
		} while (flag != true);

		proprietarios[aux].CPF = cpfXerox; 
			 break;
		case 2:
			proprietarios[aux].nome=" ";
			proprietarios[aux].CPF=0;
			proprietarios[aux].quantidadeAnimais=0;
			cout<<"\nProprietario deletado com sucesso!"<<endl;
			break;
		 default:
		 cout<<"\nOperacao Invalida!"<<endl;
			 break;
		 }
	} while(opc != 1 && opc != 2 );

	if(cpfExiste != true) cout << "Proprietário não encontrado!" << endl;
}

void listarEspec(Proprietario *proprietarios, int n)
{	
	string discovery;
	int contadora=0;
	getchar();
	cout << "Qual a espécie de animal deseja encontrar?";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < proprietarios[i].quantidadeAnimais; j++){
				if(discovery==proprietarios[i].animal[j].especieAnimal) {
					contadora++;
				cout << "ANIMAL (" << j + 1 << ")\n"
						 << "Nome: " << proprietarios[i].animal[j].nomeAnimal << endl
						 << "Espécie do animal: " << proprietarios[i].animal[j].especieAnimal << endl
						 << "Idade: " << proprietarios[i].animal[j].idade << endl
						 << "Código animal: " << proprietarios[i].animal[j].codigoAnimal << endl;
				if (proprietarios[i].animal[j].sexoAnimal == 'M'){
					cout << "Sexo do animal: MACHO\n";
					}else if(proprietarios[i].animal[j].sexoAnimal == 'F')
						cout << "Sexo do animal: FÊMEA\n";
				}
	}
	
}
if(contadora==0) cout << "Nenhum animal dessa espécie!" << endl;
}
void listarCodAnimal(Proprietario *proprietarios, int n)
{	
	int cod=0, aux=0, axx=0;
	bool teste = false;
	
	cout << "Qual o código do animal deseja encontrar?";
	cin>>cod;
	// pegar posições dos prop. e animal e verficar se existe um animal ;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < proprietarios[i].quantidadeAnimais; j++){
				if(cod==proprietarios[i].animal[j].codigoAnimal) {	
				aux = i;
				axx =j;
				teste=true;
				}
	}
	
	}
	if(teste==1) {
	getchar();	
	cout <<"Nome do animal: ";
	getline(cin, proprietarios[aux].animal[axx].nomeAnimal);
	//
	cout<<"Nome da especie: ";
	getline(cin, proprietarios[aux].animal[axx].especieAnimal);
	cout<<"Idade do animal: ";
	cin>>proprietarios[aux].animal[axx].idade;
	cout<<"Sexo do animal(M/F): ";
	cin>>proprietarios[aux].animal[axx].sexoAnimal;
	}else{
		cout<<"\nNenhum Animal listrado para o Codigo: "<<endl;
	}

}



void deletarAnimais(Proprietario *proprietarios, int n)
{
	int varCpf = 0;
	cout << "Qual CPF deseja Buscar?:";
	cin >> varCpf;
	for (int i = 0; i < n; i++){
		if(varCpf==proprietarios[i].CPF){
			for (int j = 0; j < proprietarios[i].quantidadeAnimais; j++){
				proprietarios[i].animal[j].nomeAnimal=""; 
				proprietarios[i].animal[j].especieAnimal="";
				proprietarios[i].animal[j].idade =0;
				proprietarios[i].animal[j].codigoAnimal=0;
				proprietarios[i].animal[j].sexoAnimal=' ';
            }
		}
		else
			cout << "\nCPF nao encontrado!" << endl ;		
	}
}

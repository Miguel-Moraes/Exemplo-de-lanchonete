#include <iostream>
#include <locale>
using namespace std;
int main()
{
setlocale(LC_ALL, "ptb");
int codigo, qnt;
float valor=0;
char *pedido;
bool invalido=false;
cout<< " *** Cardápio ***\n";
cout<<" 100 - Hambúrger - R$5.50\n";
cout<<" 101 - Cachorro-quente - R$4,50\n";
cout<<" 102 - Milkshake - R$7,00\n";
cout<<" 103 - Pizza brotinho - R$8,00\n";
cout<<" 104 - Cheeseburguer - R$8,50\n";
cout<<"\n";
cout<<"Informe o código do seu pedido: \n";
cin>>codigo;
cout<<"Quantidade desejada: ";
cin>>qnt;
switch (codigo)
{
	case 100: pedido="Hamburger"; valor=qnt*5.50; break;
	case 101: pedido="Cachorro-quente"; valor=qnt*4.50; break;
	case 102: pedido="Milkshake"; valor=qnt*7.00; break;
	case 103: pedido="Pizza brotinho"; valor=qnt*8.00; break;
	case 104: pedido="Chesseburger"; valor=qnt*8.50; break;
	default:
		cout<<"Pedido inválido!!!";
		invalido=true;
}
if (!invalido)
{	cout<< qnt << " de " << pedido << " Valor total: R$"<< valor;
}
	
	
		 
	
	
}


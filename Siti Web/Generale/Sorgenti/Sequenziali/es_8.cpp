#include <iostream>
using namespace std;
main()
{
	cout<<"Calcolare il quadrato del successivo del doppio di un numero."<<endl;
	float n1,risultato_finale;
	char risultato;
	cout<<"inserisci il numero"<<endl;
	cin>>n1;
	
	risultato=(n1*n1)+1;

	risultato_finale=risultato*risultato;
	cout<<"Il risultato finale e':"<<risultato_finale<<endl;
	system("PAUSE");
	
}

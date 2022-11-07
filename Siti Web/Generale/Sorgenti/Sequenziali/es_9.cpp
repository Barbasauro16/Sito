#include <iostream>
using namespace std;
main()
{
	int n1,risultato,differenza;
	cout<<"Calcolare la differenza tra il quadrato di un numero e il numero stesso."<<endl;
	cout<<"inserisci il numero";
	cin>>n1;
	
	risultato = (n1*n1);
	cout<<"il quadrato del numero e':"<<risultato<<endl;
	
	differenza = (n1*n1)-n1;
	cout<<"la differenza e':"<<differenza<<endl;
	system("PAUSE");
	
}

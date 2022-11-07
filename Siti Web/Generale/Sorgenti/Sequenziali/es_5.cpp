#include <iostream>
using namespace std;
main()
{
	float prezzo_netto,prezzo_lordo,iva;
	
	cout<<"Inserire il prezzo lordo dell altricolo"<<endl;
	cin>>prezzo_lordo,
	
	cout<<"Inserire la percentuale dell iva"<<endl;
	cin>>iva,
	
	prezzo_netto=prezzo_lordo/(1-iva/100);
	cout<<"Il prezzo netto dell articolo e':"<<prezzo_netto<<endl;
	
	system("PAUSE");
}

#include <iostream>

using namespace std;
main()
{
	float cateto_minore,cateto_maggiore,area;
	
	cout<<"calcolo dell' area"<<endl;
	cout<<"il cateto minore e':"<<endl;
	cin>>cateto_minore;
	
	cateto_maggiore=cateto_minore/3*5;
	
	cout<<"il cateto maggiore e':"<<cateto_maggiore<<endl;
	
	area = (cateto_maggiore*cateto_minore)/2;

	cout<<"l'area del triangolo e':"<<area<<endl;
	system("PAUSE");
}

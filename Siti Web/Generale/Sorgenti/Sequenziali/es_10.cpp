#include <iostream>
using namespace std;
main()
{
	float area,base_maggiore;
	cout<<"inserisci la base maggiore"<<endl;
	cin>>base_maggiore;
	
	area=(base_maggiore+(base_maggiore*1/3))*(base_maggiore*2/3) /2;
	cout<<"L'area e':"<<area<<endl;


	system("PAUSE");
}

#include<iostream>
using namespace std;
main()
{
	float a,b,p;
	cout<<"calcolo perimetro del rettangolo:"<<endl;
	cout<<"inserisci la base:"<<endl;
	cin>>b;
	cout<<"inserisci l'area:"<<endl;
	cin>>a;
	
	p = (a/b) * 2 + b * 2;
	cout<<"il perimetro e':"<<p<<endl;
	system("PAUSE");
}

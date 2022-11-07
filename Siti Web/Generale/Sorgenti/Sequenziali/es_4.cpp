#include <iostream>
using namespace std;

int main()
{
   float prezzo_finale,prezzo_base,sconto,iva;
   cout<<"Calcolare il prezzo di un articolo"<<endl;
   cout<<"Inserire il prezzo dell' articolo: ";
   cin>>prezzo_base;
   
   cout<< "Inserire lo sconto dell' articolo: ";
   cin>>sconto;
   
   cout<<"Inserire l iva: ";
   cin>>iva;
   
   prezzo_finale= prezzo_base-prezzo_base*sconto/100*(1+iva/100);
   cout<<"Il prezzo finale dell' articolo e':"<<prezzo_finale<<endl;
   
   system("PAUSE");
}

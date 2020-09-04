#include <iostream>
using namespace std;

int main()
{

int nombre1;
int nombre2;


cout<<"Saisir le premier nombre\n";
cin>>nombre1;

cout<<"Saisir le deuxieme nombres\n";
cin>>nombre2;

if(nombre1<0 & nombre2<0)
{
 cout<<"Le résulta est positif\n";
}

else if(nombre1>0 & nombre2<0)
{
 cout<<"Le résulta est négatif\n";
}
else if(nombre1<0 & nombre2>0)
{
 cout<<"Le résulta est négatif\n";
}
else if(nombre1>0 & nombre2>0)
{
 cout<<"Le résulta est positif\n";
}

}

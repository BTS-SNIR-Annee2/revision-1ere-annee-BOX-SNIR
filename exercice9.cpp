#include <iostream>
using namespace std;

int main()
{

int age;



cout<<"Saisir l'âge de l'enfant \n";
cin>>age;


if(age<6)
{
 cout<<"Pas de catégorie\n";
}

else if(age>=6 & age<=7)
{
 cout<<"Catégorie Poussin\n";
}
else if(age>=8 & age<=9)
{
 cout<<"Catégorie Pupille\n";
}
else if(age>=10 & age<=11)
{
 cout<<"Catégorie Minime\n";
}
else if(age>=12)
{
 cout<<"Catégorie Cadet\n";
}



}

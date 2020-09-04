#include <iostream>
using namespace std;

int main()
{
float TVA ;
float prix;
float nombreA;
float prixFinal;


cout << "Quelle est le prix de larticle ?";
cin>>prix;

cout<< "Combien voulais vous d'arcticle ?";
cin>>nombreA;

cout<<"Quelle est le taux de TVA sur votre article ?";
cin>>TVA;

TVA=TVA/100+1;

prixFinal= ((prix * nombreA) * TVA);

cout<<"Le prix final toute taxe comprise est de "<<prixFinal<<" euros";






}

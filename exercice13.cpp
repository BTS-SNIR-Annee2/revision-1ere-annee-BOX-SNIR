#include <iostream>
using namespace std;

int main()
{


int nombre;
int final=0;
int cpt = 0;


for(int i = 1;i<21;i++)
{

	cout << "Entree un nombre"<<" "<<i<<endl; 
	cin>> nombre;
	if(nombre>final)
{

	final=nombre;
	cpt = i;
}
	
}


cout <<final << " " << cpt <<endl;




}

#include <iostream>
using namespace std;

int main(){
	int nombre;
	cout<<"Entrée un nombre\n";
	cin>>nombre;
	if(nombre==0){
		cout<<"Le nombre entrée vaut 0\n";
	}

	else if(nombre>0)
	{
	cout<<"Le nombre entrée est positif\n";
	
	}


	else if (nombre<0){
		cout<<"Le nombre entrée est négatif"<<endl;
	}
}

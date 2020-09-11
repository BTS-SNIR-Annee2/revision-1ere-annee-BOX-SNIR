#include <iostream>
using namespace std;

int main()
{
	int nombre=0;
	int y=0;
cout << "Entree un nombre  " ;
cin>>nombre; 

do
{
y++;
for(int i;i<10;i++)
{
	
	nombre++;
	cout<<nombre<<endl;
}
	
}while (y <10);

}

#include <iostream>
using namespace std;

int main()
{
	int nombre=0;



do
{
cout << "Entree un nombre  " ;
cin>>nombre; 

if (nombre>20)
{

	cout<<"Plus petit\n";
}
else if (nombre<10)
{
	cout<<"Plus grand\n";

}
}while (nombre < 10 or nombre >20);


}

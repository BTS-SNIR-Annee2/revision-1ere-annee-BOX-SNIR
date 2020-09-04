#include <iostream>
using namespace std;

int main()
{
int A = 13;
int B = 63;
int C = 10;
int stockage;

cout << "Avant échange" << "A = " <<A<< "B = " <<B<< "C = "<<C;

stockage = A;
A=B;
B=C;
C=stockage;

cout << "Apres échange" << "A = " <<A<< "B = " <<B<< "C = "<<C;



}

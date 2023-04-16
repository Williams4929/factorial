#include <iostream>
using namespace std;
int main{
int num,fact;
fact = 1;
cout << "Digite un numero";
cin >> num;
for (int i = 0; i != num; i++)
{
	fact = fact * num;
}
cout << "El factorial es: " << fact;
return 0;
}
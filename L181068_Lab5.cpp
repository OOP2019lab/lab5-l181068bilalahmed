#include <iostream>
#include <string>
#include "bankAccount.h"

using namespace std;

int main(){
	bankAccount myAccount ("John Doe", 549002);
	myAccount.Print();
	cout << endl;
	myAccount.deposit(5000);
	myAccount.Print();
	cout << endl;
	myAccount.withDraw(2000);
	myAccount.Print();
	system ("pause");
}

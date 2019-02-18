#include <iostream>
#include <string>

using namespace std;

class bankAccount{
	//Private variables
	string Name;
	int accNumber;
	float Balance;
	float limitBalance;
	int transactionSize;
	int* transaction;
	int transactionNo;

public:
	//Public 
	bankAccount(string name, int accnumber);
	void Print ();
	string getName();
	float getAccNo();
	float getBalance();
	int getTransactionNo();
	void getTransaction();
	void withDraw(int amount);
	void deposit (int amount);
	~bankAccount();
	void increaseTranCapacity();
};

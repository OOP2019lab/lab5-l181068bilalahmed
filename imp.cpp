#include <iostream>
#include <string>
#include "bankAccount.h"

using namespace std;

//Constructor
bankAccount :: bankAccount(string name , int accnumber){
	Name = name;
	accNumber = accnumber;
	Balance = 0;
	transactionSize = 10;
	transaction = new int [transactionSize];
	limitBalance = 200000;
	transactionNo = 0;
}

//Getter Functions
string bankAccount :: getName(){
	return Name;
}
float bankAccount :: getAccNo(){
	return accNumber;
}
float bankAccount :: getBalance(){
	return Balance;
}
int bankAccount :: getTransactionNo(){
	return transactionNo;
}

void bankAccount :: getTransaction(){
	for (int i = 0; i < transactionNo; i++){
		cout << transaction[i] << endl;
	}
}


//Withdraw Function
void bankAccount :: withDraw(int amount){
	if (amount <= Balance){
		cout << "Transaction Successful" << endl;
		Balance = Balance - amount;
		amount = -amount;
		transaction[transactionNo] =  amount;
		transactionNo++;
	}
	else{ 
		cout << "Transaction Unsuccessful" << endl;}
}

//Deposit Function
void bankAccount :: deposit(int amount){
	if(amount + Balance <= limitBalance){
		cout << "Transaction Successful" << endl;
		Balance = amount;
		transaction[transactionNo] = amount;
		transactionNo++;
	}
	else{
		cout << "Transaction Unsuccessful" << endl;
	}
}

// Printing Function
void bankAccount :: Print(){
	cout << "Account Name: " << Name << endl;
	cout << "Account Number: " << accNumber << endl;
	cout << "Available Balance: " << Balance << endl;
	cout << "Total Transaction: " << transactionNo << endl;
	cout << "Transactionsw: " << endl;
	bankAccount :: getTransactionNo();
	bankAccount :: getTransaction();
}

//Destructor
bankAccount :: ~bankAccount(){
	Name = "";
	accNumber = -1;
	Balance = -1;
	transactionNo =-1;
	limitBalance = -1;
	transactionNo = -1;
	delete [] transaction;
	transaction = nullptr;
}

//Increase Transaction Capacity Function
void bankAccount :: increaseTranCapacity(){
	int * temp = new int [2 * transactionSize];
	for (int i = 0; i < transactionNo; i++){
		temp[i] = transaction[i];
	}
	delete[] transaction;
	transaction = temp;
	delete[] temp;
}
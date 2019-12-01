//extern double accounts[50][2]
#ifndef _MYBANK_H_
#define _MYBANK_H_
extern double accounts[50][2] ; 
void closeAccount(int accountNumber);
void balance(int accountNumber);
void transfer(int accountNumber ,double sum);
void pull(int accountNumber ,double sum);
void addDependPercent(double percent);
void printall();
void closeAllAccounts();
void openAccount(double intialSum);
#endif
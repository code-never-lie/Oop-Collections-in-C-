Collection Classes
- Collection acts as container of objects
-Object contains objects

e.g.  Bank contains accounts
     Bank is a collection of accounts
e.g. Library contains Books
     Library is a collection of books

e.g Simulate Bank Problem
  Accounts(accno,Title,balance,activeFlag,CloseFlag)
  Bank (collection of accounts)
          Methods
         OpenAccount(account)
         deposit(accno,amount)
         withdraw(accno,amount)
         closeAccount(accno)
         freezeAccount(accno)
         unFreezeAccount(accno)
.....................................................
#include <iostream.h>
#include <conio.h>
#include <string.h>
class Account {
private:
int accno;
char title[30];
int balance;
bool activeFlag;
bool closeFlag;
public:
    Account() { }
    Account(int ano,char t[],int bal){
    accno=ano;
    strcpy(title,t);
    balance=bal;
    activeFlag=true;
    closeFlag=false;    
    }
void setAccno(int ano){accno=ano;}
void setTitle(char t[]){strcpy(title,t);}
void setBalance(int bal){balance=bal;}
void setActiveFlag(bool flag){activeFlag=flag;}
void setCloseFlag(bool flag){closeFlag=flag;}
int getAccno() { return accno;}
char * getTitle() { return title;}
int getBalance() { return balance;}
bool getActiveFlag() { return activeFlag;}
bool getCloseFlag() { return closeFlag;}
};

class Bank {
private :
 Account *a;
 int size;
public :
      Bank() { }
      Bank (int s) { size=s;
           a=new Account[size];
      }
void openAccount(Account form){
 a[form.getAccno()]=form;
}
int getBalance(int ano) {
   return a[ano].getBalance();
}
void withdraw(int ano,int amt  ){
if (a[ano].getActiveFlag()==false){
    cout<<"At present Account is freezed \n"; 
    return;
} 
 int balance=getBalance(ano);
 if (amt<=balance)
    a[ano].setBalance(balance-amt);
 else
     cout<<" Out of balance"<<endl;
}
void deposit(int ano,int amt  ){
 if (a[ano].getActiveFlag()==false){
    cout<<"At present Account is freezed \n"; 
    return;
}
 int balance=getBalance(ano);
  a[ano].setBalance(balance+amt); 
}
void freezAccount(int ano){
 a[ano].setActiveFlag(false);
}
void unFreezAccount(int ano){
 a[ano].setActiveFlag(true);
}
};

void main () {
Bank bank(5);
Account form;
//......................................
// in Bank Lobby Goher wants to open bank Account
form.setAccno(1);
form.setTitle("Goher");
form.setBalance(1000);
form.setActiveFlag(true);
form.setCloseFlag(false);
//............................................
bank.openAccount(form);
//.........................................
// Osama wants to open account 
form.setAccno(2);
form.setTitle("Osama");
form.setBalance(20000);
form.setActiveFlag(true);
form.setCloseFlag(false);
//......................................
bank.openAccount(form);
//.........................................
// Goher wants to withdraw  500 from acc
//......................................
bank.withdraw(1,500);
cout<<bank.getBalance(1)<<endl;
//.......................................
// osama wants to deposit  5000 int his account
//.............................................
bank.deposit(2,5000);
cout<<bank.getBalance(2)<<endl;
//..........................................
bank.freezAccount(1);
//......................................
bank.withdraw(1,500);
//.................................
bank.unFreezAccount(1);

}
////////////////////////////////////////////
              Develop a Menu For Bank

   1- Open Account
   2- withdraw
   3- deposit
   4- freeze Account
   5- unFreeze Account 
   6- Display All Accounts
   7- exit
.................................................
#include <stdlib.h>  //for system
class Menu{
public :
void  menu(){
system("cls");
cout<<" B   A   N   K     M   E   N  U \n\n";
cout<<"1- Open Account  \n ";
cout<<"2- withdraw  \n ";
cout<<"3- deposit  \n ";
cout<<"4- Get Balance  \n ";
cout<<"5- freeze Account  \n ";
cout<<"6- unFreeze Account  \n ";
cout<<"7- Display All Accounts \n ";
cout<<"8- exit  \n ";
cout <<"Select Option = ";
}

void displayMenu() {
     Bank bank(5);
     Account form;
     char option; int accno; int amount;
     menu();
	 cout.flush();
while (true){
     option=getche();
switch(option){
case '1': bank.openAccount(fillForm());
          cout<<"Account Successfully Opened\n";
		  cout<<endl;
          break;      
   
case '2': system("cls");
          cout<<"Account No ="; cin>>accno;
          cout<<"Amount ="; cin>>amount;
          bank.withdraw(accno,amount);
		  cout<<endl;
          break;  
case '3': system("cls");
          cout<<"Account No ="; cin>>accno;
          cout<<"Amount ="; cin>>amount;
          bank.deposit(accno,amount);
		  cout<<endl;
          break; 
case  '4': system("cls");
          cout<<"Account No ="; cin>>accno;
          cout<<"Balance =";                       

cout<<bank.getBalance(accno);
      cout<<endl;
          break; 
case '8': exit(0);

  }//end switch
  menu();
  cout.flush();
}//end  of loop
}    

Account fillForm(){
  system("cls");
  cout <<" Account form Data entry \n";
  int accno;
  char title[30];
  int balance;
  cout<<"Account No ="; cin>>accno;
  cout<<"Account Title ="; cin>>title;
  cout<<"Account Balance ="; cin>>balance;
  Account form(accno,title,balance);
  return form;
}
 
};

void main () {
Menu m;
m.displayMenu();

}

///////////////////////////////////////////
            Assignment 

Library
   Book (isbn,Title, price, issueFlag,author,publisher,damageFlag,Steelflag, edition)


Library (collection of books )

       purchaseBook(book)
       issueBook (isbn)
       returnBook ( isbn)
       searchBookIsbn(isbn)
       searchBookTitle(title)
       searchBookAuthor(author)
       searchBookPublisher(publisher)
       setDamageFlag(isbn);
       setSteelFlag(isbn);
       displayAllBooksATitleWise();
       displayAllBooksAAuthorWise();
       displayAllBooksAPublisherWise();
       displayAllBooksAIsbnWise();
   at least 10 books    

................................



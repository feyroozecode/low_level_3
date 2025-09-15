#include <iostream>
#include <string>
#include <vector>

class BankAccount {
    private:
        std::string accountNumber;
        double balance;

   // Create the constructor]
   public:
     BankAccount(std::string accNum, double initialBalance): 
             accountNumber(accNum), balance(initialBalance){
   }

    void deposit(double amount) {
        if(amount > 0){
            balance += amount;
            std::cout << "Dépot de " << amount << " effectué. Nouvequ Solde : " << balance << "\n";
        } else {
            std::cout << "Le montant du dépoit doit etre positif";
        }
   }

  void withdraw(double amount){
    if(amount > 0 && balance >= amount) {
      balance -= amount;
      std::cout << "Retrait de " << amount << " effectué. Nouveau solde:" 
         << balance << "\n";
    } else if(amount <= 0){
       std::cout << "Le montant du retrait doit etre positif. \n";
    } else {
        std::cout << "Solde insufisant pour le retreait de " << amount << 
                     ". Solde actuel " << balance << "\n";
    }
  }

   double getBalance() const {
      return balance;
   }

   std::string getAccountNumber() const {
     return accountNumber;
  }
 
};


int main(){
    BankAccount myAccount("NIG202305", 1000.0);
    std::cout<< "Compte " << myAccount.getAccountNumber() << "Créer avec un solde de " << myAccount.getBalance() << "\n";

    myAccount.deposit(540);
    myAccount.deposit(350);
    myAccount.withdraw(200);

   std::cout << "Solde final du compte" << myAccount.getAccountNumber() << " : "
    << myAccount.getBalance() << "\n";

    return 0;
 }

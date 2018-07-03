#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <string>


class BankAccount
{
    private:
        std::string name;
        int balance;
    public:
        void setName(std::string n){
            name = n;
        }
        void setBalance(int b){
            balance = b;
        }
        std::string getName(){
            std::cout<<std::endl<<"Name "<<std::endl;
            return name;
        }
        int getBalance(){
            std::cout<<std::endl<<"Balance $";
            return balance;
        }
        void addBalance (){
            std::cout<<"Enter the amount of money you want to add to your balance "<<std::endl;
            int n;
            std::cin>>n;
            balance += n;
            std::cout<<"Added $"<<n<<" to your balance"<<std::endl;
        }
        void withdrawal (){
            std::cout<<"Enter the amount of money you want to withdraw from your balance "<<std::endl;
            int n;
            std::cin>>n;
            if (balance == 0){
                std::cout<<"We are sorry, your current balance is $"<<balance<<std::endl;
            } else if (balance - n < 0){
                std::cout<<"We are sorry, you only have $"<<balance<<" on your balance. You can't withdraw more than $"<<balance<<std::endl;
            } else {
                balance -= n;
                std::cout<<"You have withdrawn $"<<n<<std::endl<<"Current balance is $"<<balance<<std::endl;
            }
        }

};

#endif // BANKACCOUNT_H

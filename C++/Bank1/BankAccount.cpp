#include "BankAccount.h"

int main (){
    BankAccount myAccount;
    std::string s;
    std::cout<<"Enter your Name ";
    std::getline(std::cin,s);

    myAccount.setName(s);
    myAccount.setBalance(0);

    std::cout<<myAccount.getName();
    std::cout<<std::endl;
    std::cout<<myAccount.getBalance();

    bool tmp = true;

    while (tmp){
        std::cout<<std::endl<<"=================================================================="<<std::endl;
        std::cout<<std::endl<<"What do you want to do? (enter the index of a desirable action)"<<std::endl;
        std::cout<<"Actions: "<<std::endl<<"1.View Balance"<<std::endl<<"2.Add money to the balance"<<std::endl<<"3.Withdraw money from the balance"<<std::endl;
        std::cout<<"4.Exit the application"<<std::endl;
        std::cout<<std::endl<<"=================================================================="<<std::endl;
        int idx;
        std::cin>>idx;
        switch (idx){
        case 1:
            std::cout<<myAccount.getBalance();
            break;
        case 2:
            myAccount.addBalance();
            break;
        case 3:
            myAccount.withdrawal();
            break;
        case 4:
            tmp = false;
        }
    }
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

void stringReversal (std::string str){
    int n = str.size();

    for (int i=0; i<n/2; i++){
        std::swap(str[i], str[n-i-1]);
    }

    std::cout<<str;

}

int main (){
std::string str1;
std::cin>>str1;
stringReversal(str1);
}

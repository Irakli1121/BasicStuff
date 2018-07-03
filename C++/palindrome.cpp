#include<iostream>

void palindrome (std::string str){
    int len = str.size();
    bool isPalindrome = true;
    for (int i=0; i<len/2; i++){
        if (str[i] != str[len-i-1]){
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome){
        std::cout<<"This word is a palindrome";
    } else {
        std::cout<<"This word isn't a palindrome";
    }
}

int main (){
    std::string str1;
    std::cin>>str1;
    palindrome(str1);
    return 0;
}

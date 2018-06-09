#include <iostream>
#include <map>
#include <cctype>

void maxChar (std::string str){
    std::map<char,int> mp;
    std::map<char,int>::iterator it;

    int maxx=0;
    char maxxChar;

    for (int i=0; i<str.size(); i++){
        str[i]=tolower(str[i]);
    }

    for (int i=0; i<str.size(); i++){
        mp[str[i]]++;
    }

    for(it = mp.begin(); it != mp.end(); ++it )
    if (it ->second > maxx)
    {
        maxx = it->second;
        maxxChar = it->first;
    }

    std::cout<<maxxChar;
}

int main () {
std::string s1;
std::cin>>s1;
std::cout<<"The most used character in this string is ";
maxChar(s1);
}

#include <iostream>
#include <cstdlib>
int reverseInt (int num){
    num = abs(num);
    std::cout<<num%10;
    if (num/10==0) {
            return 0;
    }
    reverseInt(num/10);


}


int main () {
int n;
std::cin>>n;

int absN = abs(n);

std::cout<<"Reversed "<<n<<" = ";
if (absN!=n){
    std::cout<<"-";
}
reverseInt(n);
}

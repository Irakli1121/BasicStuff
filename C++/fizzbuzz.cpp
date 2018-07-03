#include <iostream>
int arr[1000000];

 int main () {
 int n;
 std::cin>>n;

for (int i=3; i<=n; i+=3){
    arr[i]+=3;
 }
 for (int i=5; i<=n; i+=5){
    arr[i] +=5;
 }

 for (int i=1; i<=n; i++){
    if (arr[i]==3){
        std::cout<<"fizz ";
    } else if (arr[i]==5){
        std::cout<<"buzz ";
    } else if (arr[i]==8){
        std::cout<<"fizzbuzz ";
    }else {
        std::cout<<i<<" ";
    }

 }

}

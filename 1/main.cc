#include<iostream>
#include<array>

int main(){
  const int SIZE = 4;
  std::array<int, SIZE> s;
  for(auto &i : s) {
    std::cin>>i;
    std::cout<<i;
  }
}

#include <iostream>
#include <array>

int main(){
  const int SIZE = 10; 
  std::array<int, SIZE> s;
  for(auto &i: s){
    std::cin>>i;
  }
  for(const auto &i: s){
    std::cout<<i<< " ";
  }
}

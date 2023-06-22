#include <algorithm>
#include <iostream>
#include <array>
#include <iterator>

int main(){
  const int SIZE = 15;
  std::array<int, SIZE> s;
  std::array<int, SIZE>::iterator c;
  for(auto &i: s) {
    std::cin>>i;
  }
  c = std::max_element(s.begin(), s.end());
  std::cout<<"Absolute max element found at index: "<<std::distance(s.begin(), c)<<" has value: "<< *c<< 
    '\n';
}

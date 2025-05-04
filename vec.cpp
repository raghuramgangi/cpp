#include <vector>
#include <iostream>
using namespace std;

void printVector(std::vector<int> &v) {

  for (int num : v) {
    cout << num;
  }
  cout << std::endl;

}


int main() {
  std::vector<int> v = {10, 20, 30};

  printVector(v);
  
  v.push_back(40);

  printVector(v);


}

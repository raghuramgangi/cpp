#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
  std::vector<int> v = {10,1,3,2,100};

  std::sort(v.begin(), v.end(), [] (int a, int b) { return b < a; });
  for (auto num : v) {
    cout<<num<<endl;
  }


}


#include<map>
#include<iostream>
using namespace std;


int main() {

  std::map<string, int> m = {{"Raghu",40}, {"Archana",37}, {"Tanvi",5}, {"Riya",4}, {"Isha",1}};


  for (auto & iter : m) {
   cout << iter.first << "--->" << iter.second << endl;
  }

}

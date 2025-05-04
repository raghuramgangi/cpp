#include <vector>
#include <iostream>
using namespace std;

int main() {

	std::vector<int> v = {3,2,1};

	v.push_back(4);


	std::sort(v.begin(), v.end(), [](int a,int b) { return b>a; });

	for (auto it=v.begin(); it != v.end(); it++){

		cout << *it << std::endl;
	}

	cout << "capacity " << v.capacity() << " ";
	cout << "size " << v.size() << " ";
	cout << "Is Empty " << v.empty() << " ";
}

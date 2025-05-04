// C++ code to implement std::make_unique() 
#include <iostream> 
#include <memory> 
using namespace std; 

class Geeks { 
public: 
	int d; 

	// construtor 
	Geeks(int x) 
	{ 
		this->d = x; 
		cout << "Object Created\n"; 
	} 

	// destructor 
	~Geeks() { cout << "Object Destroyed"; } 
}; 

void f() 
{ 
	// creating unique ptr object 
	shared_ptr <Geeks> o = std::make_shared<Geeks> (100);
	shared_ptr <Geeks> p = o;
	cout << o.use_count() << endl; 
	cout << p.use_count() << endl; 
} 

int main() 
{ 

	f(); 
	return 0; 
}


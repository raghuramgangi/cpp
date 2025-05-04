#include <memory>
#include <iostream>

int main() {
	
	std::shared_ptr <int> sptr1 = std::make_shared <int> (100);	
	std::weak_ptr <int> sptr2 = sptr1;
        std::cout << "Reference Count: " << sptr1.use_count() << std::endl;  // Output: 2

	if (auto sptr3 = sptr1 ) {
          std::cout << "Reference Count: " << sptr1.use_count() << std::endl;  // Output: 2
	}
        std::cout << "Reference Count: " << sptr1.use_count() << std::endl;  // Output: 2
}


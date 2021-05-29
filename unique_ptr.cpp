
#include <iostream>
#include <memory>

struct Sample {
   int content_;
   Sample(int content) : content_(content) {
      std::cout << "Constructing Sample(" << content_ << ")" << std::endl;
   }
   ~Sample() {
      std::cout << "Deleting Sample(" << content_ << ")" << std::endl;
   }
};

void ReleaseUniquePointer() {
   auto up1 = std::make_unique<Sample>(11);
   auto up2 = std::make_unique<Sample>(22);

   auto ptr = up2.release();
   if (up2) {
      std::cout << "up2 is not empty." << std::endl;
   }
   delete ptr;
}

int main() {
   ReleaseUniquePointer();
}

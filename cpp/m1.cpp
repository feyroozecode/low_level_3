#include <iostream>
#include <vector>
#include <string>
#include <map>

class Cat{
    public:
        std::string name;
        int age;

    // constructor
    Cat(std::string name , int age) : name(name), age(age) {
        std::cout << name << " The cat is Born \n";
    }

    // Method
    void makeSound(){
        std::cout<< name << " Say Meow Meow \n";
    }

    // DESTRUCTOR
    ~Cat(){
        std::cout << name << " The cat passed away \n";
    }
};


int main() {
    // Creating the Cat Object
    Cat magel("Majel", 4);
    magel.makeSound();

    // Ref vs Pointers
    int a = 10;
    int &ref_a = a; // Ref to a
    int *ptr_a = &a; // Pointer to a

    std::cout << " a: " << a << ", ref_a: " << ref_a << " , *ptr_a: " << *ptr_a << "\n";

    ref_a = 20;  // Modify the ref
    std::cout << " a after ref_a_change : " << a << "\n";
    *ptr_a = 30; // mOdify the pointer
    std::cout << " a after ptr_a change : " << a << "\n";

    std::cout << "\n";

    // std::vector (Container )
    std::vector<int> numbers ;
    numbers.push_back(6);
    std::cout << "Element in Vector : \n";
    for(size_t i = 0; i <= numbers.size(); ++i) {
        std::cout << numbers[i] << "";
    }

    // std::map (assosiative Tables)
    std::map<std::string, std::string>  capitals;
    capitals["FRANCE"] = "Paris",
    capitals["Germany"] = "Berlin",
    capitals["Niger"]   = "Niamey";
    std::cout << "Capital of NIGER" << capitals["Niger"] << "\n";


    return 0;
}

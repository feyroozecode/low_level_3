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
        std::cout << name << "The cat is Born \n";
    }

    // Method
    void mewew(){
        std::cout<< name << "Say Mieew Miouw";
    }

    // DESTRCUTOR
    ~Cat(){
        std::cout << name << " The cat passed away \n";
    }
};


int main() {
    // Creating the Object
    Cat majel("Majel", 4);
    majel.mewew();

    // Ref vs Ppinters
    int a = 10;
    int &ref_a = a; // Ref to a
    int *ptr_a = &a; // Poiunter to a

    std::cout << " a: " << a << ", ref_a: " << ref_a << " , *ptr_a: " << *ptr_a << "\n";

    ref_a = 20;  // Mofife the ref
    std::cout << " a after ref_a_change" << a << "\n";
    *ptr_a = 30; // mOdify the pointer
    std::cout << " a after ptr_a change : " << a << "\n";

    std::cout << "\n";

    // std::vector (Conteneur dynamique)
    std::vector<int> numbers ;
    numbers.push_back(6);
    std::cout << "Element in Vector";
    for(int num = 0; num <= numbers.size(); num++) {
        std::cout << num << "";
    }

    // std::map (Assosiatif Tables)
    std::map<std::string, std::string>  capitals;
    capitals["FRANCE"] = "Paris",
    capitals["Germany"] = "Berin",
    capitals["Niger"]   = "Niamey";
    std::cout << "Caital fo NIGER" <<  "\n";


    return 0;
}

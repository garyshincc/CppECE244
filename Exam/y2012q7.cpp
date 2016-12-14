#include <iostream>
#include <string>
using namespace std;

class Animal{
        private:
                string name;
        public:
                Animal(string n);
                virtual ~Animal();
                void print();
};

Animal::Animal(string n){
        name = n;
        cout << name << " is an animal" << endl;
}
Animal::~Animal(){
        cout << "The " << name << " animal is gone" << endl;
}
void Animal::print(){
        cout << name << " is an animal" << endl;
}

class Mammal : public Animal{
        private:
                string m_name;
        public:
                Mammal(string n);
                virtual ~Mammal();
                void print();
};

Mammal::Mammal(string n) : Animal (n){
        m_name = n;
        cout << m_name << " is a mammal" << endl;
}
Mammal::~Mammal(){
        cout << "The " << m_name << " mammal is gone" << endl;
}
void Mammal::print(){
        cout << m_name << " is a mammal" << endl;
}

class Carnivore : public Mammal {
        private:
                string c_name;
        public:
                Carnivore (string n);
                virtual ~Carnivore();
                void print();
};


Carnivore::Carnivore(string n) : Mammal(n) {
        c_name = n;
        cout << c_name << " is a carnivore" << endl;
}
Carnivore::~Carnivore(){
        cout << "The " << c_name << " carnivore is gone" << endl;
}
void Carnivore::print(){
        cout << c_name << " is a carnivore" << endl;
}

int main() {
        Animal Cow("Cow");
        Mammal Camel("camel");
        Carnivore Tiger("Tiger");
        Animal * ap;
        Mammal * mp;
        mp = new Mammal("Cat");
	ap = mp;
        ap->print();
        delete ap;


        return 0;
}



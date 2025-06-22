#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;
    virtual void eat() = 0;
};

class Lion : public Animal {
public:
    void makeSound() override {
        cout << " Lion roars!" << endl;
    }

    void eat() override {
        cout << " Lion eats meat." << endl;
    }
};

class Elephant : public Animal {
public:
    void makeSound() override {
        cout << " Elephant trumpets!" << endl;
    }

    void eat() override {
        cout << " Elephant eats grass and leaves." << endl;
    }
};

class Parrot : public Animal {
public:
    void makeSound() override {
        cout << " Parrot says 'Hello!'" << endl;
    }

    void eat() override {
        cout << " Parrot eats seeds and fruits." << endl;
    }
};

int main() {
    Animal* zoo[3];

    zoo[0] = new Lion();
    zoo[1] = new Elephant();
    zoo[2] = new Parrot();

    for (int i = 0; i < 3; i++) {
        zoo[i]->makeSound();
        zoo[i]->eat();
        cout << "------------------\n";
    }

    for (int i = 0; i < 3; i++) {
        delete zoo[i];
    }

    return 0;
}

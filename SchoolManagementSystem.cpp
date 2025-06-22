#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    virtual void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int rollNumber;
    float marks;

    void showDetails() override {
        cout << " Student Details:" << endl;
        cout << "Name: " << name << ", Age: " << age
             << ", Roll No: " << rollNumber << ", Marks: " << marks << endl;
    }
};

class Teacher : public Person {
public:
    string subject;
    float salary;

    void showDetails() override {
        cout << " Teacher Details:" << endl;
        cout << "Name: " << name << ", Age: " << age
             << ", Subject: " << subject << ", Salary: " << salary << endl;
    }
};

int main() {
    Person* people[2];

    Student s;
    s.name = "Ali";
    s.age = 18;
    s.rollNumber = 101;
    s.marks = 88.5;

    Teacher t;
    t.name = "Ms. Sana";
    t.age = 35;
    t.subject = "Math";
    t.salary = 55000;

    people[0] = &s;
    people[1] = &t;

    for (int i = 0; i < 2; i++) {
        people[i]->showDetails();
        cout << "------------------\n";
    }

    return 0;
}

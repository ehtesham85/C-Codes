
#include<iostream>
using namespace std;

class Vehicle {
protected:
    int vehicleID;
    int model;
    float mileage;

public:
    static int count;
    Vehicle() {
        count++;
    }

    virtual void calculateEfficiency() = 0;

    static void showCount() {
        cout << "Total Vehicles: " << count << endl;
    }

    virtual ~Vehicle() {
        cout << "Vehicle destroyed\n";
        count--;
    }
};

int Vehicle::count = 0;

class Car : public Vehicle {
private:
    double fuelUsed;
    double distance;

public:
    Car() : fuelUsed(0), distance(0) {}
    Car(double f, double d) : fuelUsed(f), distance(d) {}

    double getFuelUsed() const { return fuelUsed; }

    void calculateEfficiency() override {
        if(fuelUsed > 0)
            cout << "Car Efficiency: " << distance / fuelUsed << " km/litre\n";
        else
            cout << "Fuel used must be > 0\n";
    }

    Car operator+(const Car& other) {
        return Car(fuelUsed + other.fuelUsed, distance + other.distance);
    }

    friend class Truck;

    ~Car() {
        cout << "Car destroyed\n";
    }
};

class Truck : public Vehicle {
private:
    double loadCapacity;
    string driverName;

public:
    Car helperCar;

    Truck(double l, string d) {
        loadCapacity = l;
        driverName = d;
    }

    void calculateEfficiency() override {
        cout << "Truck Load Capacity: " << loadCapacity << " tons\n";
    }

    ~Truck() {
        cout << "Truck destroyed\n";
    }
};

int main() {
    Vehicle::showCount();

    Vehicle* v1 = new Car(10, 100);
    Vehicle* v2 = new Truck(15, "John");

    v1->calculateEfficiency();
    v2->calculateEfficiency();

    Vehicle::showCount();

    Car c1(5, 50);
    Car c2(10, 150);
    Car c3 = c1 + c2;
    c3.calculateEfficiency();

    delete v1;
    delete v2;

    Vehicle::showCount();
}

//: C14:Car.cpp
// Public composition

#include <iostream>
class Engine{
public:
    void start() const {}
    void rev() const {}
    void stop() const {}
};

class Wheel{
public:
    void inflate(int psi) const {}
};

class Window{
public:
    void rollup() const {
        std::cout << "subio"<< std::endl;
    }
    void rolldown() const {}
};

class Door{
public:
    Window window;
    void open() const {}
    void close() const {}
};

class Car{
public:
    Engine engine;
    Wheel wheel[4];
    Door left, right; // 2-door
};

class Bocho  /* codigo para heredar de "Car" */ {
    private:
    int km;
    public:
    
    Bocho(int km){
        this->km=km;
    }
    int getKm(){
        return km;
    }
};

int main(){
    std::cout << "-----clase padre-----" << std::endl;
    Car car;
    car.left.window.rollup();
    car.wheel[0].inflate(72);

    std::cout << "-----clase hija-----" << std::endl;
    Bocho bocho(10);
    bocho.left.window.rollup();
    std::cout <<"El kilometraje del bocho es: "<<bocho.getKm() << std::endl;
} ///:~

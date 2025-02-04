#include<iostream>
using namespace std;

class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }

    virtual ~Shape() {
        // Virtual destructor to ensure proper cleanup
        cout << "Shape Destructor Called" << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }

    ~Circle() {
        cout << "Circle Destructor Called" << endl;
    }
};

// Derived class
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a Square" << endl;
    }

    ~Square() {
        cout << "Square Destructor Called" << endl;
    }
};

int main() {
    // Using base class pointer to store derived class object
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    // Calling the virtual function
    shape1->draw();  // Outputs: Drawing a Circle
    shape2->draw();  // Outputs: Drawing a Square

    // Cleaning up memory
    delete shape1;
    delete shape2;

    return 0;
}
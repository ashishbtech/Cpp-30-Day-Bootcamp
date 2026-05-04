#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string name;

public:
    Shape(string n) {
        name = n;
    }

    virtual void draw() = 0;
    
    virtual double getArea() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(string n, double r) : Shape(n) {
        radius = r;
    }

    void draw() override {
        cout << "Drawing a Circle: " << name << endl;
    }

    double getArea() override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(string n, double w, double h) : Shape(n) {
        width = w;
        height = h;
    }

    void draw() override {
        cout << "Drawing a Rectangle: " << name << endl;
    }

    double getArea() override {
        return width * height;
    }
};

int main() {
    Shape* s1 = new Circle("Arena", 10.5);
    Shape* s2 = new Rectangle("Battlefield", 100.0, 50.0);

    s1->draw();
    cout << "Area: " << s1->getArea() << "\n" << endl;

    s2->draw();
    cout << "Area: " << s2->getArea() << endl;

    delete s1;
    delete s2;

    return 0;
}
#include <iostream>
using namespace std;

class Shape
{
private:
    float area;
    float keliling;

public:
    virtual float calculateArea() { return 0; }
    virtual float calculateKeliling() { return 0; }
};

class Rectangle : public Shape
{
private:
    float width;
    float length;

public:
    Rectangle(float w, float l) : width(w), length(l) {}

    float calculateArea() override
    {
        return width * length;
    }

    float calculateKeliling() override
    {
        return 2 * (width + length);
    }
};

int main()
{
    Rectangle rect(5.0, 4.0);
    Shape *shape1 = &rect;

    cout << "Area: " << shape1->calculateArea() << endl;
    cout << "Keliling: " << shape1->calculateKeliling() << endl;

    return 0;
}

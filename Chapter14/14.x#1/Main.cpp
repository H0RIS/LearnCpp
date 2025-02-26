/*
Write a class named Point2d. 
Point2d should contain two member variables of type double: m_x, and m_y, both defaulted to 0.0.

Provide a constructor and a print() function.
*/

import std;


class Point2d
{
public:
    Point2d();
    Point2d(double x, double y);
    ~Point2d();
    void Print() const;

private:
    double m_x{ 0.0 };
    double m_y{ 0.0 };
};

Point2d::Point2d()
{
}

Point2d::Point2d(double x, double y)
    : m_x{x}
    , m_y{y}
{
}

Point2d::~Point2d()
{
}

void Point2d::Print() const
{
    std::cout << "Point2d(" << m_x << ", " << m_y << ")\n";
}

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.Print();
    second.Print();
    return 0;
}
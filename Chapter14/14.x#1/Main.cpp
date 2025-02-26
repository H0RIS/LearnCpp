/*
Write a class named Point2d. 
Point2d should contain two member variables of type double: m_x, and m_y, both defaulted to 0.0.

Provide a constructor and a print() function.

Now add a member function named distanceTo() that takes another Point2d as a parameter, 
and calculates the distance between them. Given two points (x1, y1) and (x2, y2), 
the distance between them can be calculated using the formula std::sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)).
*/

import std;


class Point2d
{
public:
    Point2d();
    Point2d(double x, double y);
    ~Point2d();
    void Print() const;
    double DistanceTo(Point2d p2) const;

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

double Point2d::DistanceTo(Point2d p2) const
{
    return std::sqrt((m_x - p2.m_x) * (m_x - p2.m_x) + (m_y - p2.m_y) * (m_y - p2.m_y));
}

int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.Print();
    second.Print();

    std::cout << "Distance between two points: " << first.DistanceTo(second) << '\n';

    return 0;
}
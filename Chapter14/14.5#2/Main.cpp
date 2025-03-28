/*
a) Write a class named Point3d. The class should contain:

Three private member variables of type int named m_x, m_y, and m_z;
A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>

b) Add a function named isEqual() to your Point3d class.
*/

import std;

class Point3d
{
public:
    void SetValues(int x, int y, int z)
    {
        m_x = x;
        m_y = y;
        m_z = z;
    }

    void Print() const
    {
        std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">\n";
    }

    bool IsEqual(Point3d& p) const
    {
        return (m_x == p.m_x) && (m_y == p.m_y) && (m_z == p.m_z);
    }

private:
    int m_x{};
    int m_y{};
    int m_z{};

};


int main()
{
    Point3d point;
    point.SetValues(1, 2, 3);

    point.Print();
    std::cout << '\n';

    Point3d point1{};
    point1.SetValues(1, 2, 3);

    Point3d point2{};
    point2.SetValues(1, 2, 3);

    std::cout << "point 1 and point 2 are" << (point1.IsEqual(point2) ? "" : " not") << " equal\n";

    Point3d point3{};
    point3.SetValues(3, 4, 5);

    std::cout << "point 1 and point 3 are" << (point1.IsEqual(point3) ? "" : " not") << " equal\n";

    return 0;
}
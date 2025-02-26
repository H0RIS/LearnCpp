/*
Write a class named Ball. B
all should have two private member variables, one to hold a color (default value: black), and one to hold a radius (default value: 10.0).
Add 4 constructors, one to handle each case below:
*/

import std;


class Ball
{
public:
    Ball();
    Ball(std::string_view color);
    Ball(double radius);
    Ball(std::string_view color, double radius);
    ~Ball();
    void Print() const;

private:
    std::string m_color{ "black" };
    double m_radius{ 10.0 };
};

Ball::Ball()
{
    Print();
}

Ball::Ball(std::string_view color)
    : m_color{color}
{
    Print();
}

Ball::Ball(double radius)
    : m_radius{radius}
{
    Print();
}

Ball::Ball(std::string_view color, double radius)
    : m_color{ color }
    , m_radius{ radius }
{
    Print();
}

Ball::~Ball()
{
}

void Ball::Print() const
{
    std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
}

int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}
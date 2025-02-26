/*
Reduce the number of constructors in the above program by using default arguments and delegating constructors.
*/

import std;

class Ball
{
public:
    Ball(double radius);
    Ball(std::string_view color, double radius);
    ~Ball();
    void Print() const;

private:
    std::string m_color{ "black" };
    double m_radius{ 10.0 };
};


Ball::Ball(double radius)
    : m_radius{ radius }
{
    Print();
}

Ball::Ball(std::string_view color = "black", double radius = 10.0)
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
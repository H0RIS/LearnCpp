/*
Write a class named Ball. 
Ball should have two private member variables, one to hold a color, and one to hold a radius.
Also write a function to print out the color and radius of the ball.
*/

import std;

class Ball
{
public:
    Ball(std::string color, double radius);
    ~Ball();
    const std::string& GetColor() const;
    double GetRadius() const;

private:
    std::string m_color{};
    double m_radius{};
};

Ball::Ball(std::string color, double radius)
    : m_color{ color }
    , m_radius{ radius }
{
}

Ball::~Ball()
{
}

const std::string& Ball::GetColor() const
{
    return m_color;
}

double Ball::GetRadius() const
{
    return m_radius;
}

void Print(Ball& ball)
{
    std::cout << "Ball(" << ball.GetColor() << ", " << ball.GetRadius() << ")\n";
}

int main()
{
    Ball blue{ "blue", 10.0 };
    Print(blue);

    Ball red{ "red", 12.0 };
    Print(red);

    return 0;
}
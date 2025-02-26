/*
Write a class template named Triad that has 3 private data members with independent type template parameters.
The class should have a constructor, access functions, and a print() member function that is defined outside the class.
*/

#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class Triad
{
public:
    Triad(const T& x, const U& y, const V& z)
        : m_x{ x }
        , m_y{ y }
        , m_z{ z }
    {
    }
    const T& GetX() const { return m_x; }
    const U& GetY() const { return m_y; }
    const V& GetZ() const { return m_z; }

    void Print() const;

private:
    T m_x{};
    U m_y{};
    V m_z{};
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::Print() const
{
    std::cout << '[' << m_x << ", " << m_y << ", " << m_z << ']';
}

int main()
{
    Triad<int, int, int> t1{ 1, 2, 3 };
    t1.Print();
    std::cout << '\n';
    std::cout << t1.GetX() << '\n';

    using namespace std::literals::string_literals;
    const Triad t2{ 1, 2.3, "Hello"s };
    t2.Print();
    std::cout << '\n';

    return 0;
}
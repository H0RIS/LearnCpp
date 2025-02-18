/*
Create a class template named Triad that has 3 members of the same template type. 
Also create a function template named print that can print a Triad.
*/
import std;

template <typename T>
struct Triad
{
    T x{};
    T y{};
    T z{};
};

template<typename T>
void print(Triad<T>& t)
{
    std::cout << "[" << t.x << ", " << t.y << ", " << t.z << "]\n";
}

int main()
{
    Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
    print(t1);

    Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
    print(t2);

    return 0;
}
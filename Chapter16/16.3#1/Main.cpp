//
// Initialize a std::vector with the following values: ‘h’, ‘e’, ‘l’, ‘l’, ‘o’.
// Then print the length of the array (use std::size()).
// Finally, print the value of the element with index 1 using the subscript operator and the at() member function.
//

import std;

int main()
{
    std::vector vec{ 'h', 'e', 'l', 'l', 'o' };

    std::cout << "std::size() of vector is: " << std::size(vec) << '\n';
    
    std::cout << vec[1] << '\n';
    std::cout << vec.at(1);
    std::cout << vec.at(2);

    return 0;
}
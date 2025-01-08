/*
* Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:
* A function named “readNumber” should be used to get (and return) a single integer from the user.
* A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
* A main() function should be used to glue the above functions together.
* 
* Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”.
* Use a forward declaration to access them from main().
* 
* Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the 
* functions instead of using forward declarations directly in your code (.cpp) files.
*/

import std;
#include "io.h"

int main()
{
    int num1{ ReadNumber() };
    int num2{ ReadNumber() };

    WriteAnswer(num1 + num2);

    return 0;
}

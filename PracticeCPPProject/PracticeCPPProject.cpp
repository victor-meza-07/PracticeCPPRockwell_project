// PracticeCPPProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
#include <sstream>


void PrintMessage(std::string message)
{
    //you may notice this method takes a paramter inside the parenthesis
    //this parameter comes from the "std" class that stands for "standard" as in the "standard" namespace of commonly used items.
    std::cout << "here is the messae you wrote: " + message + "\n";
}
void PrintMessageWithLine(std::string message) 
{
    std::cout << "Here is the full line message: " + message + "\n";
}
int GetNumber() 
{
    std::cout << "Please enter a number\n";
    std::string str;
    std::getline(std::cin, str);
    std::cout << "We will add 10 to " << str << "\n";
    //we have to #include <sstream> or string stream.
    std::stringstream stream(str); // open a stream and pass the string value
    std::int32_t number = 0; // make a number data type.
    stream >> number; // use  the >> operator so that it assigns the string value as a number.
    std::cout << "This is the number as a data type " << number <<"\n";
    return number;
}
void AddTwoNumbers(std::int32_t numberOne, std::int32_t numberTwo) 
{
    std::cout << numberOne << " + " << numberTwo << "\n";
    std::cout << "The result is: " << (numberOne + numberTwo) << "\n";
}





// the code below is the "main" function (the code will look for -> 'main' to know where it will begin).
// you will notice a few aspects let's break them down here
//
//      'int' -> this is the return type of the method, it simpy means that when the compiler runs this code it SHOULD be expecting a number back.
//
//      'main' -> this is the name of the function, it is how you will identify the method in different files...(though we will not call it elsewhere).
//                you may notice this method returns a number, this is because c++ (the language) talks to the hardware of the computer like the CPU, the CPU
//                is literally expecting a 1 or 0 to know if the method should be running.
//
//      '()' -> this is just a signal to the compiler that this is a 'method'
//
//      ' -> { <- & -> } <- ' the brackets represent the "scope" of the method, basically telling the compiler where the method starts and where it ends
//                            this bracket -> { opens the scope, & this bracker -> } closes the scope.
int main()
{
    //when you click the play button, you should see a "Hello World" message in the console.
    std::cout << "Hello World!\n";

    std::cout << "Now let's see what happend when we send a string we collect in the console to a new method to print it out.\n";
    std::cout << "please type a message\n"; // you may notice '\n' this is a line break so that the mesages start in a new line every time.
    std::string str;
    std::cin >> str;

    PrintMessage(str);


    std::cout << "you may notice that the only thing that was written to the window was the first word\n";
    std::cout << "let's try sending the same message to a different function\n";
    
    //in order to receive the whole line, engineers before us have made a method we can use, but first we must add a special thing to our file
    // you may notice that there is some text around line 4 '#include <iostream>  --> this is the input/output stream to the memory.
    // to get the entire line it looks like we have to #include <string> as well. 
    //uncomment (by removing the '//' near line 4).

    std::cout << "please enter a new message\n";
    std::cout << "\n";
    std::string str2;
    std::getline(std::cin, str2); // here we are using the 'getline' method and the 'in' stream to capture the line.
    PrintMessageWithLine(str2);


    //alternatively we can do some other stuff with methods
    //let's make a method that only prints a message and gets a number back. 
    // we will call this method "getnumber" you will find it above near line
    std::int32_t number = GetNumber();
    AddTwoNumbers(10, number);
}




// the first simple program

# include <iostream>
int main()

{
std::cout<<"This is a simple program in C++";
std::cout<<"to show the main structure."<<std::endl;
std::cout<<"We learn more about the language";
std::cout<<"in this chapter and the rest of the book";
return 0;

}

// C++ is case sensitive
// indentation improves readability

/*
Program analysis

Line:3 Preprocessor directive- a preprocessor directive is a command to the compiler to take some action before it compiles the program.
A C++ code needs some predefined lines of code that are not written by us. These lines of code are  very complex and sometimes access the hardware of the computer we 
are using. They are included in what we call header files. We don't need to write these lines; we simply copy the contents of these files into our code. To copy them we 
need to know the name of the file, iostream which stands for input/output stream in this case. To tell the compiler that we need to include the contents in the
file we have to have an include line. The include line starts with the symbol #. When a line in a program includes this symbol, it is an indication to the compiler
that something needs to be done before the program can be compiled. Before the compiler starts compiler starts compiling our code, it runs another program called
preprocessor, that checks all preprocessor commands (the include directive is one of them). The compiler does what is needed in the command and then removes the preprocessor
directive. After all preprocessor directives have been taken care of and are removed, the program is ready for compilation. Note that each preprocessing command need to
be in a single line by itself with the first nonblank, character, the symbol #. In the include directive, the name of the file must be enclosed in two pointed brackets
<> after the term include

Line:4 Funtion Header

A C++ program is normally made of a number of functions. A C++ program consists if one or more functions, but it must contain one function named main. The execution of
a C++ program starts with the main function and terminates when the main function is terminated.Each function has a header and a body. The header defines the name of the
function and what goes into the function(inside the parenthis) and what type of information comes out of the function, mentioned before the name int.
For our example the name is main and nothing is passed in as a parameter an integer will be returned from the function and given to the operationg system.

Line:6 and 13 Opening and closing bracket
They are needed to enclose the body of the function. It is a compliation error to have one and not the other.

Line:7 The first line of the Body
Most of the lined in the body of a function are commands that tell the computer what to do.In natural language a command(an imperative sentence) is made of a verb,
a direct object, an indirect object(target or recipient) and a terminator (normally a period).

In our case the Target is std :: cout
the verb is <<
the object is "This is a simple program in C++ "
the terminator ;

Line:11 The last line in the body of the function
return 0;
This line is still a command , but there is no explicit target object. The target object is implicit here. It is an entity in the C++ system  that is called the runner
The runner starts the main function running from the command in the body; the runner expects the function to return a value that shows if the program has been succesful 
or not. The return value defines  the success of failure. If the program reaches the last line in the function and returns 0, it means success.


Second Program

*/
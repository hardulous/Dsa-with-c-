#include <iostream>
using namespace std;

int main()
{

    // cout << "hello world" << endl ;           add an enter after hello world
    // cout << "hello world" ;                   no enter after hello world
    // cout<< "hello world" << "\n";             similar to endl add enter after hello world
    // cout << "hello world \n hello world";     again add enter after first hello world
    cout << "hello world";
    cout << "\n";

    int a = 4;
    char ch = 'a';
    bool istrue = 0;
    bool isfalse = false;
    float f = 1.3;
    double d = 1.23;

    cout << "a => " << a << endl;
    cout << "ch => " << ch << endl;
    cout << "istrue => " << istrue << endl;
    cout << "isfalse => " << isfalse << endl;
    cout << "opposite of isfalse => " << !isfalse << endl;
    cout << "f => " << f << endl;
    cout << "d => " << d << endl;
    cout << "size of a " << sizeof(a) << endl;
    cout << "size of istrue " << sizeof(istrue) << endl;
    cout << "size of f " << sizeof(f) << endl;
    cout << "size of d " << sizeof(d) << endl;

    a = 55;
    ch = 'b';
    cout << "new value of a => " << a << endl;
    cout << "new value of ch => " << ch << endl;

    unsigned int a1 = 123;
    unsigned int a2 = -123;
    cout << "unsigned a1 => " << a1 << endl;
    cout << "unsigned a2 => " << a2 << endl;

    int x = 10;   
    char y = 'a';

    x = x + y;          // y implicitly converted to int with ascii value of 97 as int > char 
    float z = x + 1.2;  // x is implicitly converted to float as float > int

    cout << "x = " << x << endl
         << "y = " << y << endl
         << "z = " << z << endl;

    double x1 = 1.2;

    int sum = (int)x1 + 1;  // Explicit conversion from double to int by cast operator (data type)variable
  
    cout << "Sum = " << sum<<endl;     

    int val = 2 / 5;                  // in maths it should be 0.4
    cout << "2/5 => " << val << endl; // but here show 0 because int data type store only mantisa part not decimal part as int/int also return int

    val = 2.0 / 5;
    cout << "2/5 => " << val << endl; // again 0 because even though float/int will return float that is 0.4 but int data type will only store mantisa part so 0 again

    float val1 = 2 / 5;
    cout << "2/5 => " << val1 << endl; // here again show 0 because again int/int will return only int value

    val1 = 2.0 / 5;
    cout << "2/5 => " << val1 << endl; // now return 0.4 because float/int will return float value
}

/* FIRST PROGRAM

1. In c++ the flow of program always start from main() function where { } of main() defined the scope of this function

2. In c++ the print functionality is inbuilt denoted by "cout<< text to print <<" and is provided by header file name iostream and without importing or including file in our program file we can not use cout else show error

3. Here c++ contain many namespaces , by writing "using namespace std" we are telling c++ that we want cout of std namespace

4. The << operator after cout is basically used to write the output to be displayed

5. Here the endl after last << operator means end line , it basically add an enter in our output and put cursor on the next line , instead of endl to add an enter we can also use "\n" , also we dont need to use << operator to use endl or \n we can also use with the output text

6. here inside main() function every line must end with semi-colon (;) else show error which denotes and tell compiler the end of the line

### NOTE::
when giving name to .cpp file never add space in name else when running the code it will show error no such file in a directory

*/

/* DATA TYPES & VARIABLES

In order to store anything in memory by c++ we first need to mention the type of the value and how much space it will take which is called "DATA TYPES" and name of memory address or container which store that value is called "VARIABLES"

EX,  int a = 5;  it means "a" is a variable which is of data type int and stores the value 5 , by declaring variable "a" type int we are telling compiler that 4 bytes or 32 bits of memory must be reserved for this variable "a" and store the value 5 in that memory in binary format

1. int data type in c++ is of 4 byte or 32 bits

2. char data type is of 1 byte or 8 bits which is used to store single character ex , char ch = 'a' or char ch = 'b' and must be in single inverted comma (' character ')

3. bool data type is of 1 bit which is used to denote 2 values either 1 (true) or 0 (false) , bool b = 1

4. float data type is of 4 bytes or 32 bits which is used to store single-precision floating-point values or decimal values that is after decimal only one value can reside , float f = 1.2

5. double data type is also of 8 bytes or 64 bits which is used to store double-precision floating-point values or decimal values that is after decimal 2 value can reside , double d = 1.23

### NOTE:: for more detail go to website "https://www.geeksforgeeks.org/cpp-data-types/"

6. In c++ once a variable is declared with a particular data type it can not be re-declared again else show error EX , int a = 123 and then if we do char a = 'v' then it will show error , But we can re assign new value to that declared value but that value must be of same data type EX , int a = 23 then a = 244

7. sizeOf() is a function which is used to find the number of bytes occupied by a variable/data type in computer memory.

*/

/* HOW DATA IS STORED IN MEMORY

int a = 8

1. here compiler know int is of 4 bytes so 4 byte of memory is allocated where __ __ __ __ each byte consist of 8 bits so total of 32 bits memory is allocated , now to store 8 in this memory first it is converted to binary format which is 1000 (4 bits) but we have 32 bits to fill in memory so last 4 bits will be filled with 1000 and rest will be filled with 0 that is 00000000 00000000 00000000 00001000

int a = 5

2. again 4 bytes is allocated in memory and 5 in binary format is 101 (3 bits) so last 3 bits is filled with 101 and rest with 0 that is 00000000 00000000 00000000 00000101

char ch = 'a'

3. here char is of 1 byte so 1 byte of memory is allocated __ and this byte represent 8 bits 00000000 , now to store character 'a' in memory we will look into ascii value of 'a' ( in c++ every char has some ascii or integer value associated with it ) , so ascii value of 'a' is 97 which is then coverted to binary format 01100001 and this value will be stored in memory

4. Now assume the case if we want to store 4 character equivalent to 4 byte which is equal to int which is also of 4 byte so how compiler will know what type of value is getting stored in memory either char or int because this 4 byte can be 4 character abcd or can be a integer 1523 , so the answer is with the help of data type used when declaring the variable

5. The negative no (-ve) are stored and represented in memory based on first bit also know as most significant bit , for +ve no the first bit will be 0 and for -ve no the first bit will be 1

EX , int a = -5  , in order to store in memory have to take some step ::

(a). Ignore the -ve sign on the number so assume no is 5
(b). Convert the no into binary format that is 5 in binary is 101 and rest bits are 0
(c). Now take 2's compliment of this binary no which is 1's complement of this no + 1 and 1's complement is just exchange of bits that is exchange 1 with 0 or vice-versa

So , 1's complement of 00000000 00000000 00000000 00000101 is 11111111 11111111 11111111 11111010 , now for 2's complement just add 1 so , 11111111 11111111 11111111 11111010 + 1 is [ 11111111 11111111 11111111 11111011 ] and this value is actualy stored in memory in case of -ve no

But in order to display or print the stored -ve no we follow some steps ::

(a). Take 2's compliment of stored -ve no in binary format , And we get to know wheter the no is -ve or not with the help of 1st bit of the stored no
(b). Now the value we get is the actual -ve no stored in memory but without the -ve sign

So, the stored -ve no (-5) is binary format is 11111111 11111111 11111111 11111011 , now take 1's complement first it will become 00000000 00000000 00000000 00000100 and now add 1 so it will become [ 00000000 00000000 00000000 00000101 ] , and this is the value used for printing the -ve no

6. The default value stored in int can be both +ve or -ve but if we want to strict value to be only +ve so we used data type called "unsigned int"

### NOTE :: Here int is of 4 byte that is 32 bits so range of value that can reside in memory is from 0 to 2 pow(32) - 1 , and char is of 1 byte that is 8 bits so range of value can be stored is from 0 to 2 pow(8) - 1

*/

/* TYPE CASTING / TYPE CONVERSION

Type casting refers to the conversion of one data type to another in a program. Typecasting can be done in two ways , automatically by the compiler and manually by the programmer or user. There are 2 type of type casting

(a). Automatic type conversion = It automatically convert one data type to another without any external intervention such as programmer or user. It means the compiler automatically converts one data type to another  , In a expression which consist of many data types all data type of variable is automatically upgraded to the largest data type of variable present in that expression without losing any information But , Implicit Type Casting should be done from low to higher data types. Otherwise, it affects the fundamental data type, which may lose precision or data, and the compiler might flash a warning to this effect.

Ex , char -> short int -> int -> unsigned int -> long int -> float -> double -> long double :

(b). Explicit Type Casting = It is manually done by the programmer to change from one data type to another type in a program. User can easily cast one data to another . It does not require checking the compatibility of the variables.
In this casting, we can upgrade or downgrade the data type of one variable to another . It uses the cast () operator to change the type of a variable.


*/

/* OPERATORS IN C++

Operators are operation to be formed on values and perform specific mathematical or logical computations. An operator operates on the operands Ex,

int c = a + b  Here , ‘+’ is the addition operator. ‘a’ and ‘b’ are the operands that are being ‘added’.

Operators are of type Arithmetic operator (+,-,\,*,%) , Relational operator (==,>,<,<=,>=) , Logical operator (&&,||,!) and Assignment operator (+=,*=,etc) and Trenary opeartor ( condition ? if true execute this : if false execute this )

### NOTE:: For more details go to website https://www.geeksforgeeks.org/operators-in-cpp/


*/
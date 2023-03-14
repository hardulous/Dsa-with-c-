#include <iostream>
using namespace std;

// global variable 
int global = 105;

int main()
{

    cout << "& And operator" << endl;
    cout << (2 & 3) << endl;
    cout << (5 & 7) << endl;

    cout << "Using & operator for odd/even check" << endl;
    (224 & 1) ? cout << "Odd" << endl : cout << "Even" << endl;
    (175 & 1) ? cout << "Odd" << endl : cout << "Even" << endl;

    cout << "| Or operator" << endl;
    cout << (2 | 4) << endl;
    cout << (3 | 6) << endl;

    cout << "~ Not operator" << endl;
    cout << (~2) << endl;
    cout << (~10) << endl;

    cout << "^ Xor operator" << endl;
    ;
    cout << (2 ^ 4) << endl;
    cout << (5 ^ 7) << endl;

    cout << "<< Left shift operator" << endl;
    cout << (17 << 1) << endl;
    cout << (19 << 2) << endl;

    cout << ">> Right shift operator" << endl;
    cout << (17 >> 1) << endl;
    cout << (19 >> 2) << endl;

    cout << "Post and Pre operator" << endl;

    int a = 10;
    cout << "a++ is " << a++ << endl; // value of a is used first then increment
    cout << "++a is " << ++a << endl; // value of a is first increment then used

    int b = 15;
    cout << "b-- is " << b-- << endl; // value of b is used first then decrement
    cout << "--b is " << --b << endl; // value of b is first decrement then used

    cout << "Output questions" << endl;

    a = 10, b = 1;
    if (++a)
    {
        cout << b << endl;
        ;
    }
    else
    {
        cout << ++b << endl;
        ;
    }

    a = 1, b = 2;
    if (a-- > 0 && ++b > 2)
    {
        cout << "Stage1 - Inside if" << endl;
        ;
    }
    else
    {
        cout << "Stage2 - Inside if" << endl;
        ;
    }
    cout << a << " " << b << endl;

    a = 1, b = 2;
    if (a-- > 0 || ++b > 2)
    {
        cout << "Stage1 - Inside if" << endl;
        ;
    }
    else
    {
        cout << "Stage2 - Inside if" << endl;
        ;
    }
    cout << a << " " << b << endl;

    for (int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }

    cout << endl;

    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if (i & 1) // note than inside if() , if non zero value then consider true as false if zero
        {
            continue;
        }
        i++;
    }

    cout<<endl<<"GLOBAL AND LOCAL VARIABLES"<<endl;

    int grbg;           // declared without intilization
    cout<<grbg<<endl;   // show any garbage value

    int v1 = 5 , v2 = 7;   // these local variables can be used anywhere within main() block {}

    cout<<"I am a global variable "<<global<<endl;  // global variable can be used anywhere in the program

    if(true){
      int v3 = 10;     // v2 is local variable of this block {}
      int v2 = 17;     // this v2 is different from v2 of main() block { }

      cout<<"v1 "<<v1<<endl;;  // v1 is already defined in the main {} in which this if is present so can use it
      cout<<"v2 "<<v2<<endl;  // v2 of if block {} will be used not of main {}

      cout<<"I am a global variable "<<global<<endl; 
    }

    // cout<<"v3"<<v3<<endl;;   show error as v3 is not defined in main() block { }
    // int v1 = 20;            show error as similar name local variable in a single block can't be present as v1 is already defined

    int v4 = 2;
    for(int v4=1;v4<=5;v4++){    // here this for loop v4 is different from v4 defined above  
        cout<<"Hi ";
    }
    cout<<endl;
    for( ; v4<=5 ; v4++ ){    // here as this for loop does not have it's own v4 so will use main() { } v4   
        cout<<"Hi ";
    }
    cout<<endl;
    
    cout<<(2/10)<<endl; // gives 0

    cout<<"Question 1"<<endl;

    int number1 , sum=0 , product=1 ;
    cin>>number1;
    
    for( int i=number1; i>0 ; i/=10 ){  // here / by 10 will give quotent and number after removing last digit

        int r = i%10;    // this will give remainder or last digit of number
        product*=r;   
        sum+=r; 

    }
    cout<<"Difference of sum and product "<<sum<<" "<<product<<" is => "<<product-sum<<endl;

    cout<<"Question 2"<<endl;
    
    uint32_t number2;  // uint32_t is an unsigned integer which is guaranteed to be exactly 4 bytes in size.
    cin>>number2;     
    int count = 0;

    while(number2!=0){   // even though number is used in integer format but operation will be performed in binary digit level
        if(number2&1){   // if come inside means 1 bit is present at 0th position because & with 1 will give non zero value or true
            count+=1;
        }
        number2>>=1;     // now update the 0th position of binary number by shifting all digits to right
    }

    cout<<"Number of 1 bits in "<<number2<<" => "<<count;



}

/* BITWISE OPERATOR IN C++

Bitwise operators are the operators that work or operate at BIT-LEVEL , that is in order to perform operation  first convert the operand to bit format ( 0 and 1 ) and then perform the operation , There are 6 type of bitwise operators ::

1. & (bitwise AND) => It takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1 else 0 , EX ::  if a = 2/5 , b = 3/7  so a&b :

  a =>  1 0                                     a =>  1 0 1
  b =>  1 1                                     b =>  1 1 1
  & =>  1 0  => which is equal to 2             & =>  1 0 1  => which is equal to 5

    (a). The & operator can be used to quickly check if a number is odd or even. Just find the & of no with 1 that is ( no&1 ) if it is non-zero the no is odd , otherwise the value would be zero for no to be even

    (b). The bitwise operators should not be used in place of logical operators. The result of logical operators (&&, || and !) is either 0 or 1, but bitwise operators return an integer value. Also, the logical operators consider any non-zero operand as 1

2. The | (bitwise OR) => It takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1 or 0 only if both bits are 0 , EX :: if a = 2 , b = 4 so a|b :

  a => 0 1 0
  b => 1 0 0
  | => 1 1 0  => which is equal to 6

3. The ^ (bitwise XOR) => It takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different or 0 if both bits are same like 0:0 and 1:1 , EX :: if a = 2/5 , b = 4/7 so a^b

  a => 0 1 0                                 a => 1 0 1
  b => 1 0 0                                 b => 1 1 1
  ^ => 1 1 0  => which is equal to 6         ^ => 0 1 0  => which is equal to 2

4. The ~ (bitwise NOT) => It takes one number and inverts all bits of it that is if 0 then invert to 1 or vice versa , EX :: if a = 2

 a => 1 0
~a => 0 1  =>  here but we know a int is represented in 32 bit format and the 2 is represented in format of , 00000000 00000000 00000000 00000010 , now if we do ~a so it will become 11111111 11111111 11111111 11111101 and this will be stored in memory as ~a , now when print ~a , as ~a contain first bit as 1 means -ve no and we know to print -ve we takes 2's compliment of stored number so after 2's compliment the no will become , 00000000 00000000 00000000 00000011 which is equal to 3 , so ~a or ~2 is -3

5. The << (left shift) => It takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift that is if we have a << b it means left shift the bit of operand a by b times. EX ::

5 << 1 where 5 is 00000000 00000000 00000000 00000101 left shit by 1 it become , 00000000 00000000 00000000 00001010 which is equal to 10 , Or we can say that 5 << 1 is 5 * 2 which is 10

3 << 2 where 3 is 00000000 00000000 00000000 00000011 left shift by 2 it become 00000000 00000000 00000000 00001100 which is equal to 12. Or we can say that 3 << 2 is 3 * 2 * 2 which is 12

    (a). Here in left shift operator note that if numbers are small then we can do multiple by 2 that is if a << b then we can multiple a by 2 with total of b times. But if number are very large that is assume we have binary format of a very big number : 01110000 ____ _____ _____ and left shift by 1 will make the no 11100000 ___ ___ ___ , now as we can see the left most bit is 1 means the no is become -ve

6. The >> (right shift) => It takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift that is if we have a >> b it means right shift the bit of operand a by b times. EX ::

15 >> 1 where 15 is 00000000 00000000 00000000 00001111 right shift by 1 it become , 00000000 00000000 00000000 00000111 which is equal to 7. Or we can say that 15 << 1 is 15/2 which is 7

5 >> 2 where 5 is 00000000 00000000 00000000 00000101 right shift by 2 it become , 00000000 00000000 00000000 00000001 which is equal to 1. Or we can say that 5 >> 2 is 5/2/2 which is 1

### NOTE ::: When performing either left shift or right shift with +ve no then padding will be done with 0 it means that in place of the bits which are shifted either by left or right shift 0 will come in those vacant space. But in case of -ve no padding depends on compiler

For more details go to webiste "https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/"

*/

/* POST AND PRE OPERATOR

These operators operate or work with a single operand. For example: Increment(++) and Decrement(–-) Operators both increment and decrement the value by 1 respectively . IF we have operand a so, ++a and a++, both are increment operators, however, both are slightly different.

In ++a, the value of the variable is incremented first and then It is used in the program. In a++, the previous value of the variable is used first and then It is incremented or we can say that previous value of a is used first and only when statement or line which contain a++ is executed and flow go to next line then increment by 1 take place . Similarly happens for the decrement operator that is a-- and --a.

### NOTE:: When using logical operator && and || keep in mind that if we have expression ::

if ( condition1 && condition2 ){

}

here above in case of && both condition1 and condition2 expression will be executed and need to be true to go inside loop but if condition1 is false then condition2 expression automatically does not execute because compiler know that for && both condition need to be true and if 1st one is false then no need to check for other condition

if ( condition1 || condition2 ){

}

here above in case of || if any of condition1 or condition2 is true then go inside the loop But if condition1 is true then compiler will not execute the condition2 expression because it know that in case of || if any of condition is true then result is true then no need to check for other condition , But if condition1 is false then compiler will have to execute condition2 expression as well

*/

/* VARIABLES SCOPPING

In general, the scope is defined as the extent up to which something can be worked with. In programming also the scope of a variable is defined as the extent of the program code within which the variable can be accessed or declared or worked with. There are mainly two types of variable scopes:

(1). Global Variables => As the name suggests, Global Variables can be accessed from any part of the program. They are available through out the life time of a program. They are declared at the top of the program outside all of the functions or blocks. Global variables are usually declared outside of all of the functions and blocks, at the top of the program. They can be accessed from any portion of the program.

(2). Local Variables => Variables defined within a function or block are said to be local to those functions.   Anything between ‘{‘ and ‘}’ is said to be inside a block. Local variables are always declared inside a block. Local variables do not exist outside the block in which they are declared, i.e. they can not be accessed or used outside that block. Within a single block similar name local variable can not be created else show error but local variable of different block can have same name


### NOTE:: The default value of a declared variable if not intilized by user is always given by compiler which is called "GARBAGE VALUE" , EX ::

  int a;
  cout<<a;  => can give any garbage integer value


*/

/* QUESTIONS 

1. Substract the product and sum of digits of an integer 

n = 234 , Output = 15 

as product = 2*3*4 = 24 
   sum = 2+3+4 = 9        and 24 - 9 => 15 

2. Write a code that takes an unsigned integer and returns the number of '1' (set-bit) it has (also know as the hamming weight)

n = 00000000000000000000000000001011 , Output = 3 

as the input binary string has a total of three '1' bits

*/
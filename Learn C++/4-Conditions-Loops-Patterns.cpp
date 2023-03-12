#include <iostream>
using namespace std;

int main()
{

  int n; // allocate 4 byte of memory with some default garbage value
  cout << "Provide some value to n" << endl;
  cin >> n;                                  // take user input to be stored in variable n
  cout << "The value of n => " << n << endl; // execute after some value is provided to n

  char ch;
  cout << "Enter the character" << endl;
  cin >> ch;
  cout << "The character is => " << ch << endl;

  int a;
  cout << "Enter a" << endl;
  cin >> a;

  if (a < 0)
  {
    cout << "A is negative" << endl;
  }
  else
  {
    cout << "A is positive" << endl;
  }

  int c, b;
  cout << "Enter The Value of B and C" << endl;
  cin >> b >> c;

  c > b ? cout << "C is greater\n" : c == b ? cout << "C is equal to B\n"
                                            : cout << "B is greater\n"; // nested trenary operator similar to if , else if and last else

  cout << "Enter a special character" << endl;
  int x = cin.get();
  cout << "The special character enter ascii value is => " << x << endl;

  // check if val is uppercase , lowercase or numeric character
  char val;
  cout << "Enter Value" << endl;
  cin >> val;

  if ((int)val >= 97 && (int)val <= 122)
  {
    cout << "Val is Lowercase" << endl;
  }
  else if ((int)val >= 65 && (int)val <= 90)
  {
    cout << "Val is Uppercase" << endl;
  }
  else if ((int)val >= 48 && (int)val <= 57)
  {
    cout << "Val is Numeric" << endl;
  }

  cout << "LOOPS IN C++" << endl;

  int l1;
  cin >> l1;
  int i = 1;

  while (i <= l1)
  {                    // first check condition
    cout << i << "\t"; // execute body
    i++;               // update the value then repeat
  }

  cout << endl;
  cout << "Check if no is prime or not" << endl;
  cin >> l1;
  i = 2;

  while (i < l1)
  {
    if (l1 % i == 0)
    {
      cout<<l1<<" Is Not A Prime No"<< endl;
      break; 
    }
    else if(i==l1-1){  // it means i have checked the last no can't divide l1 and hence it is a prime no 
      cout<<l1<<" Is A Prime No"<<endl;
    }
    i++;
  }

  for (int i = 1; i <= 5; i++)
  {
    cout << "Hello World\t";
  }

  cout<<endl;
  
  // here in 1st expression of for loop multiple variable can be declare but they must be of same type 
  for (int i = 0, j = 10, k = 20; (i + j + k) < 100;
       j++, k--, i += k)
  {
    cout << i << " " << j << " " << k << "\n";
  }

  i = 2;

  do
  {

    cout<<"Hello World\t";
    i++;
  } while (i<0);   // here even if condition is false still do while loop execute at least one time

  cout<<"Variation with for loop"<<endl;
  
  i=1;
  for(;;){
     if(i<=10){
      cout<<i;
     }
     else{
      cout<<endl;
      break;  // when executed the flow will come out of this loop 
     }
     i++;
  }

  cout<<"Fibonacci series"<<endl;

  int num1=0 , num2=1 , nextTerm , terms;
  cin>>terms;
  cout<<num1<<" "<<num2<<" ";

  for(int i=3;i<=terms;i++){
      nextTerm = num1+num2;
      cout<<nextTerm<<" ";
      num1=num2;
      num2=nextTerm;
  }
 
  cout<<endl<<"Sum of first 10 even no"<<endl;
  int sum=0;

  for(int i=1;i<=10;i++){
     if(i%2==0){
        sum+=i;
     }
     else{
      continue;         // if executed skip the rest of the iteration
     }
     cout<<i<<" ";      // print only when i is an even no
  }
  cout<<endl<<sum<<endl;

}

/* CONDITIONALS

It means executing a expression or part of code which will get executed only if a particular condition is satisfied and if not then it will not get executed , In c++ conditionals is denoted by if else statement , Where if contain the condition which need to be true to go inside if block and else block will be executed only if condition inside if evaluate to false. With if else we can also use else if which also contain some condition but will be executed only if the above else if or if evaluate to false Ex,

if(condition 1){
    // execute if condition 1 is true
}
else if(condition 2){
    // execute if 1st if is false and condition 2 is true
}
else{
    // execute if both above if and else if is false
}

If a program contain multiple if than all if conditions are checked one by one but else if condition will be checked only if the if condition is false

### NOTE:: We know cout is used to display some output but to take some input from user we use cin which also come from iostream header file and whenever compiler encounter the cin line in code the flow of program halts or stops unill we provide some value using cin to a variable , here cin dont read space , enter , tab special character but to read this character as user input as well we use cin.get()

For Ascii value from a to z range is ( 97 to 122 ) and from A to Z ( 65 to 90 ) and from 0 to 9 ( 48 to 57 )

*/

/* LOOPS IN C++

It means executing a expression or code again and again as long as condition is satisfied. Types oc loops in c++ :

1. while loop – First checks the condition, then executes the body and repeat.
2. for loop – firstly initializes, then check condition , then execute body, then update and repeat.
3. do-while loop – firstly, execute the body then check condition and then repeat

For more details go to website "https://www.geeksforgeeks.org/cpp-loops/"

### NOTE :: In for loops ::

for (initialization expr; test expr; update expr)
{
  // body of the loop
  // statements we want to execute
}

(a). Initialization statement: This statement gets executed only once, at the beginning of the for loop. You can enter a declaration of multiple variables of one type, such as int x=0, a=1, b=2. These variables are only valid in the scope of the loop. Variable defined before the loop with the same name are hidden during execution of the loop.

(b). Condition: This statement gets evaluated ahead of each execution of the loop body, and abort the execution if the given condition get false.

(c). Iteration execution: This statement gets executed after the loop body, ahead of the next condition evaluated, unless the for loop is aborted in the body (by break, goto, return or an exception being thrown.)

(d). The main difference between a do-while loop and the while loop or for loop is in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops. In a do-while loop, the loop body will execute at least once irrespective of the test condition.

### NOTE:: Here in for loop it is not mandatory to have intilization , condition and update expression need to be there , we can have intilization inside or outside for loop as well and both condition and update expression can be inside loop body as well , we can also have for loop like this ::

for( ; ; ){

  // Infinite loop because once flow come inside this loop as it contain no condition check so flow can not go out of this loop 

}

*/

/* LOOPS RELATED KEYWORDS

(1). Break => In order to go out of loop we need condition statement in every loop but without condition statement we have keyword called "break" which will get the flow out of current loop

(2). Continue => In a loop a task is repeated for n iteraion but if we want to skips the rest of the loop statement based on some condition and starts the next iteration of the loop we use "continue keyword".

*/

/*  FIBONACCI SERIES

It is a series of number formed in a way where next number is sum of previous 2 number start from 0 and 1 ::

0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 .....

*/
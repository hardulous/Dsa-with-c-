#include<iostream>
#include<math.h>
using namespace std;

int main(){
  
  cout<<"Decimal To Binary 1st way"<<endl;
  int n1 , answer=0 , i=0;
  cin>>n1;
  
  while(n1!=0){
    int r = n1%2;
    answer+= (pow(10,i)+0.000000001)*r ;  // reason why adding check out below note 
    n1/=2;
    i++;
  }
  cout<<answer<<endl;
  
  cout<<"Decimal To Binary 2nd way"<<endl;
  cin>>n1;
  answer=0 , i=0;

  while(n1!=0){
    
    int bit = n1&1;  // return 1 if 0th place contain 1 bit else return 0   
    answer+=(pow(10,i)+0.000000001)*bit;
    
    n1>>=1;   // now update the 0th place bit by right shifting all bit
    i++;
  }

  cout<<answer<<endl;

  cout<<"Negative Decimal To Binary"<<endl;
  cin>>n1;

  cout<<"Binary To Decimal"<<endl;
  cin>>n1;
  answer=0 , i=0;

  while(n1!=0){
    int r = n1%10;
    answer+= (pow(2,i)+0.000000001)*r;
    n1/=10;
    i++;
  }

  cout<<answer<<endl;
  
}

/* BINARY AND DECIMAL NUMBER SYSTEM

In real life in order to represent number in different we have number system , similarly in computer we have different kinds of number systems based on different properties, such as a binary number system, an octal number system, a decimal number system, and a hexadecimal number system. We can convert a number from any number system into any of the other three number systems.

(1). Decimal => The number system that represents a number in terms of 0 to 9 digits is a decimal number system. A decimal number system has ten digits, i.e., 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9. The base of a number in this system is 10. In the decimal number system, a number is expressed in terms of powers of 10 . For binary number 1011 can be expressed in decimal (11)10 where based is 10 is ::

n =         1 0 1 1
pow of 2 =  3 2 1 0   so , pow(2,3)*1 + pow(2,2)*0 + pow(2,1)*1 + pow(2,0)*1 which is 8 + 4*0 + 2 + 1 => 11 in decimal 

(2). Binary =>  A number system that expresses a number in terms of 0 and 1 digits is a binary number system. A binary system has only two digits, i.e., 0 and 1. The base of a number in this system is 2. In a binary number system, a number is expressed in terms of powers of 2.  For example, a decimal number 26 is expressed as (11010)2 in a binary system where 2 is the base ::

n => 26 to convert in binary first divide this number by 2 unless n!=0 then just reverse the order of remainder we get when dividing the number and quotents that we get on dividing.


### NOTE :: Because of integer truncation. pow() returns a floating point or double value, and due to floating point arithmetic, it is probably ~ 99.999...; however, due to integer truncation, even 99.999... gets truncated down to 99. So in order to solve the problem either store the value comes from pow() in float or double variable or just add 0.000000001 to every pow(10,n) statement , as adding 0.000...1 to pow if it is 9.999999 then adding 0.000....1 will make it in multiple of 10 but if pow already give in multiple of 10 then adding 0.00...1 to 10 will still return 10 as it is getting stored in int which store only mantisa part 

(a). Assume from single number 1,2,3 we need to create whole 123 number so ::

ans = (ans*10) + digit so,

(0*10) + 1 => 1
(1*10) + 2 => 12
(12*10) + 3 => 123 

(b). Assume from single number 1,2,3 we need to create a whole reverse number 321 so ::

ans = pow(10,i) * digit + ans  [ where i start from 0 and increment till number is 0 ]

pow(10,0) * 1 + 0 => 1
pow(10,1) * 2 + 1 => 21
pow(10,2) * 3 + 21 => 321


*/
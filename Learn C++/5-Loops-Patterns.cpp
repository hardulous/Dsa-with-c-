#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Pattern Question" << endl;
    cin >> n;

    int i = 1;

    // 1
    while (i <= n * n)
    {
        if (i % n == 0)
        {
            cout << "*" << endl;
        }
        else
        {
            cout << "*";
        }
        i++;
    }

    cin >> n;
    i = 1;

    // 2
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }

    cin >> n;

    // 3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    cin >> n;
    i = 1;
    int count = 1;

    // 4
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << "\t";
            count += 1;
            j++;
        }
        cout << endl;
        i++;
    }

    cin >> n;

    // 5
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cin>>n;

    // 6
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
 
    cin>>n;
    i=1;
    count=1;

    // 7
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            count+=1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    cin>>n;

    // 8
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i+j-1;
        }
        cout<<endl;
    }
    
    cin>>n;

    // 9
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i-j+1;
        }
        cout<<endl;
    }

    cin>>n;

    // 10
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(65+i-1);   // have to explicit type cast to char which is lower than int 
        }
        cout<<endl;
    }

    cin>>n;
    i=1;

    // 11
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)(65+j-1);
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

    cin>>n;
    count=1;
    // 12
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           cout<<(char)(65+count-1);
           count+=1;
        }
        cout<<endl;
    }

    cin>>n;

    // 13
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<(char)(65+i+j-2);
        }
        cout<<endl;
    }

    cin>>n;

    // 14
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(65+i-1);
        }
        cout<<endl;
    }

    cin>>n;
    count=1;

    // 15
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(65+count-1);
            count+=1;
        }
        cout<<endl;
    }

    cin>>n;

    // 16
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(65+i+j-2);
        }
        cout<<endl;
    }

    cin>>n;

    // 17
    for(int i=1;i<=n;i++){
        char start = 'A' + n - i;
        for(int j=1;j<=i;j++){
            cout<<start;
            start+=1;
        }
        cout<<endl;
    }

    cin>>n;

    // 18.
    for(int i=1;i<=n;i++){
       
        for(int j=i;j<n;j++){
            cout<<" ";   
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cin>>n;

    // 19.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    // 20.
    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    cin>>n;

    // 21.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=i;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }

    cin>>n;
    
    // 22.
    for(int i=1;i<=n;i++){
        
        int nos = ((n*2)-1)-((2*i)-1);  // for space
        int non = (2*i)-1;              // for number in between the spaces
        int count = i-1;                // for decrease no pattern

        for(int j=1;j<=nos/2;j++){
           cout<<" ";
        }
        for(int j=1;j<=non;j++){
           if(j<=i){
            cout<<j;
           }
           else{
            cout<<count--;
           }
        }
        cout<<endl;

    }

}

/* PATTERNS QUESTION IN LOOPS

1.  ****
    ****    without using nested loop
    ****
    ****

2.  111    1111
    222    2222
    333    3333
           4444

3.  123    1234
    123    1234
    123    1234
    123    1234

4.  123    1234
    456    56789
    789    9101112
           13141516

5.  *      *
    **     **
    ***    ***
           ****

6.  1      1   
    22     22
    333    333
           4444

7.  1      1
    23     23
    456    456
           78910

8.  1      1
    23     23
    345    345        
           4567

9.  1      1
    21     21
    321    321
           4321

10. AAA    AAAA
    BBB    BBBB
    CCC    CCCC
           DDDD    

11. ABC    ABCD
    ABC    ABCD
    ABC    ABCD       
           ABCD

12. ABC    ABCD
    DEF    EFGH
    GHI    IJKL
           MNOP

13. ABC    ABCD
    BCD    BCDE
    CDE    CDEF       
           DEFG

14. A      A
    BB     BB
    CCC    CCC        
           DDDD

15. A      A
    BC     BC
    DEF    DEF
           GHIJ

16. A      A
    BC     BC
    CDE    CDE
           DEFG

17. D      D
    CD     CD       sometime if cant figure the formula to solve , so just try to find the starting character of 
    BCD    BCD      each row and then just increment taking place. 
           ABCD

18.   *       *             
     **      **     sometime in order to solve pattern we need to use two loop as well one for spaces and one for
    ***     ***     stars
           ****

19. ***    ****   
     **     ***
      *      **
              *

20.   1       1
     22      22
    333     333
           4444

21. 1234   1234
     234    234
      34     34
              4    

22.   1        1        
     121      121     try to solve without breaking pattern into multiple sub triangle-
    12321    12321
            1234321

*/
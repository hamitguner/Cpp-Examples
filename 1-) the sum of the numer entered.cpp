#include <iostream>
#include <string>
using namespace std;

// the program that adds up the digit values of the entered number

int main()
{
    int number = 0,sum=0,length,temp = 1,temp1 = 10,result=0;

    cout << "Enter a number : ";
    cin >> number;
    length  =  to_string(number).length(); // integer to string for number length.

    cout <<endl<<"Lenth of this number is : " << length <<endl;

    for (int i = 0; i < length; i++)
    {
        
        result = (number%temp1) / temp ; // We will found each number in for loop.
        temp = temp*10;
        temp1 = temp1 *10;
        sum += result;
        
    }

    cout <<"Total of this number is : " << sum;
    return 0;
}
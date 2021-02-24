#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// the program that adds up the digit values of the entered number

int main()
{
    int number = 0,sum=0,length,result=0;

    cout << "Enter a number : ";
    cin >> number;
    length  =  to_string(number).length(); // integer to string for number length.

    cout <<endl<<"Lenth of this number is : " << length <<endl;

    for (int i = 1; i < length+1; i++)
    {
        
        result = (number%(int) pow(10,i) / pow(10,i-1) ); // We will found each number in for loop.
        sum += result;
        
    }

    cout <<"Total of this number is : " << sum;
    return 0;
}

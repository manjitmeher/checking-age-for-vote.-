#include<iostream>
using namespace std;

int main()
{
    int age,i;
    cout << "Checking whether you can vote or not.\n";
    cout <<"Enter your age: ";
    cin >>age;
    if(age<18)
    {
        cout <<"You are not eligible to vote. \n";
        cout <<"You will be eligible to vote after "<<18-age<<" years.";
    }
    else
    {
    cout <<"You can vote now. ";
    }
    return 0;
}
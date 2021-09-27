#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter age of voter:";
    cin>>age;

    if(age<18)
    {
        cout<<"\n Your not eligible for Voting";
    }
    else
    {
        cout<<"\n you are eliglible for voting";
    }
    return 0;    
}

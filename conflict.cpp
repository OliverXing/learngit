#include <iostream>
 
using namespace std;

void sayHello()
{
    cout << "hello everybody, welcome to the git's world!";
}

void conflict(){}

void conflict2()
{
	cout << "this is another func" << endl;
}

void glass()
{
	cout << "this is another func" << endl;
}

int main()
{
    sayHello();
    return 0;
}

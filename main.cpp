#include <iostream>
#include <calc.h>


void hello(){
	std::cout << "hello everybody!" << std::endl;
}

int main()
{
	int a = 0, b = 0, res = 0;
	char op;
	std::cout << "请输入整数四则运算式子："<< std::endl;
	std::cin >> a >> op >> b;
	res = add(a, b);
	std::cout << res <<std::endl;
	std::cin.get();
	return 0;
}

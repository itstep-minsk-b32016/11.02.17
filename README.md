# 11.02.17
#include <iostream>
#include <ctime>
#include <cstdlib>
//using namespace std;

int main(int argc, char* argv[])
{
	srand(time(0));
	std::cout << rand() << std::endl;
	
	char input[255];
	std::cin >> input;

	int len = 0;
	while (input [len] !='\0')
	{
		len++;
	}
	int len2 = strlen(input);
	//input[3] = '\0';

	for (int  i = 0; i < len2 / 2; i++)
	{
		char tmp = input[i];
		input[i] = input[len2 - i + 1];
		input[len2 - i - 1] = tmp;
	}
	std::cout << input << std::endl;
	std::cout << "length of string is:" << len << std::endl;
	std::cout << "return len:" << len2 << std::endl;
	for (int i = 0; i < 255; i++)
		std::cout << input[i];
		std::cout << std::endl;
	return 0;	
}

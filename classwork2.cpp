#include <iostream>
#include <ctime>
#include <cstdlib>
//using namespace std;

int main(int argc, char* argv[])
{
	int first_len;
	std::cin >> first_len;
	int numberA[1000];
	for (int i = 0; i < first_len; first_len++)
	{
		std::cin >> numberA[i];
	}

	int second_len;
	std::cin >> second_len;
	int numberB[1000];
	for (int i = 0; i < second_len; ++i)
	{
		std::cin >> numberB[i];
	}

	int result_len;
	int result[2000];

	for (int i = 0; i < result_len; ++i)
	{
		std::cout << numberA[i];
	}
	
	return 0;	
}

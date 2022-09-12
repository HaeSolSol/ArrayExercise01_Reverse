#include <iostream>

int main()
{
	char input[255]{}, output[255]{};

	std::cout << "input : ";
	std::cin >> input;

	for (int i = 254; i >= 0; --i)
	{
		if (input[i] != '\0')
		{
			for (int j = 0; j <= i; ++j)
			{
				output[j] = input[i - j];
			}
			break;
		}
	}

	std::cout << "output : " << output << std::endl;
}
#include <iostream>
#include <string>

void printColor(int color);

int main()
{
	for (int row = 0; row < 32; row++)
	{
		for (int col = 0; col < 32; col++)
		{
			printColor(new_piskel_data[0][(row * 32) + col]);
		}
		std::cout << "\n";
	}
}

void printColor(int color)
{
	std::string ansiColor = "\033[38;2;";

	int red = color & 0xFF;
	int green = (color >> 8) & 0xFF;
	int blue = (color >> 16) & 0xFF;

	ansiColor += std::to_string(red);
	ansiColor += ";";
	ansiColor += std::to_string(green);
	ansiColor += ";";
	ansiColor += std::to_string(blue);
	ansiColor += "m";

	std::cout << ansiColor << "███\033[0m";
}

#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
	string category;
	const int dataSize = 45;
	vector < string > arr; //random word from Dim2d
	string word, gWord;
	string element;
	int catCounter = 0;
	char symb;
	int flag = 0;
	int flag2 = 0;
	int att = 0;
	srand(time(NULL));

	string Dim2d[dataSize][2] = {
	{ "1","lion" },
	{ "1","rabbit" },
	{ "1","panther" },
	{ "1","tiger" },
	{ "1","elephant" },
	{ "1","wolf" },
	{ "1","cat" },
	{ "1","dog"} ,
	{ "1","dolphine" },
	{ "1","hamster" },
	{ "1","whale" },
	{ "1","monkey" },
	{ "1","deer" },
	{ "1","bear" },
	{ "1","fox" },

	{ "2","terminator" },
	{ "2","avengers" },
	{ "2","uncharted" },
	{ "2","black widow" },
	{ "2","venom" },
	{ "2","jurassic world" },
	{ "2","sonic" },
	{ "2","interstellar" },
	{ "2","batman" },
	{ "2","fast and furios" },
	{ "2","superman" },
	{ "2","the maze runner" },
	{ "2","transformers" },
	{ "2","james bond" },
	{ "2","doctor strange" },

	{ "3","bmv" },
	{ "3","mercedes" },
	{ "3","lamborghini" },
	{ "3","ferrari" },
	{ "3","kia" },
	{ "3","ford" },
	{ "3","chevrolet" },
	{ "3","renault" },
	{ "3","peugeot" },
	{ "3","bentley" },
	{ "3","toyota" },
	{ "3","koenigsegg" },
	{ "3","fiat" },
	{ "3","volkswagen" },
	{ "3","dacia" },
	};

}


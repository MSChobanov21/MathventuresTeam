#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
    int d1, d2, d3, d4;
    int g1, g2, g3, g4;
    int gNum;
    int d[4] = {};
    int g[4] = {};
    int bull = 0, cow = 0;
    srand(time(NULL));

    do {
        d[0] = rand() % 10;
        d[1] = rand() % 10; 
        d[2] = rand() % 10;
        d[3] = rand() % 10;
    } while ((d[0] == d[1]) or (d[0] == d[2]) or (d[0] == d[3]) or (d[1] == d[2]) or (d[1] == d[3]) or (d[2] == d[3]));
}
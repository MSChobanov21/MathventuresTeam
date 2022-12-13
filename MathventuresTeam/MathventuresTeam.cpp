#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
    int choose;
    cout << "choose your game" << endl << "Bulls and Cows - 1" << endl << "Guess the Word - 2";
    cin >> choose;

    if (choose == 1) {
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

        cout << "You're playing Bulls and Cows" << endl << "You must guess the 4 digits number within 15 tries!" << endl;
        for (int i = 15; i != 0; i--) {
            bull = 0;
            cow = 0;
            cout << endl << "You've got " << i << " tries left" << endl << "Enter the 4 unique digits:";
            cin >> gNum;
            g[0] = gNum / 1000;
            g[1] = gNum / 100 - g[0] * 10;
            g[2] = gNum / 10 - g[0] * 100 - g[1] * 10;
            g[3] = gNum % 10;
            cout << g[0] << " " << g[1] << " " << g[2] << " " << g[3] << endl;

            for (int i = 0; i != 4; i++) {
                if (d[i] == g[i]) bull++;
            }
            if (bull == 4) {
                cout << "Good job!!! You win!!!";
                return 0;
            }
            if (g[0] == d[1]) cow++;
            if (g[0] == d[2]) cow++;
            if (g[0] == d[3]) cow++;
            if (g[1] == d[0]) cow++;
            if (g[1] == d[2]) cow++;
            if (g[1] == d[3]) cow++;
            if (g[2] == d[0]) cow++;
            if (g[2] == d[1]) cow++;
            if (g[2] == d[3]) cow++;
            if (g[3] == d[0]) cow++;
            if (g[3] == d[1]) cow++;
            if (g[3] == d[2]) cow++;
            cout << bull << " bulls and " << cow << " cows" << endl;
        }
        cout << "Game over " << "the number was " << d[0] << d[1] << d[2] << d[3] << endl;
    }
    else if (choose == 2) {

        string category;
        const int dataSize = 45;
        vector < string > arr; //random word from Dim2d
        string word, gWord;
        int catCounter = 0;
        char symb;
        int flag = 0;
        int flag2 = 0;
        int att = 0;

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
        string element;
        srand(time(NULL));



        cout << "Choose your category (1 - 2 - 3)" << endl << "Animals - 1" << endl << "Movies - 2" << endl << "Car brands - 3" << endl;
        cin >> category;





        for (int counter = 0; counter < dataSize; counter++) {
            if (Dim2d[counter][0] == category) {
                arr.push_back(Dim2d[counter][1]);
                catCounter++;
            }
        }
    }
}
#include <iostream>
#include <ctime>
using namespace std;

unsigned char mazeLavelOne[10][20] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
    {'X',' ',' ',' ',' ',' ',' ',' ','X','X',' ',' ',' ',' ',' ',' ','X','X',' ','X'}, //2
    {'X',' ','X',' ','X','X','X',' ',' ',' ',' ','X','X',' ','X',' ',' ',' ',' ','X'}, //3
    {'X',' ','X',' ','X',' ','X',' ','X',' ','X','X',' ',' ',' ','X',' ','X','X','X'}, //4
    {'X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ',' ','X',' ','X',' ',' ',' ','X'}, //5
    {'X','X',' ','X',' ','X','X','X','X',' ','X',' ','X','X',' ',' ',' ','X',' ','X'}, //6
    {'X',' ',' ','X',' ',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ','X','X',' ','X'}, //7
    {'X',' ','X','X','X',' ','X',' ',' ',' ','X','X','X',' ',' ',' ',' ','X',' ','X'}, //8
    {'X',' ',' ',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X','X',' ',' ',' ','X'}, //9
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //10
};


unsigned char mazeLevelTwo[12][12] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X'}, //1
    {'X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ','X'}, //2
    {'X',' ','X',' ','X',' ','X','X','X','X',' ','X'}, //3
    {'X','X','X',' ','X',' ',' ',' ',' ','X',' ','X'}, //4
    {'X',' ',' ',' ',' ','X','X','X',' ','X',' ','X'}, //5
    {'X','X','X','X',' ','X',' ','X',' ','X',' ','X'}, //6
    {'X',' ',' ','X',' ','X',' ','X',' ','X',' ','X'}, //7
    {'X','X',' ','X',' ','X',' ','X',' ','X',' ','X'}, //8
    {'X',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X'}, //9
    {'X','X','X','X','X','X',' ','X','X','X',' ','X'}, //10
    {'X',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X'}, //11
    {'X','X','X','X','X','X','X','X','X','X','X','X'}, //12
};


unsigned char mazeLevelThree[20][30] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
    {'X',' ','X','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X','X','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'}, //2
    {'X',' ','X','X',' ','X',' ','X','X','X','X','X',' ',' ',' ',' ',' ','X','X','X','X','X','X','X','X','X',' ','X',' ','X'}, //3
    {'X',' ',' ',' ',' ','X',' ',' ',' ',' ','X','X','X','X','X','X','X','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ','X','X'}, //4
    {'X',' ','X','X','X','X','X','X',' ',' ','X','X',' ',' ',' ',' ',' ','X',' ','X',' ','X','X','X',' ','X','X',' ','X','X'}, //5
    {'X',' ',' ',' ','X','X','X','X',' ','X','X','X',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ',' ','X','X'}, //6
    {'X','X','X',' ','X','X',' ',' ',' ','X',' ',' ',' ','X',' ','X','X','X',' ','X',' ','X','X','X','X','X','X','X','X','X'}, //7
    {'X','X','X',' ','X',' ',' ','X',' ','X',' ','X','X','X',' ',' ',' ','X',' ','X','X','X',' ',' ',' ',' ',' ',' ','X','X'}, //8
    {'X',' ',' ',' ','X',' ','X','X',' ','X',' ',' ',' ',' ','X','X',' ','X',' ',' ',' ',' ','X',' ','X',' ',' ',' ','X','X'}, //9
    {'X',' ','X','X',' ',' ','X',' ',' ','X',' ','X','X',' ','X',' ','X','X',' ','X','X','X','X',' ','X',' ','X','X','X','X'}, //10
    {'X',' ','X','X','X','X','X','X',' ','X','X',' ',' ',' ','X',' ',' ',' ','X',' ','X','X','X','X','X','X','X',' ','X','X'}, //11
    {'X',' ',' ',' ',' ',' ',' ','X',' ','X',' ','X','X',' ','X',' ','X','X','X',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X'}, //12
    {'X','X','X','X','X','X',' ','X','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X','X',' ','X','X','X','X','X',' ','X'}, //13
    {'X',' ','X',' ',' ',' ',' ','X','X',' ','X','X','X','X','X','X','X',' ','X',' ',' ',' ',' ','X','X','X','X',' ',' ','X'}, //14
    {'X',' ',' ',' ','X','X',' ','X','X',' ','X',' ','X',' ',' ',' ',' ',' ','X','X',' ','X',' ',' ',' ',' ',' ','X',' ','X'}, //15
    {'X',' ','X','X','X','X',' ',' ',' ',' ','X',' ','X',' ','X','X','X','X','X','X',' ','X','X','X','X','X',' ','X','X','X'}, //16
    {'X',' ','X',' ',' ',' ',' ','X','X',' ',' ',' ','X',' ',' ','X','X',' ',' ',' ','X',' ',' ',' ','X','X',' ',' ',' ','X'}, //17
    {'X',' ',' ',' ','X','X',' ','X',' ','X',' ','X','X','X',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X','X','X','X','X','X'}, //18
    {'X','X','X',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X','X',' ','X','X','X',' ','X','X','X',' ',' ',' ',' ',' ',' ','X'}, //19
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //20
};


unsigned char mazeLevelFour[31][31] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
    {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X'}, //2
    {'X',' ','X','X','X','X','X','X','X',' ','X','X','X',' ','X','X','X','X','X',' ','X',' ','X','X','X',' ','X','X','X',' ','X'}, //3
    {'X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X'}, //4
    {'X','X','X','X','X','X','X',' ','X',' ','X',' ','X','X','X','X','X','X','X','X','X','X','X',' ','X','X','X',' ','X',' ','X'}, //5
    {'X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ','X'}, //6
    {'X',' ','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X',' ','X','X','X',' ','X'}, //7
    {'X',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ','X',' ','X'}, //8
    {'X',' ','X',' ','X',' ','X','X','X',' ','X','X','X','X','X',' ','X','X','X','X','X',' ','X','X','X','X','X',' ','X',' ','X'}, //9
    {'X',' ','X',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ','X'}, //10
    {'X',' ','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X','X','X',' ','X','X','X','X','X','X','X',' ','X',' ','X'}, //11
    {'X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ','X'}, //12
    {'X',' ','X',' ','X',' ','X','X','X',' ','X',' ','X','X','X','X','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X',' ','X'}, //13
    {'X',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X'}, //14
    {'X','X','X',' ','X','X','X',' ','X',' ','X','X','X',' ','X',' ','X','X','X',' ','X','X','X',' ','X',' ','X','X','X',' ','X'}, //15
    {'X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X'}, //16
    {'X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X','X','X',' ','X',' ','X','X','X','X','X','X','X'}, //17
    {'X',' ','X',' ',' ',' ','X',' ','X',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ',' ',' ','X'}, //18
    {'X',' ','X','X','X','X','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X','X','X','X','X',' ','X'}, //19
    {'X',' ',' ',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ','X'}, //20
    {'X',' ','X','X','X',' ','X',' ','X','X','X','X','X','X','X',' ','X','X','X','X','X','X','X','X','X','X','X',' ','X',' ','X'}, //21
    {'X',' ','X',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X'}, //22
    {'X',' ','X',' ','X','X','X','X','X',' ','X',' ','X','X','X','X','X',' ','X','X','X','X','X',' ','X',' ','X','X','X','X','X'}, //23
    {'X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ','X',' ',' ',' ','X',' ','X',' ',' ',' ','X'}, //24
    {'X','X','X',' ','X','X','X',' ','X','X','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X',' ','X',' ','X',' ','X'}, //25
    {'X',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ','X'}, //26
    {'X',' ','X','X','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X','X','X','X','X','X','X',' ','X'}, //27
    {'X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X'}, //28
    {'X',' ','X','X','X','X','X','X','X','X','X',' ','X',' ','X','X','X',' ','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X'}, //29
    {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X'}, //30
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //31
};


int posX = 1;
int posY = 1;

int main()
{
    int number;
    srand(time(0));

    for (int i = 1; i < 10; i++)
    {
        number = (rand() % 10);
        break;
    }

    cout << number << endl;
}
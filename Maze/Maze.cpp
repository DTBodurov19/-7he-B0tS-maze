#include <iostream>
#include <ctime>
#include<conio.h>
#include<Windows.h>
using namespace std;

unsigned char mazeLevelOne[10][20] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
    {'X',' ',' ',' ',' ',' ',' ',' ','X','X',' ',' ',' ',' ',' ',' ','X','X',' ','X'}, //2
    {'X',' ','X',' ','X','X','X',' ',' ',' ',' ','X','X',' ','X',' ',' ',' ',' ','X'}, //3
    {'X',' ','X',' ','X',' ','X',' ','X',' ','X','X',' ',' ',' ','X',' ','X','X','X'}, //4
    {'X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ',' ','X',' ','X',' ',' ',' ','X'}, //5
    {'X','X',' ','X',' ','X','X','X','X',' ','X',' ','X','X',' ',' ',' ','X',' ','X'}, //6
    {'X',' ',' ','X',' ',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ','X','X',' ','X'}, //7
    {'X',' ','X','X','X',' ','X',' ',' ',' ','X','X','X',' ',' ',' ',' ','X',' ','X'}, //8
    {'X',' ',' ',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X','X',' ',' ','F','X'}, //9
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
    {'X',' ',' ',' ',' ',' ',' ','X','F',' ',' ','X'}, //11
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
    {'X','X','X',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X','X',' ','X','X','X',' ','X','X','X',' ',' ',' ',' ',' ','F','X'}, //19
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
    {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X','F','X'}, //30
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //31
};

unsigned char mazeLavelFive[25][22] =
{
 {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
 {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'}, //2
 {'X',' ','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X',' ',' ','X','X'}, //3
 {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ','X','X'}, //4
 {'X','X',' ',' ','X',' ','X','X','X','X','X','X','X','X','X','X',' ','X',' ',' ','X','X'}, //5
 {'X','X',' ',' ','X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ',' ','X','X'}, //6
 {'X','X',' ','X','X',' ','X',' ','X','X','X','X','X','X','X','X',' ','X',' ',' ',' ','X'}, //7
 {'X','X',' ','X',' ',' ','X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X','X','X'}, //8
 {'X','X',' ','X',' ',' ','X',' ','X','X','X','X','X',' ',' ',' ',' ','X',' ','X',' ','X'}, //9
 {'X','X',' ','X','X','X','X',' ','X','X',' ',' ','X',' ',' ',' ',' ','X',' ','X',' ','X'}, //10
 {'X','X',' ',' ',' ',' ',' ',' ','X','X',' ',' ','X',' ',' ',' ',' ','X',' ','X',' ','X'}, //11
 {'X','X','X','X','X','X','X',' ','X','X',' ','X','X',' ',' ',' ',' ','X',' ','X',' ','X'}, //12
 {'X','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ','X'}, //13
 {'X','X','X','X','X','X','X','X','X',' ','X','X','X','X','X','X',' ','X',' ','X',' ','X'}, //14
 {'X','X',' ','X','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ','X',' ','X',' ','X',' ','X'}, //15
 {'X','X',' ','X','X',' ','X','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X',' ','X'}, //16
 {'X','X',' ','X','X',' ','X','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X',' ','X'}, //17
 {'X','X',' ',' ',' ',' ','X','X','X','X','X','X',' ','X','X','X',' ','X',' ','X',' ','X'}, //18
 {'X',' ','X',' ','X',' ','X','X','X','X','X',' ',' ',' ',' ',' ',' ','X',' ','X',' ','X'}, //19
 {'X',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X','X','X','X','X','X',' ','X',' ','X'}, //20
 {'X','X','X','X','X',' ','X','X','X','X','X',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X'}, //21
 {'X','X','X','X','X',' ','X','X','X','X','X','X','X','X','X','X','X','X','X','X',' ','X'}, //22
 {'X','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'}, //23
 {'X','X','X','X','X','X','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'}, //24
 {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //25
};

unsigned char mazeLevelSix[9][15] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
    {'X',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ','X'}, //2
    {'X','X','X',' ','X','X','X','X','X','X','X',' ','X',' ','X'}, //3
    {'X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X'}, //4
    {'X',' ','X',' ','X','X',' ',' ','X','X','X',' ','X',' ','X'}, //5
    {'X',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ','X',' ','X'}, //6
    {'X',' ','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X'}, //7
    {'X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ','X','F',' ','X'}, //8
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //9
};

unsigned char mazeLevelSeven[21][21] = {
     {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
     {'X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X'}, //2
     {'X',' ','X','X','X','X','X','X','X',' ','X',' ','X','X','X',' ','X','X','X','X','X'}, //3
     {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X'}, //4
     {'X',' ','X','X','X',' ','X','X','X','X','X','X','X',' ','X','X','X',' ','X','X','X'}, //5
     {'X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'}, //6
     {'X','X','X',' ','X','X','X','X','X','X','X','X','X','X','X','X','X',' ','X','X','X'}, //7
     {'X',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X'}, //8
     {'X',' ','X','X','X',' ','X','X','X',' ','X','X','X',' ','X',' ','X','X','X',' ','X'}, //9
     {'X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ',' ',' ','X'}, //10
     {'X',' ','X',' ','X',' ','X','X','X',' ','X','X','X','X','X','X','X','X','X','X','X'}, //11
     {'X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X'}, //12
     {'X',' ','X','X','X','X','X','X','X','X','X',' ','X',' ','X','X','X','X','X',' ','X'}, //13
     {'X',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ','X'}, //14
     {'X','X','X','X','X',' ','X',' ','X','X','X',' ','X',' ','X','X','X','X','X',' ','X'}, //15
     {'X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X','F','X',' ','X'}, //16
     {'X',' ','X',' ','X',' ','X','X','X','X','X','X','X','X','X',' ','X',' ','X','X','X'}, //17
     {'X',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X'}, //18
     {'X',' ','X','X','X','X','X','X','X',' ','X',' ','X','X','X',' ','X','X','X',' ','X'}, //19
     {'X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ','X'}, //20
     {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //21

};

unsigned char mazeLevelEight[25][25] = {
{'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
{'X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X'}, //2
{'X',' ','X','X','X','X','X',' ','X','X','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X','X','X'}, //3
{'X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ','X',' ','X',' ','X'}, //4
{'X','X','X',' ','X',' ','X','X','X','X','X','X','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X'}, //5
{'X',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ','X'}, //6
{'X',' ','X','X','X',' ','X',' ','X','X','X',' ','X','X','X','X','X','X','X','X','X',' ','X',' ','X'}, //7
{'X',' ','X',' ','X',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ','X'}, //8
{'X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X',' ','X',' ','X',' ','X','X','X',' ','X'}, //9
{'X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ',' ',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X'}, //10
{'X','X','X',' ','X',' ','X',' ','X',' ','X','X','X','X','X',' ','X','X','X',' ','X','X','X','X','X'}, //11
{'X',' ','X',' ','X',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X'}, //12
{'X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X','X','X',' ','X','X','X',' ','X','X','X','X','X'}, //13
{'X',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ','X'}, //14
{'X',' ','X','X','X','X','X',' ','X',' ','X',' ','X','X','X','X','X','X','X',' ','X','X','X',' ','X'}, //15
{'X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ','X'}, //16
{'X',' ','X','X','X',' ','X','X','X',' ','X',' ','X',' ','X','X','X',' ','X',' ','X','X','X',' ','X'}, //17
{'X',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X'}, //18
{'X','X','X',' ','X','X','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X',' ','X',' ','X'}, //19
{'X',' ','X',' ',' ','X','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ',' ',' ',' ',' ','X',' ','X'}, //20
{'X',' ','X','X','X',' ','X','X','X',' ','X',' ','X',' ','X',' ','X',' ','X','X','X',' ','X',' ','X'}, //21
{'X',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X'}, //22
{'X',' ','X','X','X','X','X','X','X',' ','X','X','X',' ','X',' ','X','X','X',' ','X',' ','X',' ','X'}, //23
{'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X'}, //24
{'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //25
};

unsigned char mazeLevelNine[15][15] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //1
    {'X',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ','X'}, //2
    {'X',' ','X','X','X','X',' ','X',' ','X',' ','X','X',' ','X'}, //3
    {'X',' ',' ',' ',' ','X',' ','X',' ',' ',' ','X','X',' ','X'}, //4
    {'X','X','X','X',' ','X',' ','X','X','X','X','X',' ',' ','X'}, //5
    {'X',' ',' ','X',' ','X','X','X','X','X','X','X','X','X','X'}, //6
    {'X',' ','X','X',' ','X',' ',' ',' ',' ',' ','X',' ',' ','X'}, //7
    {'X',' ',' ',' ',' ','X',' ','X',' ','X',' ','X','X',' ','X'}, //8
    {'X',' ','X','X','X','X',' ','X',' ','X',' ',' ',' ',' ','X'}, //9
    {'X',' ',' ','X',' ','X',' ','X',' ','X',' ','X','X',' ','X'}, //10
    {'X',' ',' ','X',' ','X',' ','X',' ','X',' ','X',' ',' ','X'}, //11
    {'X',' ','X','X',' ','X',' ','X',' ','X',' ','X',' ','X','X'}, //12
    {'X',' ','X','X',' ','X',' ','X',' ','X','X','X',' ',' ','X'}, //13
    {'X',' ',' ',' ',' ',' ',' ','X',' ',' ',' ','X','X',' ','X'}, //14
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'}, //15
};
unsigned char mazeLevelTen[19][19] = {
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'},//1
    {'X',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'},//2
    {'X',' ','X',' ','X','X','X',' ','X',' ','X','X','X','X','X','X','X','X','X'},//3
    {'X',' ',' ',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ',' ',' ','X'},//4
    {'X',' ','X','X','X',' ','X','X','X','X','X','X','X','X','X',' ','X',' ','X'},//5
    {'X',' ','X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ','X'},//6
    {'X',' ','X','X','X','X','X',' ','X','X','X','X','X',' ','X','X','X',' ','X'},//7
    {'X',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ',' ',' ','X'},//8
    {'X','X','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X',' ','X',' ','X'},//9
    {'X',' ',' ',' ','X',' ','X',' ',' ',' ','X',' ','X',' ','X',' ','X',' ','X'},//10
    {'X','X','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X',' ','X'},//11
    {'X',' ',' ',' ','X',' ',' ',' ','X',' ','X',' ','X',' ',' ',' ','X',' ','X'},//12
    {'X',' ','X','X','X','X','X','X','X',' ','X','X','X','X','X','X','X','X','X'},//13
    {'X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ',' ',' ','X'},//14
    {'X','X','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X','X','X',' ','X'},//15
    {'X',' ',' ',' ','X',' ','X',' ','X','X','X','X','X',' ',' ',' ','X',' ','X'},//16
    {'X',' ','X','X','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X',' ','X'},//17
    {'X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ','F'},//18
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'},//19



};

unsigned char** dynamicMapCreator(unsigned char** a, int n, int m)
{
    a = new unsigned char* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new unsigned char[m];
    }
    return a;
}

unsigned char** mapOne = dynamicMapCreator(mapOne, 10, 20);
unsigned char** mapTwo = dynamicMapCreator(mapTwo, 12, 12);
unsigned char** mapThree = dynamicMapCreator(mapThree, 20, 30);
unsigned char** mapFour = dynamicMapCreator(mapFour, 31, 31);
unsigned char** mapFive = dynamicMapCreator(mapFive, 25, 22);
unsigned char** mapSix = dynamicMapCreator(mapSix, 9, 15);
unsigned char** mapSeven = dynamicMapCreator(mapSeven, 21, 21);
unsigned char** mapEight = dynamicMapCreator(mapEight, 25, 25);
unsigned char** mapNine = dynamicMapCreator(mapNine, 15, 15);
unsigned char** mapTen = dynamicMapCreator(mapTen, 19, 19);
int* mapOrder = new int[10];

void movement(unsigned char** map, int n, int m)
{
    int posX = 1;
    int posY = 1;
    map[posX][posY] = '*';
    char c = '0';
    while (1)
    {
        system("cls");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << map[i][j];
            }
            cout << endl;
        }

        c = _getch();


        switch (c) {
        case 72:
        case 'W':
        case 'w':
            if (map[posX - 1][posY] != 'X' && map[posX - 1][posY] != 'F')
            {
                map[posX][posY] = ' ';
                map[posX - 1][posY] = '*';
                posX--;
                break;
            }
            else if (map[posX - 1][posY] == 'F')
            {
                goto level_complete;
            }
            else
            {
                break;
            }
        case 80:
        case 's':
        case 'S':
            if (map[posX + 1][posY] != 'X' && map[posX + 1][posY] != 'F')
            {
                map[posX][posY] = ' ';
                map[posX + 1][posY] = '*';
                posX++;
                break;
            }
            else if (map[posX + 1][posY] == 'F')
            {
                goto level_complete;
            }
            else
            {
                break;
            }
        case 75:
        case 'A':
        case 'a':
            if (map[posX][posY - 1] != 'X' && map[posX][posY - 1] != 'F')
            {
                map[posX][posY] = ' ';
                map[posX][posY - 1] = '*';
                posY--;
                break;
            }
            else if (map[posX][posY - 1] == 'F')
            {
                goto level_complete;
            }
            else
            {
                break;
            }
        case 77:
        case 'D':
        case 'd':
            if (map[posX][posY + 1] != 'X' && map[posX][posY + 1] != 'F')
            {
                map[posX][posY] = ' ';
                map[posX][posY + 1] = '*';
                posY++;
                break;
            }
            else if (map[posX][posY + 1] == 'F')
            {
                goto level_complete;
            }
            else
            {
                break;
            }
        }
    }
level_complete:
    system("cls");
    cout << "Level completed!";
    Sleep(2000);
}

void randomMapChooser()
{
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        bool check;
        int n;
        do
        {

            n = (rand() % 10) + 1;


            check = true;
            for (int j = 0; j < i; j++)
                if (n == mapOrder[j])
                {
                    check = false;
                    break;
                }
        } while (!check);
        mapOrder[i] = n;
    }
}

void optionOne()
{
    for (int i = 0; i < 10; i++)
    {
        switch (mapOrder[i])
        {
        case 1:
            movement(mapOne, 10, 20);
            break;
        case 2:
            movement(mapTwo, 12, 12);
            break;
        case 3:
            movement(mapThree, 20, 30);
            break;
        case 4:
            movement(mapFour, 31, 31);
            break;
        case 5:
            movement(mapFive, 25, 22);
            break;
        case 6:
            movement(mapSix, 9, 15);
            break;
        case 7:
            movement(mapSeven, 21, 21);
            break;
        case 8:
            movement(mapEight, 25, 25);
            break;
        case 9:
            movement(mapNine, 15, 15);
            break;
        case 10:
            movement(mapTen, 19, 19);
            break;
        }
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            mapOne[i][j] = mazeLavelOne[i][j];
        }
    }

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            mapTwo[i][j] = mazeLevelTwo[i][j];
        }
    }

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            mapThree[i][j] = mazeLevelThree[i][j];
        }
    }

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            mapFour[i][j] = mazeLevelFour[i][j];
        }
    }

    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 22; j++)
        {
            mapFive[i][j] = mazeLavelFive[i][j];
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            mapSix[i][j] = mazeLevelSix[i][j];
        }
    }

    for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            mapSeven[i][j] = mazeLevelSeven[i][j];
        }
    }

    for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < 25; j++)
        {
            mapEight[i][j] = mazeLevelEight[i][j];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            mapNine[i][j] = mazeLevelNine[i][j];
        }
    }

    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            mapTen[i][j] = mazeLevelTen[i][j];
        }
    }
}
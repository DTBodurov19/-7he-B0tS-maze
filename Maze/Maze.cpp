

#include <iostream> //Basic Library

#include <ctime> //For Random Numbers

#include<conio.h> //Movement

#include<Windows.h> //For Sleep

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
 {'X','X',' ','X',' ',' ','X',' ','X','X','X','X','X',' ',' ',' ',' ','X',' ','X','F','X'}, //9
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
{'X',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ',' ','F','X'}, //24
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
    {'X',' ','X','X',' ','X',' ','X',' ','X','X','X',' ','F','X'}, //13
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
    {'X',' ','X','X','X','X','X','X','X',' ','X',' ','X','X','X','X','X','X','X'},//13
    {'X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ',' ',' ',' ',' ',' ',' ','X'},//14
    {'X','X','X','X','X',' ','X',' ','X',' ','X',' ','X','X','X','X','X',' ','X'},//15
    {'X',' ',' ',' ','X',' ','X',' ','X','X','X','X','X',' ',' ',' ','X',' ','X'},//16
    {'X',' ','X','X','X',' ','X',' ','X','X','X','X','X',' ','X',' ','X',' ','X'},//17
    {'X',' ',' ',' ',' ',' ','X',' ',' ',' ',' ',' ',' ',' ','X',' ','X',' ','F'},//18
    {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X','X'},//19



};

unsigned char** dynamicMapCreator(unsigned char** a, int n, int m) { //Turn The Ten Arrays Into Dynamic
    a = new unsigned char* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new unsigned char[m];
    }
    return a;
}

unsigned char** mapOne = dynamicMapCreator(mapOne, 10, 20); //Make mazeLevelOne Dynamic
unsigned char** mapTwo = dynamicMapCreator(mapTwo, 12, 12); //Make mazeLevelTwo Dynamic
unsigned char** mapThree = dynamicMapCreator(mapThree, 20, 30); //Make mazeLevelThree Dynamic
unsigned char** mapFour = dynamicMapCreator(mapFour, 31, 31); //Make mazeLevelFour Dynamic
unsigned char** mapFive = dynamicMapCreator(mapFive, 25, 22); //Make mazeLevelFive Dynamic
unsigned char** mapSix = dynamicMapCreator(mapSix, 9, 15); //Make mazeLevelSix Dynamic
unsigned char** mapSeven = dynamicMapCreator(mapSeven, 21, 21); //Make mazeLevelSeven Dynamic
unsigned char** mapEight = dynamicMapCreator(mapEight, 25, 25); //Make mazeLevelEight Dynamic
unsigned char** mapNine = dynamicMapCreator(mapNine, 15, 15); //Make mazeLevelNine Dynamic
unsigned char** mapTen = dynamicMapCreator(mapTen, 19, 19); //Make mazeLevelTen Dynamic
unsigned char** userMap;
int* mapOrder = new int[10];

void menu(); //Function Declaration 

void movement(unsigned char** map, int n, int m) { //Moving The Star
    int posX = 1;
    int posY = 1;
    map[posX][posY] = '*';
    char c = '0';
    while (1) {
        system("cls");
        cout << "Press 'Q' to return to menu.\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << " ";
                cout << map[i][j]; //Printing The Maze
            }
            cout << endl;
        }

        c = _getch();

        switch (c) { //Switch For A Movement
        case 72: //Up Arrow
        case 'W':
        case 'w':
            if (map[posX - 1][posY] != 'X' && map[posX - 1][posY] != 'F') {
                map[posX][posY] = ' ';
                map[posX - 1][posY] = '*';
                posX--;
                break;
            }
            else if (map[posX - 1][posY] == 'F') {
                goto level_complete;
            }
            else {
                break;
            }
        case 80: //Down Arrow 
        case 's':
        case 'S':
            if (map[posX + 1][posY] != 'X' && map[posX + 1][posY] != 'F') {
                map[posX][posY] = ' ';
                map[posX + 1][posY] = '*';
                posX++;
                break;
            }
            else if (map[posX + 1][posY] == 'F') {
                goto level_complete;
            }
            else {
                break;
            }
        case 75: //Left Arrow
        case 'A':
        case 'a':
            if (map[posX][posY - 1] != 'X' && map[posX][posY - 1] != 'F') {
                map[posX][posY] = ' ';
                map[posX][posY - 1] = '*';
                posY--;
                break;
            }
            else if (map[posX][posY - 1] == 'F') {
                goto level_complete;
            }
            else {
                break;
            }
        case 77: //Right Arrow
        case 'D':
        case 'd':
            if (map[posX][posY + 1] != 'X' && map[posX][posY + 1] != 'F') {
                map[posX][posY] = ' ';
                map[posX][posY + 1] = '*';
                posY++;
                break;
            }
            else if (map[posX][posY + 1] == 'F') {
                goto level_complete;
            }
            else {
                break;
            }
        case 'q':
        case 'Q':
            goto quit_maze;
            break;
        }
    }
quit_maze:
    system("cls");
    cout << "You quit. Returning to menu in 3 seconds.\n";
    Sleep(2000);
    menu();
level_complete:
    system("cls");
    cout << "Level completed!";
    Sleep(2000);
}

void userMapCreator(unsigned char** map, int n, int m) { //For The Creation Of User Maps
    int posX = 1;
    int posY = 1;
    map[posX][posY] = '*';
    char c = '0';
    while (1) {
        system("cls");
        cout << "Now build your maze.\n If you are on a square and press 'E' the square you are on will turn into X.\n If you are ready with the map go to the location where you want your finish point ot be and press 'F'.\n";
        cout << "Press 'Q' to return to menu.\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << " ";
                cout << map[i][j]; //Printing The Maze
            }
            cout << endl;
        }

        c = _getch();

        switch (c) { //Switch For Movement And Building
        case 72: //Up Arrow
        case 'W':
        case 'w':
            if (map[posX - 1][posY] != 'X' && map[posX - 1][posY] != 'F') {
                map[posX][posY] = ' ';
                map[posX - 1][posY] = '*';
                posX--;
                break;
            }
            else {
                break;
            }
        case 80: //Down Arrow
        case 's':
        case 'S':
            if (map[posX + 1][posY] != 'X' && map[posX + 1][posY] != 'F') {
                map[posX][posY] = ' ';
                map[posX + 1][posY] = '*';
                posX++;
                break;
            }
            else {
                break;
            }
        case 75: //Left Arrow
        case 'A':
        case 'a':
            if (map[posX][posY - 1] != 'X' && map[posX][posY - 1] != 'F') {
                map[posX][posY] = ' ';
                map[posX][posY - 1] = '*';
                posY--;
                break;
            }
            else {
                break;
            }
        case 77: //Right Arrow
        case 'D':
        case 'd':
            if (map[posX][posY + 1] != 'X' && map[posX][posY + 1] != 'F') {
                map[posX][posY] = ' ';
                map[posX][posY + 1] = '*';
                posY++;
                break;
            }
            else {
                break;
            }
        case 'e': //For Placing The X
        case 'E': 
            map[posX][posY] = 'X';
            if (map[posX - 1][posY] != 'X') {
                map[posX - 1][posY] = '*';
                posX--;
                break;
            }
            else if (map[posX + 1][posY] != 'X') {
                map[posX + 1][posY] = '*';
                posX++;
                break;
            }
            else if (map[posX][posY - 1] != 'X') {
                map[posX][posY - 1] = '*';
                posY--;
                break;
            }
            else if (map[posX][posY + 1] != 'X') {
                map[posX][posY + 1] = '*';
                posY++;
                break;
            }
        case 'F': //Add Finish Point
        case 'f':
            map[posX][posY] = 'F';
            goto finish;
        case 'q': //Exit The Game
        case 'Q':
            goto quit_user_maze;
            break;
        }
    }
quit_user_maze:
    system("cls");
    cout << "You quit. Returning to menu in 3 seconds.\n";
    Sleep(2000);
    menu();
finish:
    cout << "";
}

unsigned char** userMapStruct(unsigned char** a, int n, int m) { //Build The  Box
    for (int i = 0; i < m; i++) {
        a[0][i] = 'X';
    }
    for (int i = 0; i < m; i++) {
        a[n - 1][i] = 'X';
    }
    for (int i = 0; i < n; i++) {
        a[i][0] = 'X';
    }
    for (int i = 0; i < n; i++) {
        a[i][m - 1] = 'X';
    }
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            a[i][j] = ' ';
        }
    }
    return a;
}

unsigned char** mapDelete(unsigned char** a, int n) { //Free The Memory
    for (int i = 0; i < n; i++) {
        delete a[i];
    }
    delete[] a;
    return a;
}

void randomMapChooser() { // Pick A Map
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        bool check;
        int n;
        do {

            n = (rand() % 10) + 1;

            check = true;
            for (int j = 0; j < i; j++)
                if (n == mapOrder[j]) {
                    check = false;
                    break;
                }
        } while (!check);
        mapOrder[i] = n;
    }
}
void congrats() {
    cout << "  //-    =========      ||            =========    ||========     // \\       ||                //=====" << endl;
    cout << " //      ||     ||      ||=======     |       |    ||            //   \\   ===||===            //" << endl;
    cout << "||       ||     ||      ||     ||     |=======|    ||           //=====\\     ||             ||" << endl;
    cout << " \\\\      ||     ||      ||     ||             |    ||          //       \\    ||            //" << endl;
    cout << "  \\\\_    =========      ||     ||    =========|    ||         //         \\   ||===   =====//" << endl;


}

void optionOne() { //Play The Map Level Game
    randomMapChooser();
    for (int i = 0; i < 10; i++) {
        switch (mapOrder[i]) {
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
    congrats();
}

void optionTwo() {  //Build Your Own Maze
again:
    int n, m;
    system("cls");
    cout << "Please type the lenght and the width of the map you want to create\n";
    cin >> n >> m;
    n += 2;
    m += 2;
    userMap = dynamicMapCreator(userMap, n, m);
    userMap = userMapStruct(userMap, n, m);
    userMapCreator(userMap, n, m);
save_changes_wrong_letter:
    cout << "Save changes? Y/N\n";
    char choice;
    cin >> choice;
    if ((choice == 'y') || (choice == 'Y')) {
        cout << "Cool, now is your turn to play.\n";
        Sleep(2000);
        system("cls");
        movement(userMap, n, m);
        congrats();
    }
    else if ((choice == 'n') || (choice == 'N')) {
    wrong_input_for_N: cout << "Do you want to try again?Y/N\n";
        cin >> choice;
        if ((choice == 'y') || (choice == 'Y')) {
            userMap = mapDelete(userMap, n);
            goto again;
        }
        else if ((choice == 'n') || (choice == 'N')) {
            menu();
        }
        else {
            cout << "Please type the correct letter!\n";
            Sleep(2000);
            goto wrong_input_for_N;
        }
    }
    else {
        cout << "Please type the correct letter!\n";
        Sleep(2000);
        goto save_changes_wrong_letter;
    }
}

int choice;
int gameChoice;

void menu() { // Create Menu For The Game

    while (choice != 3) {
    wrong_choice:
        system("cls");
        cout << "---------------------------" << endl;
        cout << "     Main Menu         " << endl;
        cout << "---------------------------" << endl;

        cout << "1. Play Game" << endl;
        cout << "2. Rules" << endl;
        cout << "3. Quit The Game" << endl;
        cout << "Enter Your Choice" << endl;

        cin >> choice; //Chose From 1 To 3

        switch (choice) {
        case 1: {
        wrong_game_choose:
            system("cls");
            cout << "1.Ten Level Game" << endl;
            cout << "2.Build your own maze" << endl;
            cout << "Enter your choice" << endl;

            cin >> gameChoice; //Chose from 1 Or 2

            if (gameChoice == 1) {
                optionOne();
            }
            else if (gameChoice == 2) {
                optionTwo();
            }
            else {
                cout << "Incorrect Input!" << endl;
                Sleep(1000);
                goto wrong_game_choose;
            }
        }
        case 2: {
            system("cls");
            cout << "You cannot go through the X " << endl;
            cout << "You can only go through the spaces" << endl;
            cout << "You need the reach the letter F in order to win" << endl;
            cout << "Have Fun!" << endl;
            Sleep(3000);
            break;
        }
        case 3: {
            break;
        }
        default: {
            cout << "Incorrect Input!" << endl;
            Sleep(1000);
            goto wrong_choice;
        }
        }
    }
}

int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            mapOne[i][j] = mazeLevelOne[i][j];
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            mapTwo[i][j] = mazeLevelTwo[i][j];
        }
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 30; j++) {
            mapThree[i][j] = mazeLevelThree[i][j];
        }
    }

    for (int i = 0; i < 31; i++) {
        for (int j = 0; j < 31; j++) {
            mapFour[i][j] = mazeLevelFour[i][j];
        }
    }

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 22; j++) {
            mapFive[i][j] = mazeLavelFive[i][j];
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 15; j++) {
            mapSix[i][j] = mazeLevelSix[i][j];
        }
    }

    for (int i = 0; i < 21; i++) {
        for (int j = 0; j < 21; j++) {
            mapSeven[i][j] = mazeLevelSeven[i][j];
        }
    }

    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 25; j++) {
            mapEight[i][j] = mazeLevelEight[i][j];
        }
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            mapNine[i][j] = mazeLevelNine[i][j];
        }
    }

    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            mapTen[i][j] = mazeLevelTen[i][j];
        }
    }

    menu(); //Call Menu Function
}
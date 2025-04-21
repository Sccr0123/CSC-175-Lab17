#include <array>
#include <array>
#include <array>
#include <strings.h>
// Definition of findHigh function goes here
void findHigh(double array[], int length, int &index, double &doubleHigh)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] > doubleHigh)
        {
            doubleHigh = array[i];
            index = i;
        }
    }
};

void findHigh(int array[], int length, int &index, int &intHigh)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] > intHigh)
        {
            intHigh = array[i];
            index = i;
        }
    }
};

void findHigh(std::string array[], int length, int &index, std::string &stringHigh)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] > stringHigh)
        {
            stringHigh = array[i];
            index = i;
        }
    }
};

void findHigh(char array[], int length, int &index, char &charHigh)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] > charHigh)
        {
            charHigh = array[i];
            index = i;
        }
    }
};

void findHigh(float array[], int length, int &index, float &charHigh)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] > charHigh)
        {
            charHigh = array[i];
            index = i;
        }
    }
};
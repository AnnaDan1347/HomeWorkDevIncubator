#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
//#include <random>

using namespace std;

#define numOfHeighPoints 10

void randHeightValues(int array[]);
void printHeightValues(int array[]);
void findInvisiblePoints(int array[]);
void findInvisiblePoints(int array[]);



int main() {
    srand(time(NULL));
	int heightValues[numOfHeighPoints] = {0};
	randHeightValues(heightValues);
	printHeightValues(heightValues);
	findInvisiblePoints(heightValues);
	return 0;
}

void randHeightValues(int array[]) {
    for (int i = 0; i < numOfHeighPoints; i++)
    array[i] = rand() % 1010;
    //array[ i ] = ( rand() % 10100) / 100.0;

}

void printHeightValues(int array[]) {
	for (int i = 0; i < numOfHeighPoints; i++){
    cout << array[i] << " ";}
    cout << endl;
}

void findInvisiblePoints(int array[]) {
    double a = (array[1] - array[0]) / 1;
    double b = array[0];
    cout << array[0] << " ";
    cout << array[1] << " ";
    // cout << "a= " << a << endl;
    // cout << "b= " << b << endl;
    for (int i = 2; i < numOfHeighPoints; i++)
            {
                if (array[i] < a * i + b)
                {
                    cout << "*" << " "; 
                }
                else
                {
                    a = (array[i] - array[0]) / i;
                    cout << array[i] << " ";
                }
            }
}


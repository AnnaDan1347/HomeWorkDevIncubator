#include <ctime>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
//#include <random>
#include <ctime>
#include <cstdlib>



#define TIME 1
#define NUMBER_OF_RECRUITS 10
using namespace std;

void printParade(char array[]);

int main()
{
    char parade[NUMBER_OF_RECRUITS] = {};
    for (int i = 0; i < NUMBER_OF_RECRUITS; i++) {
        parade[i] = '<';
    }
    srand(time(0));
    parade [rand() % NUMBER_OF_RECRUITS] = '>';
    
    
    while (true){
        int count = 0;
        for (int j = 0; j<(NUMBER_OF_RECRUITS-1); j++) {
            if (parade[j] == '>' && parade[j+1] == '<') {
                parade[j] = '<';
                parade[j+1] = '>';
                count++;
                //system("cls");
                printParade(parade);
                sleep (TIME);
            }
        }
            if (count == 0) {
                return 0;
            
        }
    }
    return 0;
}
void printParade(char array[]){
    for (int i = 1; i < NUMBER_OF_RECRUITS; i++){
        cout << array[i] << ' ' <<  flush;
    }
    cout << endl;
}




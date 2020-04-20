/*
Created by Thomas Chase
Created on April 20, 2020
*/

//This program will create a square of asterisks

#include <iostream>
#include <iomanip>

//Function prototype
void squareOfAsterisks(int x);

using namespace std;

//Globel variables
int x;

int main()
{
    cout << "How big do you want the square? ";
    cin >> x; //pass in x to the function as the size of the square
    squareOfAsterisks(x);


    return 0;
}

void squareOfAsterisks(int x){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            cout << "*";
        }
        cout << endl;
    }
}

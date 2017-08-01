/**********************************
 ** Program Filename: hailstone.cpp
 ** Author: reuben youngblom
 ** Date: October 19th 2016
 ** Description:  program takes a starting number and runs it through a hailstone function.
 ** Input: takes a starting number and passes it to a hailstone function. This function creates a counter loop to keep track of the number of times through the loop.  While in the loop, it tests via conditionals whether the number is odd or even, and performs appropriate hailstone math on the current number until it gets to 1.
 ** Output: should run it through a hailstone sequence and output how many loops it takes to get back to one
 **********************************/

#include <iostream>
using namespace std;

int hailstone (int);  //function prototype

/*
//main function commented out

int main()
{

    cout << "input starting number:" << endl;
    int test;
    cin >> test;
    
    int final = hailstone (test);
    
    cout << final << endl;
    
    return 0;
}
 */

int hailstone (int start) //hailstone sequence function.  takes starting number in
{
    int counter = 0;  //creates counter to count number of times through the loop
    
    while (start != 1)  //starts the loop.  Will terminate if user start at 1, or once sequence gets to one
    
    {
        
        counter ++;  // adds one to the counter every time loop is run
        
    if (start%2 == 0)  //conditional for if current number is even (as even number / 2 will have a zero remainder)
        {
            start = start / 2; //divide by two, as per hailstone sequence rules
        }
    
    else
    {
        start = (start * 3) + 1; //but if it's odd, multiply by three and add one
    }
        
    }
        
    return counter; //returns the counter, which should hold how many times through the loop it took to get one

}
// Lab Task 2 Week 3 BONUS.cpp : Defines the entry point for the console application.
//

/*Perform three XOR over two numbers inserted by the user, then, attach the results to the 
file inserted as parameter*/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int main(int argc, char*argv[])

{
	int A, B;
	/*Check whether two parameters have been inserted */
	if (argc == 2){

		ofstream Numbers(argv[1], std::ofstream::out | std::ofstream::app);
		if (Numbers.is_open()){
			cout << "Instert a number A:" << endl;
			cin >> A;
			cout << "Instert a number TEST B:" << endl;
			cin >> B;
			A = A^B;
			cout << A << endl;
			Numbers << A << endl;
			B = A^B;
			cout << B << endl;
			Numbers << B << endl;
			A = A^B;
			cout << A << endl;
			Numbers << A << endl;

			}
			
			Numbers.close();

		}
		else{
			cout << "The file has not been opened correctly" << endl;
		}



	return 0;
}


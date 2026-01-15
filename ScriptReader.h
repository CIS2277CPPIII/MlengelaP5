/*********************************************************************
* Program: Linked List
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: March 14th 2023
* Purpose: Program 5 linked list
**********************************************************************/

#ifndef _SCRPT_RDR_H
#define _SCRPT_RDR_H


#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class ScriptReader
{
private:
	ifstream in;


public:

	//only constructor, is passed the name of the file
	//and opens the file
	ScriptReader(string file);

    //destructor for closing the file stream
    ~ScriptReader();

	//returns the next integer value it finds 
	int GetNextInt();
	
	//returns the next valid string 
	string GetNextString();
};


#endif

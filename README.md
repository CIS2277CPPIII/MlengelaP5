# The Linked List Manager: Part I
### Testing with Barbara’s script file and person generator file

#### __Obtain PersonNode.h, ListMgr.h from Brightspace.__
#### __Do Not Modify these files.__

# Turn in requirements: 
# Follow directions on the P5_LinkedListMgr_TestRun Description handout. 

Please create a Visual Studio project named LastnameP5.  It will have all your source code. Once again, (as in Program 3), place your LastnamePersonGen folder with your source code. It should have all the files needed for generating Persons, including the Person.h, Date.h, PersonGen.h, plus the lib and the name text files. It will be the folder we use from now on whenever Persons are needed.

Part 1 describes the code that you’ll need to build initially. 
Part 2 describes the requirements for building a text-based script reader and testing script file that we’ll use to test your final program ultimately. 

FYI reference on [list]( http://www.cplusplus.com/reference/stl/list/)

In this program, you are being asked to write a class called the ListMgr class, which mimics (to the best of our ability) the STL <list> class. The ListMgr class will provide us the ability to create a linked list of Persons. In order to do this, we must “manually” link our list items together. Our ListMgr will manage a list of PersonNodes that was developed in class. Our ListMgr is a doubly-linked list. 
The ListMgr class will have private PersonNode pointers for the first and last nodes in the list, and an integer count. Obtain the ListMgr.h from Blackboard and use it. </br>
Here is it: 

<img width="767" height="275" alt="image" src="https://github.com/user-attachments/assets/843cd166-21f9-4746-af58-9b5ef2218e19" />

<img width="735" height="790" alt="image" src="https://github.com/user-attachments/assets/7f8b66a3-995e-4723-9bd1-56154acc1b1a" />

As we discussed in class, you’ll have your PersonGen class generating Persons using the GetNewPerson() method. All Persons and PersonNodes should be created via the new operator (as you do in GetNewPerson). All these objects will be stored in the free store. You’ll need to be sure to delete the memory when it’s time for the object to “go away”. 

You may plan to build this program initially, using a series of calls from your Driver, but you’ll eventually need to build a menu to test the functionality of the ListMgr. You must use the numbered list shown below as your guide for testing.  Refer to the ListMgr.h for exact details.

1.	Show list
2.	Add to front of list	//passes a Person* into ListMgr, added to the front
3.	Add to back of list	// pass a Person* into ListMgr, added to the end
4.	Remove from front	//first PersonNode removed from the list, count decreased by 1
5.	Remove from back	//last PersonNode removed from the list, count decreased by 1
6.	Remove selected item	//pass string representing a name (or part of a name) into ListMgr
7.	Front			//obtains the first Person* in the list
8.	Back			// obtains the last Person* in the list 
9.	Erase			//is passed the position number for the item, note first = #1
10.	Clear			//clears the list
11.	Size			//shows the size (total Persons) in the list
12.	Quit the program
For example, in your driver, when you add a Person to the end of the ListMgr’s list, the Driver calls the PersonGen’s GetNewPerson() to obtain the pointer to the Person that has been created via the new operator in PersonGen. The Driver then passes the pointer to the to the ListMgr’s push_back() method. The ListMgr will handle setting the Person* into the PersonNode and managing the list. 

Remember, whenever a PersonNode is removed, the Person information contained within should be deleted as well as the PersonNode itself. 
	
Please note that the PersonNode destructor has a cout << statement showing the name of the Person in the Node that is being deleted. This is so we can see who is being deleted when the node goes out of scope. 

When the ListMgr goes out of scope (in this case, program termination), its destructor must clean up all memory that was allocated by clearing out the list. Have cout statements showing what is happening.

In Part 2, your program will use a ScriptReader object, the provided script file andthe  persons file. You will need to plan to <ins> write descriptive information </ins> to a log file so as to demonstrate the functionality of your ListMgr. 


# The Linked List Manager: Part II
### Linked List complete program 
### Testing with Barbara’s script file and person generator file

Part 1 describes the code that you’ll need to build initially. 
Part 2 describes the requirements for building a text-based script reader and testing script file that we’ll use to test your final program ultimately. 

NOTES:
BE SURE TO PRINT THE LIST AFTER ANY OPERATIONS THAT CHANGE THE LIST.
NO COUT<< IN THE LIST EXCEPT THE SHOW.

In order to fully test this program and not go crazy entering menu items, we’ll use a text-based script file that will direct the program. The items in the script file will correspond to the menu items described in Part 1. 
The format for the script file is as follows:

Use the # symbol on the first line for a comment. You can have as many # lines as you like.
Your file may have blank lines.
Each non-blank or non-# line will be read as a menu option (i.e., a command). 
The line following the command should be whatever input is required from the user for that menu option. 

This illustrates a script that would have the program show the list, add a person to the front of the list 3 times, and remove VIRGINIA, then erase the first node, then quit the program:

#Barbara's TestScript.txt file
#CIS 2277 Spring 2019 P5 Linked List

#ignore lines that start with # or space

#show the list</br>
1</br>
#add to the front</br>
2</br>
#add to the front</br>
2</br>
#add to the front</br>
2</br>
#remove selected item</br>
6</br>
VIRGINIA</br>
#erase a node in position 1 </br>
9</br>
1</br>
#quit</br>
12</br>

You will need to build the ScriptReader class that is defined here. Do not modify it.  Hint: check out the peek() function in instream. 

<img width="737" height="693" alt="image" src="https://github.com/user-attachments/assets/272e071f-b4c3-4d76-beb7-1ca373945a64" />

The programmer will also need to also write a log file that shows the results of the testing script. The results log, when paired with the test script, should fully describe and illustrate how your program is working. 

# Sources:
# Usage:
# Contributions: 



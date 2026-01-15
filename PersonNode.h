/*********************************************************************
* Program: Linked List
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: March 14th 2023
* Purpose: Program 5 linked list
**********************************************************************/

// This is the linked list node class used by the ListMgr class.

#ifndef _PERSON_NODE_H
#define _PERSON_NODE_H

#include <iostream>
using namespace std;

class PersonNode
{
   private:
      PersonNode* prev{ nullptr }, * next{nullptr};
      Person* person;

   public:
       PersonNode() = default;

      ~PersonNode()
      {
         cout << "\nIn PersonNode destructor.  " << person->GetName();
         delete person;

      }

      void SetPrev(PersonNode *p) { prev = p; }
      void SetNext(PersonNode *n) { next = n; }
      void SetPerson(Person* p) { person = p; }

      PersonNode *GetPrev() { return prev; }
      PersonNode *GetNext() { return next; }
      Person* GetPerson() { return person; }
};

#endif

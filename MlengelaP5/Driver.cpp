/*********************************************************************
* Program: Linked List
* Programmer: Daudi Mlengela(dmlengela@cnm.edu)
* Date: March 14th 2023
* Purpose: Program 5 linked list
**********************************************************************/

#include <iostream>
#include <sstream>
#include "ListMgr.h"
#include "PersonGen.h"

int getValue()
{
    string name;
    getline(std::cin, name);
    return(atoi(name.c_str()));
}
void WriteHeader();
void GoodBye();

int main()
{
   WriteHeader();
   ListMgr* lm = new ListMgr();
   PersonGen pg;

   int number{ 0 };
   string name;

   do
   {
      std::cout << "Please select an item(1,2,3 etc\n";
      std::cout << " 1 - Show list\n";
      std::cout << " 2 - Add to front of list\n";
      std::cout << " 3 - Add to back of list\n";
      std::cout << " 4 - Remove from front\n";
      std::cout << " 5 - Remove from back\n";
      std::cout << " 6 - Remove selected item\n";
      std::cout << " 7 - Front\n";
      std::cout << " 8 - Back\n";
      std::cout << " 9 - Erase\n";
      std::cout << "10 - Clear\n";
      std::cout << "11 - Size\n";
      std::cout << "12 - Quit\n";
      std::cout << "==>";

      int number = getValue();

      if(number < 1 || number > 12)
      {
         std::cout << "invalid input\n";
         continue;
      }

      if(number == 1)
      {
          lm->Show();
      }
      else if(number == 2)
      {
          Person* pn = pg.GetNewPerson();
          lm->Push_front(pn);
          std::cout << "\n Adding " << pn->GetName();
          lm->Show();
          std::cout << lm->ShowString();
      }
      else if(number == 3)
      {
         lm->Push_back(pg.GetNewPerson());
      }
      else if(number == 4)
      {
         lm->Pop_front();
      }
      else if(number == 5)
      {
         lm->Pop_back();
      }
      // When number is 6 ==>
      else if(number == 6)
      {
         string name;
         std::cout << "Enter name string: ";
         getline(std::cin, name);
         lm->Remove(name);
         lm->Show();
         std::cout << lm->ShowString();
         break;
      }
      else if(number == 7)
      {
         Person *p = lm->Front();

         if(p)
            std::cout << p->GetName() << "\n";
         else
            std::cout << "N/A\n";
      }
      else if(number == 8)
      {
         Person *p = lm->Back();
         if (p) {
             std::cout << p->GetName() << "\n";
         }
         else {
             std::cout << "N/A\n";
         }
      }
      // When the number is 9 erase
      else if(number == 9)
      {
         std::cout << "Enter position number: ";
         int pos = getValue();
         lm->Erase(pos);
      }
      // When the number is 10 - Clear the list
      else if(number == 10)
      {
         lm->Clear();
         lm->Show();
         std::cout << lm->ShowString();
      }
      // When the number is 11 we need to get the size of the list
      else if(number == 11)
      {
         std::cout << "size: " << lm->Size() << "\n";
      }

   } while (number != 12);
   GoodBye();
   return 0;
}

void WriteHeader()
{
    std::cout << "---------------\n";
    std::cout << "Menu\n";
    std::cout << "---------------\n\n";
}

void GoodBye()
{
    std::cout << "\n\nThanks for Watching my program:\n";
}

#include <iostream>
#include <sstream>
#include "ListMgr.h"
#include "PersonGen.h"

int getValue()
{
   string line;
   getline(std::cin, line);
   return(atoi(line.c_str()));
}

int main()
{
   ListMgr mgr;
   PersonGen gen;

   bool go = true;

   while(go)
   {
      std::cout << "---------------\n";
      std::cout << "Menu\n";
      std::cout << "---------------\n\n";

      std::cout << " 1 - show list\n";
      std::cout << " 2 - add to front of list\n";
      std::cout << " 3 - add to back of list\n";
      std::cout << " 4 - remove from front\n";
      std::cout << " 5 - remove from back\n";
      std::cout << " 6 - remove selected item\n";
      std::cout << " 7 - front\n";
      std::cout << " 8 - back\n";
      std::cout << " 9 - erase\n";
      std::cout << "10 - clear\n";
      std::cout << "11 - size\n";
      std::cout << "12 - quit\n";

      int value = getValue();

      if(value < 1 || value > 12)
      {
         std::cout << "invalid input\n";
         continue;
      }

      if(value == 1)
      {
         mgr.Show();
      }
      else if(value == 2)
      {
         mgr.Push_front(gen.GetNewPerson());
      }
      else if(value == 3)
      {
         mgr.Push_back(gen.GetNewPerson());
      }
      else if(value == 4)
      {
         mgr.Pop_front();
      }
      else if(value == 5)
      {
         mgr.Pop_back();
      }
      else if(value == 6)
      {
         string line;
         std::cout << "enter name string: ";
         getline(std::cin, line);

         mgr.Remove(line);
      }
      else if(value == 7)
      {
         Person *p = mgr.Front();

         if(p)
            std::cout << p->GetName() << "\n";
         else
            std::cout << "N/A\n";
      }
      else if(value == 8)
      {
         Person *p = mgr.Back();

         if(p)
            std::cout << p->GetName() << "\n";
         else
            std::cout << "N/A\n";
      }
      else if(value == 9)
      {
         std::cout << "Enter position number: ";
         int pos = getValue();

         mgr.Erase(pos);
      }
      else if(value == 10)
      {
         mgr.Clear();
      }
      else if(value == 11)
      {
         std::cout << "size: " << mgr.Size() << "\n";
      }
      else
      {
         go = false;
      }
   }
}

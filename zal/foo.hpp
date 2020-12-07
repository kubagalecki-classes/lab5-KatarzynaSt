#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
using namespace std;

vector<char> foo(list<Human>& people)
{
     vector<char>zwierzatko;
  // list< int >::iterator it = people.begin();

    for (auto it = people.rbegin(); it != people.rend(); it++)
     {
     it->birthday();
       
       if (it->isMonster()==true)
       {
         zwierzatko.emplace_back('n');
       }
       else 
       {
         zwierzatko.emplace_back('y'); 
       }
    }
    return {zwierzatko}; 
}
//
//  SecuritySystem.cpp
//  CS Group Project
//
//  Created by Katrina Bugyi on 5/31/14.
//  Copyright (c) 2014 Katrina Bugyi. All rights reserved.
//

#include "SecuritySystem.h"


int SecuritySystem::checkusername(string inputusername)//this is probably wrong cuz it needs to take a parameter
{
    for(int x=0;x<MAXCOUNT;X++)
    {
      if (inputusername==username[x])
      {
        index=x;
        return 0;//this will return 0 on success
      }
      return -1;//this will return this on failure
    }
}

int SecuritySystem::checkpassword(string inputpassword)
{
  if(password[index]==inputpassword)
  {
    return 0;//succcess
  }
  return -1; //failure
}

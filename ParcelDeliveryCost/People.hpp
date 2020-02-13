//
//  People.hpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef People_hpp
#define People_hpp

#include <iostream>
#include <string>

using namespace std;

class People{
private:
  string name;
  string address;
  string city;
  string postcode;

public:
  People(string, string, string, string);
  void printInfo();

};


#endif /* People_hpp */

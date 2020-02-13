//
//  People.cpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "People.hpp"
using namespace std;

People::People(string name, string address, string city, string postcode): name(name), address(address), city(city), postcode(postcode){
}

void People::printInfo(){
  cout<< "Name     : " << name <<endl;
  cout<< "Address  : " << address <<endl;
  cout<< "City     : " << city <<endl;
  cout<< "Post-Code: " << postcode <<endl;
}

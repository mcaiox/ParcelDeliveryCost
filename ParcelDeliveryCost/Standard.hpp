//
//  Standard.hpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef Standard_hpp
#define Standard_hpp

#include <iostream>
#include <string>
#include "People.hpp"
#include "Parcel.hpp"

using namespace std;

class Standard{
protected:
    const double standardCost = 2.6;
    People sender;
    People recipient;
    Parcel p;
public:
    Standard(People, People, Parcel);
    virtual double calcCost();
};

#endif /* Standard_hpp */

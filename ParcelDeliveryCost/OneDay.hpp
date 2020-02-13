//
//  OneDay.hpp
//  ParcelDeliveryCost
//
//  Created by chin on 13/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef OneDay_hpp
#define OneDay_hpp

#include <iostream>
#include "Standard.hpp"

class OneDay : public Standard{
public:
    OneDay(People, People, Parcel);
    double calcCost();
    
};

#endif /* OneDay_hpp */

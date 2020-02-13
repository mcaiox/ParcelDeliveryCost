//
//  TwoDay.hpp
//  ParcelDeliveryCost
//
//  Created by chin on 13/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef TwoDay_hpp
#define TwoDay_hpp

#include <iostream>
#include "Standard.hpp"

class TwoDay : public Standard{
public:
    TwoDay(People, People, Parcel);
    double calcCost();
    
};

#endif /* TwoDay_hpp */

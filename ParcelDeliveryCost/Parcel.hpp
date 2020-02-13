//
//  Parcel.hpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#ifndef Parcel_hpp
#define Parcel_hpp

#include <iostream>
#include <stdexcept>

class Parcel{
private:
    double weight;
public:
    Parcel(double);
    double getWeight();
    void setWeight(double);
};

#endif /* Parcel_hpp */

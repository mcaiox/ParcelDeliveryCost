//
//  OneDay.cpp
//  ParcelDeliveryCost
//
//  Created by chin on 13/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "OneDay.hpp"

OneDay::OneDay(People s, People r, Parcel p) : Standard(s, r, p){
    
}

double OneDay::calcCost()
{
    return ((p.getWeight() * 6.1)) ;
}

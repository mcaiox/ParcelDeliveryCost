//
//  TwoDay.cpp
//  ParcelDeliveryCost
//
//  Created by chin on 13/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "TwoDay.hpp"


TwoDay::TwoDay(People s, People r, Parcel p) : Standard(s, r, p){
    
}

double TwoDay::calcCost()
{
    return ((p.getWeight() * 2.6)+4) ;
}

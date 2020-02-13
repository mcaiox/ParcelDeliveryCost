//
//  Standard.cpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "Standard.hpp"

Standard::Standard(People s, People r, Parcel p): sender(s), recipient(r), p(p)
{
    
}

double Standard::calcCost()
{
    return p.getWeight() * 2.6;
}

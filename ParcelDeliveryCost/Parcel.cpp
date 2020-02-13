//
//  Parcel.cpp
//  ParcelDeliveryCost
//
//  Created by chin on 12/02/2020.
//  Copyright © 2020 chin. All rights reserved.
//

#include "Parcel.hpp"


using namespace std;

Parcel::Parcel(double weight)
{
    setWeight(weight);
    
}

double Parcel::getWeight()
{
    return weight;
}

void Parcel::setWeight(double weight)
{
    if(weight > 0.0)
        this->weight = weight;
    else
        throw invalid_argument("Parcel Weight must be >= 0.0");
        
    
    
}

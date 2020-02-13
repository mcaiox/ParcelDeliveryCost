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
    cout<<"------   Sender   ------"<<endl;
    sender.printInfo();
    cout<<"\n";
    cout<<"-----  Recipient   -----"<<endl;
    recipient.printInfo();
    cout<<"\n";
    cout<<"----  Delivery Cost ----"<<endl;
    cout<< "£";
    return ( (p.getWeight() * standardCost) + flatFee ) ;
}

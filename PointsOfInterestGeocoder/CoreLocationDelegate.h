//
//  CoreLocationDelegate.h
//  PointsOfInterestGeocoder
//
//  Created by Sebastian Bock on 06.10.14.
//  Copyright (c) 2014 Apptivity. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface CoreLocationDelegate : NSObject <CLLocationManagerDelegate>
+(CoreLocationDelegate*)sharedInstance;
-(instancetype)initWithLocationManager:(CLLocationManager*)locationManager geocoder:(CLGeocoder*)geocoder;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(BOOL)isAuthorized;
@end
//
//  CLExtensions.h
//  myNavigator
//
//  Created by H. Nikolaus Schaller on 08.11.11.
//  Copyright 2011 Golden Delicious Computers GmbH&Co. KG. All rights reserved.
//

#ifndef __mySTEP__

#ifndef __CLExtenstions__
#define __CLExtenstions__

// provides classes n/a on Mac OS X (10.6)

#import <MapKit/CLHeading.h>
#import <MapKit/CLPlacemark.h>
#import <MapKit/CLGeocoder.h>
#import <MapKit/CLRegion.h>

@interface NSBlockHandler : NSObject
{
	id delegate;
	SEL action;
}

+ (NSBlockHandler *) handlerWithDelegate:(id) delegate action:(SEL) action;
- (id) initWithDelegate:(id) delegate action:(SEL) action;
- (id) performSelector;
- (id) performSelectorWithObject:(id) obj;
- (id) performSelectorWithObject:(id) obj1 withObject:(id) obj2;

@end

typedef enum _CLLocationSource
{
	CLLocationSourceUnknown		= 0,
	CLLocationSourceGPS			= 1<<0,
	CLLocationSourceGLONASS		= 1<<1,
	CLLocationSourceGALILEO		= 1<<2,
	CLLocationSourceWLAN		= 1<<3,
	CLLocationSourceWWAN		= 1<<4,
	CLLocationSourceInertial	= 1<<5,
	CLLocationSourceExternalAnt	= 1<<15,
} CLLocationSource;

@interface CLLocationManager (Extensions)
+ (CLLocationSource) source;
+ (int) numberOfReceivedSatellites;
+ (int) numberOfVisibleSatellites;
+ (NSDate *) satelliteTime;
+ (NSArray *) satelliteInfo;
@end

#endif

#endif
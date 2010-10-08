//
//  MKUserLocation.h
//  MapKit
//
//  Created by H. Nikolaus Schaller on 20.10.09.
//  Copyright 2009 Golden Delicious Computers GmbH&Co. KG. All rights reserved.
//

#import <MapKit/MKAnnotation.h>

// This is a proxy for the core location data (and updates automatically)

@class CLLocation;
@class CLLocationManager;

@interface MKUserLocation : NSObject <MKAnnotation>
{
	CLLocationManager *manager;
	// @property (readonly, nonatomic) CLLocation *location;
	CLLocation *location;
	// @property (retain, nonatomic) NSString *subtitle;
	NSString *subtitle;
	// @property (retain, nonatomic) NSString *title;
	NSString *title;
	// @property (readonly, nonatomic, getter=isUpdating) BOOL updating;
}

- (CLLocation *) location;
- (BOOL) isUpdating;
- (void) setSubtitle:(NSString *) str;
- (void) setTitle:(NSString *) str;

@end

// EOF
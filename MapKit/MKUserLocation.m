//
//  MKUserLocation.m
//  MapKit
//
//  Created by H. Nikolaus Schaller on 20.10.09.
//  Copyright 2009 Golden Delicious Computers GmbH&Co. KG. All rights reserved.
//

#import <MapKit/MapKit.h>

@implementation MKUserLocation

- (void) locationManager:(CLLocationManager *) mngr didFailWithError:(NSError *) err;
{
	
}

- (void) locationManager:(CLLocationManager *) mngr didUpdateToLocation:(CLLocation *) newloc fromLocation:(CLLocation *) old;
{
	[location release];
	location=[newloc retain];
	// notify change according to MKAnnotation protocol?
#if 1
//	NSLog(@"old location: %@", old);
	NSLog(@"new location: %@", newloc);
#endif
}

- (id) init
{
	if((self=[super init]))
		{
		manager=[CLLocationManager new];
		[manager setDelegate:(id <CLLocationManagerDelegate>) self];
		[manager startUpdatingLocation];
		}
	return self;
}

- (void) dealloc
{
//	[manager stopUpdatingLocation];
//	[manager setDelegate:nil];
	[manager release];
	[subtitle release];
	[title release];
	[super dealloc];	
}

- (CLLocationCoordinate2D) coordinate; { return [location coordinate]; }
- (void) setCoordinate:(CLLocationCoordinate2D) pos; { return; }	// ignore
- (NSString *) subtitle; { return subtitle; }
- (NSString *) title; { return title; }

- (CLLocation *) location; { return location; }
- (BOOL) isUpdating; { return YES; }
- (void) setSubtitle:(NSString *) str; { [subtitle autorelease]; subtitle=[str retain]; }
- (void) setTitle:(NSString *) str; { [title autorelease]; title=[str retain];  }

@end

// EOF
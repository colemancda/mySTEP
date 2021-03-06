//
//  MKPolylineView.h
//  MapKit
//
//  Created by H. Nikolaus Schaller on 04.10.10.
//  Copyright 2009 Golden Delicious Computers GmbH&Co. KG. All rights reserved.
//

#import <MapKit/MKOverlayPathView.h>

@interface MKPolylineView : MKOverlayPathView
- (id) initWithPolyline:(MKPolyline *) polyline;
- (MKPolyline *) polyline;
@end

// EOF

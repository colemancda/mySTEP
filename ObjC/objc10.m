//
//  objc10.m
//  objc2pp
//
//  Created by H. Nikolaus Schaller on 14.03.13.
//  Copyright 2013 Golden Delicious Computers GmbH&Co. KG. All rights reserved.
//

#import "objc10.h"


@implementation Node (Objc10)

- (void) compile_objc1_default;
{
	return;	// leave untouched
}

// check for idioms
// . notation for KVC
// @try, @catch
// @synchronized
// @synthesize
// @autorelease
// ARC

- (void) compile_objc1try
{
	
}

@end
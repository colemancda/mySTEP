//
//  UIResponder.h
//  UIKit
//
//  Created by H. Nikolaus Schaller on 06.03.08.
//  Copyright 2008 Golden Delicious Computers GmbH&Co. KG. All rights reserved.
//
//  based on http://www.cocoadev.com/index.pl?UIKit
//

#import <Cocoa/Cocoa.h>

@class GSEvent;

@interface UIResponder : NSObject {
	NSResponder *_responder;	// the wrapped NSWindow or NSView or subclass
}

- (id) _initWithNSResponder:(NSResponder *) responder;	// call instead of [super init] -> [super _initWithNSResponder:proxy]

- (void) mouseDown:(GSEvent *) event;
- (void) mouseUp:(GSEvent *) event;
- (void) mouseDragged:(GSEvent *) event;
- (void) keyDown:(GSEvent *) event;
- (void) keyUp:(GSEvent *) event;

@end

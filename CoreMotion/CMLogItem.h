//
//  CMLogItem.h
//  CoreMotion
//
//  Created by H. Nikolaus Schaller on 12.10.11.
//  Copyright 2011 quantumstep. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CMLogItem : NSObject <NSCoding, NSCopying>
{

}

- (NSTimeInterval) timestamp;	// since last boot

@end

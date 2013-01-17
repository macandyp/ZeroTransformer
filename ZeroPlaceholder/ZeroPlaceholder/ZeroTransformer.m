//
//  ZeroTransformer.m
//  ZeroPlaceholder
//
//  Created by Andy on 1/16/13.
//  Copyright (c) 2013 Peartree Devs. All rights reserved.
//

#import "ZeroTransformer.h"

@implementation ZeroTransformer

+(Class)transformedValueClass {
    return [NSString class];
}

-(id)transformedValue:(id)value {
    if (value == nil) {
        return nil;
    } else {
        if ([value integerValue] == 0) {
            return @"";
        } else {
            return [NSString stringWithFormat:@"%@", [value stringValue]];
        }
    }
}

@end

//
//  YRDropdownViewBlue.m
//  YRDropdownExample
//
//  Created by Jon Beebe on 8/23/12.
//  Copyright (c) 2012 One Mighty Roar. All rights reserved.
//

#import "YRDropdownViewBlue.h"

@implementation YRDropdownViewBlue

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColors = [NSMutableArray arrayWithObjects:[UIColor colorWithRed:0.416 green:0.600 blue:0.824 alpha:1.000], [UIColor colorWithRed:0.125 green:0.255 blue:0.541 alpha:1.000], nil];
        self.backgroundColorPositions = [NSMutableArray arrayWithObjects:[NSNumber numberWithFloat:0.0f], [NSNumber numberWithFloat:1.0f], nil];
        
        self.titleTextColor = [UIColor colorWithWhite:0.9 alpha:1.0];
        self.titleShadowColor = [UIColor colorWithWhite:0 alpha:0.25];
        
        self.detailTextColor = [UIColor colorWithWhite:0.9 alpha:1.0];
        self.detailShadowColor = [UIColor colorWithWhite:0 alpha:0.25];
    }
    return self;
}

@end

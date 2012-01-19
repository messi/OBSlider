//
//  OBSlider.h
//
//  Created by Ole Begemann on 02.01.11.
//  Copyright 2011 Ole Begemann. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface OBSlider : UISlider
{
    float scrubbingSpeed;
    NSArray *scrubbingSpeeds;
    NSArray *scrubbingSpeedChangePositions;
    
    CGPoint beganTrackingLocation;
	
    float realPositionValue;
}

@property (atomic, assign, readonly) float scrubbingSpeed;
@property (atomic, strong) NSArray *scrubbingSpeeds;
@property (atomic, strong) NSArray *scrubbingSpeedChangePositions;

@end

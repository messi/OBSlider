//
//  OBSliderDemoViewController.h
//  OBSliderDemo
//
//  Created by Ole Begemann on 03.01.11.
//  Copyright 2011 Ole Begemann. All rights reserved.
//

#import <UIKit/UIKit.h>


@class OBSlider;

@interface OBSliderDemoViewController : UIViewController 
{
    OBSlider *slider;
    UILabel *sliderValueLabel;
    UILabel *scrubbingSpeedLabel;
}

@property (atomic, strong) IBOutlet OBSlider *slider;
@property (atomic, strong) IBOutlet UILabel *sliderValueLabel;
@property (atomic, strong) IBOutlet UILabel *scrubbingSpeedLabel;

- (IBAction) sliderValueDidChange:(id)sender;

@end


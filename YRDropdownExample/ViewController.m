//
//  ViewController.m
//  YRDropdownViewExample
//
//  Created by Eli Perkins on 1/27/12.
//  Copyright (c) 2012 One Mighty Roar. All rights reserved.
//

#import "ViewController.h"
#import "YRDropdownView.h"

@interface ViewController ()

@end

@implementation ViewController
@synthesize demoView;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)viewDidUnload
{
    [self setDemoView:nil];
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation != UIInterfaceOrientationPortraitUpsideDown);
}

- (IBAction)showInView:(id)sender {
    
    //example using UIColour and image gradient
    [YRDropdownView showDropdownInView:self.view title:@"background ui colour test" detail:@"testing testing 123" image:nil animated:YES hideAfter:0.0 setUIcolor:[UIColor colorWithRed:1 green:0 blue:0 alpha:1]];
    // example using a green image..
   // [YRDropdownView showDropdownInView:self.view title:@"" detail:@"" image:nil animated:YES hideAfter:5 setBackgroundImage:@"green"];
}

- (IBAction)showInWindow:(id)sender {
    [YRDropdownView showDropdownInWindow:self.view.window 
                               title:@"Warning" 
                              detail:nil
                               image:nil
                            animated:NO
                           hideAfter:0.0];
}

- (IBAction)hide:(id)sender {
    [YRDropdownView hideDropdownInView:demoView animated:YES];
}
- (void)dealloc {
    [demoView release];
    [super dealloc];
}
@end

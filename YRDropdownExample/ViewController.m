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
    [YRDropdownView showDropdownInView:demoView 
                             title:@"Warning" 
                            detail:@"Me too! I want to try a really long detail message to see how it handles the line breaks and what not. Here's to hoping it works right the first time!" 
                             image:[UIImage imageNamed:@"dropdown-alert"]
                          animated:YES
                         hideAfter:3];
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

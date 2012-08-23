//
//  YRDropdownView.h
//  YRDropdownViewExample
//
//  Created by Eli Perkins on 1/27/12.
//  Copyright (c) 2012 One Mighty Roar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface YRDropdownView : UIView
{
    NSString *titleText;
    NSString *detailText;
    UILabel *titleLabel;
    UILabel *detailLabel;
    UIImage *accessoryImage;
    UIImageView *accessoryImageView;
    SEL onTouch;
    NSDate *showStarted;
    BOOL shouldAnimate;
}

@property (nonatomic, copy) NSString *titleText;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, strong) UIImage *accessoryImage;
@property (nonatomic, assign) float minHeight;
@property (nonatomic, assign) SEL onTouch;
@property (nonatomic, assign) BOOL shouldAnimate;
@property (nonatomic, strong) NSMutableArray * backgroundColors;
@property (nonatomic, strong) NSMutableArray * backgroundColorPositions;
@property (nonatomic, strong) UIColor * titleTextColor;
@property (nonatomic, strong) UIColor * titleShadowColor;
@property (nonatomic, strong) UIColor * detailTextColor;
@property (nonatomic, strong) UIColor * detailShadowColor;
@property (nonatomic, assign, readonly) BOOL isView;

#pragma mark - View methods

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                              animated:(BOOL)animated;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                              animated:(BOOL)animated;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                              animated:(BOOL)animated
                             hideAfter:(float)delay;

+ (BOOL)hideDropdownInView:(UIView *)view;
+ (BOOL)hideDropdownInView:(UIView *)view animated:(BOOL)animated;

+ (void)setRtl:(BOOL)rtl;

#pragma mark -
- (void)show:(BOOL)animated;
- (void)hide:(BOOL)animated;
- (void)flipViewToOrientation:(NSNotification *)notification;

@end

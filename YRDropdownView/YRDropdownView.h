//
//  YRDropdownView.h
//  YRDropdownViewExample
//
//  Created by Eli Perkins on 1/27/12.
//  Copyright (c) 2012 One Mighty Roar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

typedef void (^YRTapBlock)(void);

@interface YRDropdownView : UIView
{
    NSString *titleText;
    NSString *detailText;
    UILabel *titleLabel;
    UILabel *detailLabel;
    //UIImage *backgroundImage;
    UIImageView *backgroundImageView;
    //UIImage *accessoryImage;
    UIImageView *accessoryImageView;
    UIColor *titleLabelColor;
    UIColor *detailLabelColor;
    SEL onTouch;
    NSDate *showStarted;
    BOOL shouldAnimate;
    
    YRTapBlock          _tapBlock;
    dispatch_queue_t    _tapQueue;
}

@property (copy) NSString *titleText;
@property (copy) NSString *detailText;

#if !(__has_feature(objc_arc))
@property (nonatomic, retain) UIImage *accessoryImage;
@property (nonatomic, retain) UIImage *backgroundImage;
#else
@property (nonatomic, strong) UIImage *accessoryImage;
@property (nonatomic, strong) UIImage *backgroundImage;
#endif

@property (assign) float minHeight;
@property (retain) UIColor *titleLabelColor;
@property (retain) UIColor *detailLabelColor;
@property (nonatomic, assign) SEL onTouch;
@property (assign) BOOL shouldAnimate;

@property (nonatomic, copy) YRTapBlock  tapBlock;

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

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                       backgroundImage:(UIImage *)backgroundImage
                              animated:(BOOL)animated
                             hideAfter:(float)delay;

+ (YRDropdownView *)showDropdownInView:(UIView *)view
                                 title:(NSString *)title
                                detail:(NSString *)detail
                                 image:(UIImage *)image
                       backgroundImage:(UIImage *)backgroundImage
                       titleLabelColor:(UIColor *)titleLabelColor
                      detailLabelColor:(UIColor *)detailLabelColor
                              animated:(BOOL)animated
                             hideAfter:(float)delay;

+ (BOOL)hideDropdownInView:(UIView *)view;
+ (BOOL)hideDropdownInView:(UIView *)view animated:(BOOL)animated;

#pragma mark -
- (void)show:(BOOL)animated;
- (void)hide:(BOOL)animated;

-(void)setTapBlock:(YRTapBlock)tapBlock
         withQueue:(dispatch_queue_t)dispatchQueue;


@end

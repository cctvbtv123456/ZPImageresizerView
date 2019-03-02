//
//  ViewController.m
//  ZPImageresizerView
//
//  Created by Justin on 2019/2/28.
//  Copyright © 2019 Justin. All rights reserved.
//

#import "ViewController.h"
#import "ZPImageresizerView/ZPImageresizerViewHeader.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    ZPImageresizerView *imgeresizerView = [[ZPImageresizerView alloc] initWithResizeImage:[UIImage imageNamed:@"Girl.jpg"] frame:self.view.frame maskType:ZPDarkBlurMaskType frameType:ZPConciseFrameType animationCurve:ZPAnimationCurveEaseInOut strokeColor:[UIColor lightGrayColor] bgColor:[UIColor whiteColor] maskAlpha:0/3 verBaseMargin:5 horBaseMargin:5 resizeWHScale:0 contentInsets:UIEdgeInsetsMake(0, 0, 0, 0) imageresizerIsCanRecovery:^(BOOL isCanRecovery) {
        
    } imageresizerIsPrepareToScale:^(BOOL isPrepareToScale) {
        
    }];
                                           
                                           
   [self.view addSubview:imgeresizerView];
}


@end

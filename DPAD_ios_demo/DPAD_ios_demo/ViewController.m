//
//  ViewController.m
//  DPAD_ios_demo
//
//  Created by kdh on 2017. 6. 23..
//  Copyright © 2017년 AresJoy. All rights reserved.
//

#import "ViewController.h"
#import <DPADFramework/DPADFramework.h>

@interface ViewController ()
- (IBAction)showOfferWall:(id)sender;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [DPManager sharedManager].userID = @"TEST";
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - IBAction
- (void)showOfferWall:(id)sender {
    [[DPManager sharedManager] showOFW];
}


@end

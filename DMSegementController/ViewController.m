//
//  ViewController.m
//  DMSegementController
//
//  Created by Amon   Deng on 2016/9/22.
//  Copyright © 2016年 Amon. All rights reserved.
//

#import "ViewController.h"
#import "oneViewController.h"
#import "DMSegementViewController.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    oneViewController * one = [[oneViewController alloc] init];
    oneViewController * two = [[oneViewController alloc] init];

    DMSegementViewController * dm = [DMSegementViewController segementControllerWithFrame:self.view.frame titles:@[@"one",@"two"]];
    [dm setSegementTintColor:[UIColor grayColor]];
    [dm setViewControllers:@[one,two]];

     [dm selectedAtIndex:^(NSInteger index) {
        NSLog(@"index %ld",index);
    }];
     [self.view addSubview:dm.view];
     [self addChildViewController:dm];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

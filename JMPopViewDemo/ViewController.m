//
//  ViewController.m
//  JMPopViewDemo
//
//  Created by juuman on 16/5/26.
//  Copyright (c) 2016年 Juuman. All rights reserved.
//

#import "ViewController.h"
#import "JMPopView.h"

@interface ViewController ()<JMPopViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction)btnDidClicked:(id)sender{
    JMPopView *view=[[JMPopView alloc]initWithSender:sender];
    view.delegate=self;
    [view showView];
    //    [view reInitViewWithSender:sender];
}

- (UIView *)contentViewOfJMPopView:(JMPopView *)popview{
    UIView *view=[[UIView alloc]initWithFrame:CGRectMake(0, 0, 250, 200)];
    //        [view.layer setCornerRadius:8.0];
    //        [view.layer setMasksToBounds:YES];
    view.backgroundColor=[UIColor whiteColor];
    return view;
}

@end

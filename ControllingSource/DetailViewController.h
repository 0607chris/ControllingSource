//
//  DetailViewController.h
//  ControllingSource
//
//  Created by M-Learning HKUSPACE on 7/4/14.
//  Copyright (c) 2014 M-Learning HKUSPACE. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

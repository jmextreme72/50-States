//
//  WTDetailViewController.h
//  50 States
//
//  Created by Tech on 2/23/14.
//  Copyright (c) 2014 Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

//
//  WTMasterViewController.h
//  50 States
//
//  Created by Tech on 2/23/14.
//  Copyright (c) 2014 Tech. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WTDetailViewController;

#import <CoreData/CoreData.h>

@interface WTMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) WTDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

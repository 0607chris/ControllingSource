//
//  MasterViewController.h
//  ControllingSource
//
//  Created by M-Learning HKUSPACE on 7/4/14.
//  Copyright (c) 2014 M-Learning HKUSPACE. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end

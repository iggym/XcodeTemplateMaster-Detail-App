//
//  XcTMasterViewController.h
//  Master-Detail-App
//
//  Created by Iggy Mwangi on 7/5/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XcTDetailViewController;

@interface XcTMasterViewController : UITableViewController

@property (strong, nonatomic) XcTDetailViewController *detailViewController;

@end

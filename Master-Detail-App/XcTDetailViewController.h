//
//  XcTDetailViewController.h
//  Master-Detail-App
//
//  Created by Iggy Mwangi on 7/5/13.
//  Copyright (c) 2013 Iggy Mwangi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XcTDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

//
//  INFMainMenuViewController.h
//  Simon
//
//  Created by Justin Sacbibit on 2/20/2014.
//  Copyright (c) 2014 influxd software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface INFMainMenuViewController : UIViewController <UIAlertViewDelegate>
@property (strong, nonatomic) IBOutlet UIButton *resumeButton;
- (IBAction)newGameButtonPressed:(id)sender;

@end

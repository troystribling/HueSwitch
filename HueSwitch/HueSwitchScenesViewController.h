//
//  HueSwitchScenesViewController.h
//  HueSwitch
//
//  Created by Troy Stribling on 3/1/14.
//  Copyright (c) 2014 gnos.us. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HueSwitchScenesViewController : UITableViewController

@property(nonatomic, retain) BlueCapPeripheral*     connectedPeripheral;

- (void)peripheralDiscoveryComplete:(NSNotification*)notification;

@end

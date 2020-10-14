//
//  DTAChatViewController.h
//  DatingApp
//
//  Created by Maksim on 09.10.15.
//  Copyright © 2015 Cleveroad Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DTABaseViewController.h"
#import "HPGrowingTextView.h"


@interface DTAChatViewController : DTABaseViewController<HPGrowingTextViewDelegate,UITableViewDataSource, UITableViewDelegate> {
    UIView                                              *containerView;
    HPGrowingTextView                                   *textView;
    UIButton                                            *doneBtn;
}
@property (nonatomic, strong) NSString *titleString;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *friendId;
@property (nonatomic, strong) NSString *chatId;
@property (nonatomic, assign) BOOL isFriendDeleted;
@property (strong, nonatomic) User *detailedUser;

    
@end

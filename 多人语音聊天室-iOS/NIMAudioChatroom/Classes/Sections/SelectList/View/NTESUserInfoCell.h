//
//  NTESUserInfoCell.h
//  NIMAudioChatroom
//
//  Created by Netease on 2019/3/6.
//  Copyright © 2019年 netease. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NTESUserInfoCell : UITableViewCell

- (void)refresh:(NIMChatroomMember *)member;

@end

NS_ASSUME_NONNULL_END

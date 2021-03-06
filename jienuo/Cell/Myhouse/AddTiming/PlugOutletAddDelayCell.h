//
//  PlugOutletAddDelayCell.h
//  gleadSmart
//
//  Created by 安建伟 on 2019/4/23.
//  Copyright © 2019 杭州轨物科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^switchBlock)(BOOL isOn);

@interface PlugOutletAddDelayCell : UITableViewCell

@property (strong, nonatomic) UILabel *leftName;
@property (strong, nonatomic) UISwitch *timeSwitch;
@property (nonatomic, strong) switchBlock switchBlock;

@end

NS_ASSUME_NONNULL_END

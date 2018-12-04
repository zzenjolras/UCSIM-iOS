//
//  UCSCustomMsg.h
//  ucsimlib
//
//  Created by Barry on 15/12/2.
//  Copyright © 2017年 快用云. All rights reserved.
//

#import "UCSMsgContent.h"

/*!
 *  @brief  自定义消息
 */
@interface UCSCustomMsg : UCSMsgContent

/*!
 *  @brief 传输的字节流。大小请不要超过64K。
 */
@property (strong, nonatomic) NSData *data;



/*!
 *  @brief  构建自定义消息对象
 *
 *  @param data 自定义消息体
 *
 *  @return 自定义消息对象
 */
+ (instancetype)initWithData:(NSData *)data;

/*!
 *  @brief  构建自定义消息对象
 *
 *  @param data 自定义消息体
 *
 *  @return 自定义消息对象
 */
- (instancetype)initWithData:(NSData *)data;

@end

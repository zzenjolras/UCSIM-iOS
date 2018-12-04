//
//  UCSTextMsg.h
//  ucsimlib
//
//  Created by FredZhang on 15/5/5.
//  Copyright (c) 2017年 快用云. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UCSMsgContent.h"


/*!
 *  @brief  文本消息类型，继承UCSMsgContent
 */
@interface UCSTextMsg : UCSMsgContent


/*!
*  @brief  文本消息内容,字节长度请不要超过1500
*/
@property(nonatomic, copy) NSString *content;


/*!
 *  @brief  保留字段,暂时未被使用
 */
@property(nonatomic, copy) NSString *extra;


/**
 *  构建一条文本消息
 *  @param content 消息内容
 *  @return 一条文本消息
 */
+ (instancetype)initWithContent:(NSString *)content;

@end

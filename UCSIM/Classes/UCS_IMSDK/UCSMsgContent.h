//
//  UCSMsgContent.h
//  ucsimlib
//
//  Created by FredZhang on 15/5/5.
//  Copyright (c) 2017年 快用云. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>



/*!
 *  @brief  UCSMsgContent是一个消息内容的基类,作为UCSTextMsg、UCSImageMsg等消息内容类的父类。
 */

@interface UCSMsgContent : NSObject

/*!
 *  @brief  Push消息内容
 */
@property(nonatomic, copy) NSString *pushContent;

/*!
 *  @brief  保留字段,暂时未被使用
 */
@property(nonatomic, strong, setter=setRawData:) NSData *rawData;

@end

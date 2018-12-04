//
//  UCSVideoMsg.h
//  ucsimlib
//
//  Created by bojan on 15/9/1.
//  Copyright (c) 2017年 快用云. All rights reserved.
//

#import "UCSMsgContent.h"

@interface UCSFileMsg : UCSMsgContent

/*!
 *  @brief  文件的二进制流。(发送文件时，必填)
 */
@property(nonatomic, strong) NSData* fileData;
/*!
 *  @brief  文件的本地路径。
 */
@property(nonatomic, strong) NSString* filePath;
/*!
 *  @brief  文件的名称(例如"a.txt" or "b.mp4" or "c.amr")。 (发送文件时，必填)
 */
@property(nonatomic, strong) NSString* fileName;
/*!
 *  @brief  文件的后缀名称(例如".txt" or ".mp4" or ".amr")。
 */
@property(nonatomic, strong) NSString* fileExt;


/*!
 *  @brief  保留字段,暂时未被使用
 */
@property(nonatomic, strong) NSString* extra;

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

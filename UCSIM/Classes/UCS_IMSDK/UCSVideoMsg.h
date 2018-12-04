//
//  UCSVideoMsg.h
//  ucsimlib
//
//  Created by bojan on 15/9/1.
//  Copyright (c) 2017年 快用云. All rights reserved.
//

#import "UCSCustomMsg.h"

@interface UCSVideoMsg : UCSMsgContent

/*!
 *  @brief  文件的名称(例如"b.mp4")。 (发送视频时，必填)
 */
@property(nonatomic, strong) NSString* videoName;

/*!
 *  @brief 视频的二进制数据。 (发送视频时，必填)
 */
@property (strong, nonatomic) NSData *videoData;

/*!
 *  @brief  视频的本地路径。
 */
@property(nonatomic, strong) NSString* videoPath;



/*!
 *  @brief 视频的二进制数据。 (发送视频时，必填)
 */
@property (strong, nonatomic) NSData *videoThumbnailsData;

/*!
 *  @brief  视频缩略图的本地路径。
 */
@property(nonatomic, strong) NSString* videoThumbnailsPath;

/*!
 *  @brief  视频时长
 */
@property(nonatomic, assign) long duration;

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

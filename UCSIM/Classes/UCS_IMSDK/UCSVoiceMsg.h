//
//  UCSVoiceMsg.h
//  ucsimlib
//
//  Created by FredZhang on 15/5/5.
//  Copyright (c) 2017年 快用云. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UCSMsgContent.h"


/*!
 *  @brief  语音消息类型，继承UCSMsgContent。
 
            发送语音时，填充 amrAudioData、duration这两个字段,voicePath不需要填充
 
            接收语音时 或者 获取聊天记录时，voicePath、duration这两个字段有值,amrAudioData为空
 */
@interface UCSVoiceMsg : UCSMsgContent

/*!
 *  @brief  AMR格式的data。(发送语音的时，必填)
 */
@property(nonatomic, strong) NSData *amrAudioData;

/*!
 *  @brief  语音的本地路径。(接收语音时，这个参数存放语音在本地的地址)
 */
@property(nonatomic, copy) NSString *voicePath;

/*!
 *  @brief  语音时长。(发送语音时，必填)
 */
@property(nonatomic, assign) long duration;

/*!
 *  @brief  保留字段,暂时未被使用
 */
@property(nonatomic, copy) NSString *extra;


/**
 *  构建一条语音消息
 *  @param amrAudioData amr格式的语音数据流
 *  @param duration     时长
 *  @return 一条语音消息
 */
+(instancetype)initWithAmrAudioData:(NSData *)amrAudioData
                           duration:(long)duration;

@end

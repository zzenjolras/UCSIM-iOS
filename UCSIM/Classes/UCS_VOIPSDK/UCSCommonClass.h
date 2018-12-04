//
//  UCSCommonClass.h
//  ucsapisdk
//
//  Created by tongkucky on 14-4-2.
//  Copyright (c) 2014年 yzx. All rights reserved.
//

#import <Foundation/Foundation.h>


/* Camera capture preset*/
typedef enum
{
    /* Camera capture preset suitable for 640x480 video output */
    UCS_VIE_PROFILE_PRESET_640x480,
    /* Camera capture preset suitable for 1280x720 video output */
    UCS_VIE_PROFILE_PRESET_1280x720,
} UCSVideoProfilePreset;


@interface UCSCommonClass : NSObject
@end


//错误码
@interface UCSReason : NSObject

@property (nonatomic,assign) NSInteger reason;   //错误码
@property (nonatomic,copy) NSString *msg;        //错误原因
@property (nonatomic,copy) NSString *callId;     //消息发送者callID

@end





//视频编码参数设置
@interface UCSVideoEncAttr : NSObject
@property (nonatomic, assign) NSInteger uStartBitrate;  // 开始码率
@property (nonatomic, assign) NSInteger uMaxBitrate;    //最大码率
@property (nonatomic, assign) NSInteger uMinBitrate;    //最小码率
@end


//视频分级编码参数设置
@interface UCSHierEncAttr : NSObject

@property (nonatomic, assign) NSInteger low_complexity_w240;
@property (nonatomic, assign) NSInteger low_complexity_w360;
@property (nonatomic, assign) NSInteger low_complexity_w480;
@property (nonatomic, assign) NSInteger low_complexity_w720;
@property (nonatomic, assign) NSInteger low_bitrate_w240;
@property (nonatomic, assign) NSInteger low_bitrate_w360;
@property (nonatomic, assign) NSInteger low_bitrate_w480;
@property (nonatomic, assign) NSInteger low_bitrate_w720;
@property (nonatomic, assign) NSInteger low_framerate_w240;
@property (nonatomic, assign) NSInteger low_framerate_w360;
@property (nonatomic, assign) NSInteger low_framerate_w480;
@property (nonatomic, assign) NSInteger low_framerate_w720;
@property (nonatomic, assign) NSInteger medium_complexity_w240;
@property (nonatomic, assign) NSInteger medium_complexity_w360;
@property (nonatomic, assign) NSInteger medium_complexity_w480;
@property (nonatomic, assign) NSInteger medium_complexity_w720;
@property (nonatomic, assign) NSInteger medium_bitrate_w240;
@property (nonatomic, assign) NSInteger medium_bitrate_w360;
@property (nonatomic, assign) NSInteger medium_bitrate_w480;
@property (nonatomic, assign) NSInteger medium_bitrate_w720;
@property (nonatomic, assign) NSInteger medium_framerate_w240;
@property (nonatomic, assign) NSInteger medium_framerate_w360;
@property (nonatomic, assign) NSInteger medium_framerate_w480;
@property (nonatomic, assign) NSInteger medium_framerate_w720;
@property (nonatomic, assign) NSInteger high_complexity_w240;
@property (nonatomic, assign) NSInteger high_complexity_w360;
@property (nonatomic, assign) NSInteger high_complexity_w480;
@property (nonatomic, assign) NSInteger high_complexity_w720;
@property (nonatomic, assign) NSInteger high_bitrate_w240;
@property (nonatomic, assign) NSInteger high_bitrate_w360;
@property (nonatomic, assign) NSInteger high_bitrate_w480;
@property (nonatomic, assign) NSInteger high_bitrate_w720;
@property (nonatomic, assign) NSInteger high_framerate_w240;
@property (nonatomic, assign) NSInteger high_framerate_w360;
@property (nonatomic, assign) NSInteger high_framerate_w480;
@property (nonatomic, assign) NSInteger high_framerate_w720;
@end



//摄像头取景分辨率设置
@interface UCSCameraAttr : NSObject

@property (nonatomic,assign) BOOL isUseCustomDec;     //是否使用自定义参数 (分辨率、帧率)   YES:使用自定义摄像头参数 NO:使用默认参数
@property (nonatomic,assign) NSInteger uWidth;        //采集的视频分辨率 : 宽
@property (nonatomic,assign) NSInteger uHeight;       //采集的视频分辨率 : 高
@property (nonatomic,assign) NSInteger uMaxFramerate; // 帧率

@end




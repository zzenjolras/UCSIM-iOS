//
//  UCSCallService.h
//  yzxapisdk
//
//  Created by tongkucky on 14-4-2.
//  Copyright (c) 2014年 yzx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "UCSCommonClass.h"
#import "UCSEvent.h"
#import "UCSVideoDefine.h"


@interface UCSService : NSObject

#pragma mark - -------------------音视频引擎初始化配置接口-----------------------
/**
 * 初始化实例
 */
- (UCSService *)initWithDelegate:(id<UCSEventDelegate>)delegate;


/**
 * 设置代理方法
 */
-(void)setDelegate:(id< UCSEventDelegate>)delegate;

/**
 * 获取SDK版本信息
 */
- (NSString*)getUCSSDKVersion;

/**
 * 设置当前网络是否是IPV6，默认IPV4，建议在初始化完成后设置，也可在拨打电话之前设置。
 * @param isIpv6 NO:不是IPv6  YES:是IPv6
 */
- (void)setIpv6:(BOOL)isIpv6;

#pragma mark - -------------------互联网音频通话能力接口-----------------------
/**
 * 发起呼叫
 * @param callType 电话类型 0 语音电话  2 视频电话
 * @param called userid号码
 */
- (void)dial:(NSInteger)callType andCalled:(NSString *)calledNumber andUserdata:(NSString *)callerData;

/**
 * 释放通话
 * @param callid 电话id
 */
- (void)hangUp: (NSString*)callid;

/**
 * 接听来电
 * @param callid 电话id
 */
- (void)answer: (NSString*)callid;

/**
 * 拒绝来电(挂断一样,当被呼叫的时候被呼叫方的挂断状态)
 * @param callid 电话id
 */
- (void)reject: (NSString*)callid;

/**
 * 发送DTMF
 * @param dtmf 键值
 */
- (BOOL)sendDTMF: (char)dtmf;

/**
 * 设置扬声器状态
 * @param enable NO:关闭 YES:打开
 */
- (void)setSpeakerphone:(BOOL)enable;

/**
 * 获取扬声器状态
 * @return NO:关闭 YES:打开
 */
- (BOOL)isSpeakerphoneOn;

/**
 * 设置静音状态
 * @param on NO:正常 YES:静音
 */
- (void)setMicMute:(BOOL)on;

/**
 * 获取静音状态
 * @return NO 正常 YES 静音
 */
- (BOOL)isMicMute;

/**
 * Push续活通知
 */
- (void)callIncomingPushRsp:(NSString*)callid  withVps:(NSInteger)vpsid withReason:(UCSReason*)reason;

/**
 * 2g网络检测开关
 * @param on YES:发起呼叫时不检测2g网络  NO:发起呼叫时检测2g网络
 */
-(void)set2GNetWorkOn:(BOOL)enable;


#pragma mark - -------------------互联网视频通话能力接口------------------------
/**
 * 设置视频显示窗台（本地视频显示控件和对方视频显示控件）
 * 参数 frame 窗口大小
 * @return UIView 视频显示控件:
 */
- (UIView *)allocCameraViewWithFrame:(CGRect)frame;

/**
 * 设置视频显示参数
 * 参数 localVideoView 设置本地视频显示控件
 * 参数 remoteView     设置对方视频显示控件
 * 参数 renderMode     设置对方视频渲染模式：全屏模式、黑边模式
 * @return NO:  YES:
 */
-(BOOL)initCameraConfig:(UIView*)localVideoView withRemoteVideoView:(UIView*)remoteView withRender:(UCSRenderMode)renderMode;


/**
 * 获取摄像头个数
 */
- (int)getCameraNum;

/**
 * 前后摄像头切换 后置摄像头：0 前置摄像头：1
 * @return YES 成功 NO 失败
 */
- (BOOL)switchCameraDevice:(UCSSwitchCameraType)CameraIndex;

/**
 * 切换视频模式：发送、接收、正常模式
 *
 * @param type         CAMERA_RECEIVE : 只接收视频数据（只能接收到对方的视频）
                       CAMERA_SEND    : 只发送视频数据（只让对方看到我的视频）
                       CAMERA_NORMAL  : send receive preview
 * @return YES 成功 NO 失败
 */
- (BOOL)switchVideoMode:(UCSCameraType)type;


/**
 * 用户自定义编码参数
 * @param ucsVideoEncAttr 编码参数
 */
- (void)setVideoAttr:(UCSVideoEncAttr*)ucsVideoEncAttr ;


/**
 * 用户自定义分级编码参数
 * @param ucsHierEncAttr 编码参数
 */
- (void)setHierEncAttr:(UCSHierEncAttr*)ucsHierEncAttr ;

/**
 * 设置视频参数
 * @param preset 视频参数
 */
-(void)setVideoPreset:(UCSVideoProfilePreset) preset;

/**
 * 设置是否使用硬编硬解
 * @param HwEnc 是否使用硬编硬解
 */
-(void)setVideoIsUseHwEnc:(bool)HwEnc;

/**
 * 开启/关闭视频来电预览
 * isPreView: YES 支持预览 NO 不支持预览。
 * @return YES 成功 NO 失败
 */
- (BOOL)setCameraPreViewStatu:(BOOL)isPreView;

/**
 * 获取来电时是否支持预览
 * @return YES 支持预览 NO 不支持预览
 */
- (BOOL)isCameraPreviewStatu;

/**
 * 旋转视频
 * Desc: 当呼叫成功、或 接听成功时重新需要重新设置此方法
 * @param landscape       竖屏：0 
 * @param localRotation  本地端显示图像角度  数值为0 90 180 270
 */
- (BOOL)setRotationVideo:(unsigned int)landscape andRecivied:(unsigned int)localRotation;

/**
 * 视频截图
 * @param islocal: 0 是远端截图 1 是本地截图。
 * @param filename: 截图名称。
 * @param savePath: 存放路径。
 */
- (void)cameraCapture:(int)islocal withFileName:(NSString*)filename withSavePath:(NSString*)savePath;


/**
 * 设置rtp包加密控制开关，默认不支持加密
 * enable: YES 支持加密 NO 不支持加密
 * return YES 成功 NO 失败
 */
- (BOOL)setRTPEncEnable:(BOOL)enable;

/**
 * 设置AGC音效增益
 * plus: 增益系数。
 * @return YES 成功 NO 失败
 */
- (BOOL)setAGCPlus:(int)compressionGain targetDbfs:(int)targetDbfs;



/**
 语音或视频同振

 @param callType 呼叫类型 0 语音同振  2 视频同振
 @param numbers 呼叫的号码数组，号码不要超过5个
 */
- (void)groupDialWithType:(NSInteger)callType numbers:(NSArray<NSString *> *)numbers;






@end

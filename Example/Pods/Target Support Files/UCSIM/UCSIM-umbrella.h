#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "UCSConversation.h"
#import "UCSCustomMsg.h"
#import "UCSDiscussion.h"
#import "UCSDiscussionNotification.h"
#import "UCSFileMsg.h"
#import "UCSImageMsg.h"
#import "UCSIMClient.h"
#import "UCSIMClientDelegate.h"
#import "UCSIMDefine.h"
#import "UCSIMSDK.h"
#import "UCSLocationMsg.h"
#import "UCSMessage.h"
#import "UCSMsgContent.h"
#import "UCSTextMsg.h"
#import "UCSUnknownMsg.h"
#import "UCSUserInfo.h"
#import "UCSVideoMsg.h"
#import "UCSVoiceMsg.h"
#import "UCSError.h"
#import "UCSTcpClient.h"
#import "UCSTCPCommonClass.h"
#import "UCSTcpDefine.h"
#import "UCSTCPDelegateBase.h"
#import "UCSTCPSDK.h"

FOUNDATION_EXPORT double UCSIMVersionNumber;
FOUNDATION_EXPORT const unsigned char UCSIMVersionString[];


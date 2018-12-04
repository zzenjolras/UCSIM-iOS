//
//  UCSUserInfo.h
//  ucsimlib
//
//  Created by FredZhang on 15/5/5.
//  Copyright (c) 2017年 快用云. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 *  @brief  用户信息类型.
 */
@interface UCSUserInfo : NSObject

/*!
 *  @brief  用户ID。(必填)
 */
@property(nonatomic, copy) NSString *userId;

/*!
 *  @brief  昵称。(选填)
 */
@property(nonatomic, copy) NSString *name;

/*!
 *  @brief  头像URL.(选填)
 */
@property(nonatomic, copy) NSString *portraitUri;


/**
 *  构建一个用户基本信息对象
 *  @param userId     用户id
 *  @param name       昵称
 *  @param portraiUri 头像uri
 *  @return 用户基本信息对象
 */
+ (instancetype)initWithUserId:(NSString *)userId
                          name:(NSString *)name
                   portraitUri:(NSString *)portraiUri;


@end

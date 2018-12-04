//
//  UCSTCPDelegateBase.h
//  ucstcplib
//
//  Created by Barry on 15/11/11.
//  Copyright © 2017年 快用云. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UCSError.h"
@class UCSTCPTransParent;



@protocol UCSTCPDelegateBase <NSObject>

#pragma mark 连接状态

/*!
 *  @brief  连接状态变化时
 *
 *  @param connectionStatus 连接状态
 *  @param error            错误描述
 */
- (void)didConnectionStatusChanged:(UCSConnectionStatus)connectionStatus  error:(UCSError *) error;


#pragma mark 数据透传

/**
 *  @brief 收到透传数据时回调
 *
 *  @param objcts 透传实体类
 */
- (void)didReceiveTransParentData:(UCSTCPTransParent *)objcts;



@end

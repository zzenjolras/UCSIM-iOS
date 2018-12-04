//
//  UCSTcpDefine.h
//  ucsimlib
//
//  Created by FredZhang on 15/5/5.
//  Copyright (c) 2017年 快用云. All rights reserved.
//

#ifndef ucsimlib_UCSTcpDefine_h
#define ucsimlib_UCSTcpDefine_h


/*!
 @enum
 @brief    推送环境
 @constant UCSPushEnvironment_Develop      开发环境
 @constant UCSPushEnvironment_Production       生产环境
 */
typedef enum{
    
    /** 开发环境 */
    UCSPushEnvironment_Develop = 1,
    
    /** 线上环境 */
    UCSPushEnvironment_Production,
    
}UCSPushEnvironment;



/*!
 @enum
 @brief    登陆的方式
 @constant UCS_ClientLogin      账号登陆，旧的登陆方式
 @constant UCS_TokenLogin       token登陆，新的登陆方式
 */
typedef enum
{
    /** 账号密码登陆 */
    UCS_ClientLogin = 1,
    
    /** token登陆 */
    UCS_TokenLogin = 2,
}UCSTCPLoginType;



/*!
 @enum
 @brief    网络类型
 @constant UCSNotReachable       没网
 @constant UCSReachableViaWiFi   wifi
 @constant UCSReachableViaWWAN   3G/GPRS网络
 @constant UCSReachableVia2G     2G
 @constant UCSReachableVia3G     3G
 @constant UCSReachableVia4G     4G
 @constant UCSReachableViaLTE    准4G
 @constant UCSReachableViaUnknown    未知类型
 */
typedef enum {
    UCSNotReachable = 0,
    UCSReachableViaWiFi,
    UCSReachableViaWWAN,
   	UCSReachableVia2G,
    UCSReachableVia3G,
    UCSReachableVia4G,
    UCSReachableViaLTE,
    UCSReachableViaUnknown
} UCSNetworkStatus;




/*!
 @enum
 @brief    连接状态
 @constant UCSConnectionStatus_loginSuccess       连接成功,非重连
 @constant UCSConnectionStatus_ConnectFail        连接失败，非重连
 @constant UCSConnectionStatus_AbnormalDisconnection   异常断开
 @constant UCSConnectionStatus_DidReConnect     开始重连
 @constant UCSConnectionStatus_ReConnecting     正在重连
 @constant UCSConnectionStatus_ReConnectSuccess 重连成功
 @constant UCSConnectionStatus_ReConnectFail    重连失败
 @constant UCSConnectionStatus_BeClicked     账号在别处登录,被强行下线
 @constant UCSConnectionStatus_SignOut       主动断开
 */
typedef enum {
    UCSConnectionStatus_loginSuccess = 0,
    UCSConnectionStatus_ConnectFail,
    UCSConnectionStatus_AbnormalDisconnection,
    UCSConnectionStatus_StartReConnect,
    UCSConnectionStatus_ReConnecting,
    UCSConnectionStatus_ReConnectSuccess,
    UCSConnectionStatus_ReConnectFail,
    UCSConnectionStatus_BeClicked,
    UCSConnectionStatus_SignOut
} UCSConnectionStatus;




/*!
 @enum
 @brief    错误码
 @constant ErrorCode_NoError      没有错误
 @constant ErrorCode_UnKnown      未知错误
 @constant ErrorCode_ConnectToServerFail       连接服务器失败
 @constant ErrorCode_TIMEOUT        连接超时
 @constant ErrorCode_BeClicked      被别人踢下线
 @constant ErrorCode_InvalidToken      无效的token或者与appid不符合
 @constant ErrorCode_InvalidUser       用户不存在
 @constant ErrorCode_IncorrectPassword      密码错误
 @constant ErrorCode_InvalidMessage       无效的消息
 @constant ErrorCode_InvalidGroud      无效的群组
 @constant ErrorCode_InvalidDiscussion       无效的讨论组
 @constant ErrorCode_UpdateDiscussionNameFail      修改讨论组名字失败
 @constant ErrorCode_CreateDiscussionFail       创建讨论组失败
 @constant ErrorCode_MemberIsNotInGroud      用户不在群组中
 @constant ErrorCode_MemberIsNotInDiscussion       用户不在讨论组中
 @constant ErrorCode_DeleteMemberFail      删除成员失败
 @constant ErrorCode_AddMemberFail       邀请成员失败
 @constant ErrorCode_UploadFileFail      文件上传失败
 @constant ErrorCode_downLoadFileFail       文件下载失败
 @constant ErrorCode_RecoderTooShort      录音时间过短
 @constant ErrorCode_FileFormatIsNotSupported       文件格式不支持
 @constant ErrorCode_MessageLengthTooLong      消息内容过长
 @constant ErrorCode_SelectFromDataBaseFail      读取本地数据库失败
 @constant ErrorCode_UpdateDataBaseFail     写入、更新数据库失败
 @constant ErrorCode_SendMessageFail       消息发送失败
 @constant ErrorCode_SendMessageTimeOut    消息发送超时
 @constant ErrorCode_MembersError          成员列表错误
 @constant ErrorCode_ExitDiscussionError    退出讨论组错误
 @constant ErrorCode_MethodParamError       方法参数错误
 @constant ErrorCode_MessageTypeError      消息格式错误
 @constant ErrorCode_NetworkIsNotConnected       网络未连接
 @constant ErrorCode_NetworkTypeIsChanged   网络类型切换
 @constant ErrorCode_InitError      初始化加载失败(包括数据库加载)
 @constant ErrorCode_ReConnectToServerFail      服务器重连失败
 @constant ErrorCode_ErrorIPAddress   错误IP地址
 @constant ErrorCode_PacketParsingError 包解析错误
 @constant ErrorCode_ErrorPullProxy             服务器获取cps失败
 @constant ErrorCode_WrongLoginInfo   登陆信息错误
 @constant ErrorCode_OppositeSideIsNotOnline   透传数据时对方不在线
 @constant ErrorCode_Unreachable   透传数据时数据不可达
 @constant ErrorCode_LastTimeNoResponse   透传数据时，上一次透传请求未响应
 @constant ErrorCode_ClearDataFail  清除数据失败
 @constant ErrorCode_NonSupportVersion  透传数据时，对方版本不支持
 @constant ErrorCode_TCPDisconnect  透传数据时，TCP连接已经断开
 @constant ErrorCode_InvalidData  透传数据时，发送数据为空
 @constant ErrorCode_EncryptingFail  透传数据时，加密失败
 @constant ErrorCode_EmptyMessage  透传数据时，透传数据为空
 @constant ErrorCode_QueryReceiverOnlineStatusFailed  透传数据时，查询接收方在线状态失败
 @constant ErrorCode_DataException  透传数据时，数据异常
 */
typedef enum
{
    
    /**    没有错误  */
    ErrorCode_NoError = 400000,
    
    /**   未知错误 */
    ErrorCode_UnKnown = 401000,
    
    /**   连接服务器失败 */
    ErrorCode_ConnectToServerFail = 401100,
    
    /**   超时 */
    ErrorCode_TIMEOUT = 401101,
    
    /**  被别人踢下线 */
    ErrorCode_BeClicked = 4001102,
    
    /**  无效的token或者与appid不符合 */
    ErrorCode_InvalidToken = 4001103,
    
    /**    用户不存在 */
    ErrorCode_InvalidUser = 4001104,
    
    /**   密码错误 */
    ErrorCode_IncorrectPassword = 4001105,
    
    /**   无效的消息，null或者nil  */
    ErrorCode_InvalidMessage = 4023000,
    
    /**    无效的群组,传入的群组不存在 */
    ErrorCode_InvalidGroud = 402301,
    
    /**    无效的讨论组,传入的讨论组不存在 */
    ErrorCode_InvalidDiscussion = 402302,
    
    /**    修改讨论组名字失败*/
    ErrorCode_UpdateDiscussionNameFail = 402303,
    
    /**    创建讨论组失败  */
    ErrorCode_CreateDiscussionFail = 402304,
    
    /**    用户不在群组中  */
    ErrorCode_MemberIsNotInGroud = 402305,
    
    /**    用户不在讨论组中 */
    ErrorCode_MemberIsNotInDiscussion = 402306,
    
    /**    删除成员失败 */
    ErrorCode_DeleteMemberFail = 402307,
    
    /**    邀请成员失败 */
    ErrorCode_AddMemberFail = 402308,
    
    /**    文件上传失败  */
    ErrorCode_UploadFileFail = 402309,
    
    /**    文件下载失败   */
    ErrorCode_downLoadFileFail = 402310,
    
    /**    录音时间过短*/
    ErrorCode_RecoderTooShort = 402311,
    
    /**    文件格式不支持  */
    ErrorCode_FileFormatIsNotSupported = 402312,
    
    /**    消息内容过长 */
    ErrorCode_MessageLengthTooLong = 402313,
    
    /**    读取本地数据库失败 */
    ErrorCode_SelectFromDataBaseFail = 402314,
    
    /**    写入、更新数据库失败   */
    ErrorCode_UpdateDataBaseFail = 402315,
    
    
    /**    发送消息失败 */
    ErrorCode_SendMessageFail = 402316,
    
    /**    消息发送超时 */
    ErrorCode_SendMessageTimeOut = 402317,
    
    /**    成员列表错误  */
    ErrorCode_MembersError = 402318,
    
    /**    退出讨论组错误 */
    ErrorCode_ExitDiscussionError = 402319,    
    
    /**    方法参数错误(参数格式不对,参数不符合方法要求，空值等) */
    ErrorCode_MethodParamError = 403600,
    
    /**    消息格式错误   */
    ErrorCode_MessageTypeError = 403601,
    
    /**    网络未连接  */
    ErrorCode_NetworkIsNotConnected = 403602,
    
    /**    网络类型切换  */
    ErrorCode_NetworkTypeIsChanged = 4036021,
    
    /**    初始化加载失败(包括数据库加载) */
    ErrorCode_InitError = 403603,

    /**    服务器重连失败     */
    ErrorCode_ReConnectToServerFail = 403604,
    
    /**    错误IP地址     */
    ErrorCode_ErrorIPAddress = 403605,

    /**    包解析错误     */
    ErrorCode_PacketParsingError = 403606,
    
    /**   获取cps数据失败    */
    ErrorCode_ErrorPullProxy = 403607,
    
    /**   登陆信息错误    */
    ErrorCode_WrongLoginInfo = 403608,
    
    /**   透传数据时对方不在线    */
    ErrorCode_OppositeSideIsNotOnline = 405000,
    
    /**   透传数据时数据不可达    */
    ErrorCode_Unreachable = 405001,
    
    /**   透传数据时，上一次透传请求未响应*/
    ErrorCode_LastTimeNoResponse = 405002,
    
    /**   清除数据失败 **/
    ErrorCode_ClearDataFail = 405003,
    
    /**   透传数据时，对方版本不支持 **/
    ErrorCode_NonSupportVersion = 405004,
    
    /**   透传数据时，TCP连接已经断开 **/
    ErrorCode_TCPDisconnect = 405005,
    
    /**   透传数据时，发送数据为空 **/
    ErrorCode_InvalidData = 405006,
    
    /**   透传数据时，加密失败 **/
    ErrorCode_EncryptingFail = 405007,
    
    /**   透传数据时，透传数据为空 **/
    ErrorCode_EmptyMessage = 405008,
    
    /**   透传数据时，查询接收方在线状态失败 **/
    ErrorCode_QueryReceiverOnlineStatusFailed = 405009,
    
    /**   透传数据时，数据异常 **/
    ErrorCode_DataException = 405010,
    
}UCSErrorCode;





#endif


//
//  CommonMacros.h
//  CP-Fitness
//
//  Created by 张敬 on 2017/10/26.
//  Copyright © 2017年 Jing Zhang. All rights reserved.
//

#ifndef CommonMacros_h
#define CommonMacros_h

#pragma mark ------- 微信/QQ登陆注册ID ----------
#define WXApi_ID  @"wxe97b0560b2922730"
#define WXApi_Secret @"c66d35ff38e4c19b9c5b546f8bc35e84"

#define WXApi_BaseUrl @"https:api.weixin.qq.com/sns"

#define WXApi_Key_AccessToken @"access_token"
#define WXApi_Key_OpenId @"openid"
#define WXApi_Key_RefreshToken @"refresh_token"

#define QQ_ID @"1104796618"


#pragma mark ------- JMessage  ----------

#define JMessage_Appkey @"f4bb353825d2be3954a8ba00"          //用户端appkey
#define JMessage_Appkey_boss @"7dae58f4752ad64224a49f5b"     //商户端极光appkey
#define JMessage_Channel @"App Store"

//MARK:  ----------  阿里云OSS  ----------------
#define AliYunOSS_AccessKeyId          @"LTAIG8mgeCotYKSX"                      //阿里云OSS
#define AliYunOSS_AccessKeySecret      @"x8ve9VTztUPVU6IqTubCFSnmhDzTP1"        //
#define AliYunOSS_Endpoint             @"https://oss-cn-hangzhou.aliyuncs.com"  //
#define AliYunOSS_AvatarUrlHeader      @"https://xxtgava.oss-cn-hangzhou.aliyuncs.com"  //
#define AliYunOSS_STSTOKEN_KEY         @"http://*.*.*.*:*/sts/getsts"

//MARK   ------ 用户信息字段 ------

//
#define kIsLoginUserDefaultKey      @"xxtg_boss_isLogin"
#define kUserPhone                  @"xxtg_boss_userPhone"      //手机号
#define kUserSid                    @"xxtg_boss_userSid"        //sid

#define kUserCookie                 @"xxtg_boss_userCookie"     //webView的cookie
#define kUserAvatar                 @"xxtg_boss_userAvatar"     //头像地址
#define kUserId                     @"xxtg_boss_userId"         //用户id

#define kUserGender                 @"xxtgUserGender"           //用户性别
#define kUserOpenId                 @"xxtgUserOpenId"
#define kUserAccessToken            @"xxtgUserAccessToken"
#define kUserName                   @"xxtgUserName"             //用户名

#define kUserUniqueIdentifier       @"xxtgUserUniqueIdentifier"  //用户唯一标识符
#define kUserToKen                  @"xxtgUserToKen"            //用户Token

#define kChatServiceUserName        @"kefu"             //聊天模块 客服的 用户名userName
#define kChatServiceNickName        @"商家客服"           //聊天模块 客服的 昵称nickName

#define kLocationTitleKey           @"xxtgLocationTitle"             //当前定位存储的key
#define kLocationDetailAddressKey   @"xxtgLocationDetailAddress"    //当前定位存储的key
#define kLocationLongitudeKey       @"xxtgLocationLongitude"             //当前定位存储的key
#define kLocationLatitudeKey        @"xxtgLocationLatitude"             //当前定位存储的key



//用户头像占位图
#define kUserHeadImgPlaceHolder     @"login_icon"
//商户模块 分类储存的数据
#define kShopCategoryDataKey           @"xxtg_client_shopCategoryData"

//#define kUserHeadImgUrl             @"xxtgUserHeadImgUrl"       //用户头像地址
//#define kUserNickName               @"xxtg_boss_userNickName"   //昵称


//MARK: - key
#define kWebViewCookieKey           @"0122_we7_wmall_manager_session_2" //webView中cookie的key


#pragma mark ------ 百度地图 --------
#define BaiDuMap_Key    @"IBRBZ-6QS6X-ASU4Q-Z6PCJ-ADLH7-FCBBD"          //百度地图 key

#pragma mark ------- 讯飞 -------------
#define XUNFEI_APPID           @"5b5539c2"      //讯飞appID

//通知名
#define kLoginSuccessNotification   @"xxtgLoginSuccessNotification"     //登陆成功通知
#define kLogoutSuccessNotification  @"xxtgLogoutSuccessNotification"    //退出登录通知
#define kDBMigrateFinishNotification @"DBMigrateFinishNotification"     //极光IM相关通知
#define kLoginFailNotification      @"xxtgLoginFailNotification"    //授权登录失败的通知
#define kChangeBadgeNumberNotification  @"xxtgChangeBadgeNumberNotification"  //修改聊天未读消息通知
#define kUserTokenOutTimeNotification   @"xxtgUserTokenOutTimeNotification" //token已过期/失效
#define  EnterForeground @"UIApplicationDidBecomeActiveNotification" //定位通知


#pragma mark - 动画统一时间
#define AnimationTime 0.25



#endif /* CommonMacros_h */

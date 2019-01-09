
//
//  URLMacros.h
//  CP-Fitness
//
//  Created by 张敬 on 2017/10/26.
//  Copyright © 2017年 Jing Zhang. All rights reserved.
//

#ifndef URLMacros_h
#define URLMacros_h

#pragma mark ------- Secret -------
#define APP_Version @"ios_6_1_5"
#define APP_ID @"ios_test_id"
#define APP_Auth_Session @"9bcc4fcc292343407024008f03889947"
#define APP_Bi_Session_Id @"B5A28B8C-5D2A-4392-8288-462C5D2A43A14744181631768655760"
#define APP_Channel_Code @""
#define APP_Device_Token @""

#define App_Dvc_Id @"B5A28B8C-5D2A-4392-8288-462C5D2A43A1"
#define APP_Ios_Idfa @"D027F887-0570-4EF7-8FC4-22207E6A1907"
#define APP_Ios_Mac @"02%3A00%3A00%3A00%3A00%3A00"
#define APP_Ios_Openudid @"2adc797a0439d4984a20ffff5defa4d0e670c4e2"
#define APP_Ios_Uuid @"19BB2773-DE1F-445E-A777-A6980F259D0C"
#define APP_No_encrypt @"0"
#define APP_Params @""
#define APP_Regid @""
#define APP_TimeStamp @"1524644798"
#define APP_Session @"19BB2773-DE1F-445E-A777-A6980F259D0C"
#define APP_Sign @"9cbaf58a29b2aad1870cc6e2211e84ee"

//新增请求验证secret
#define XXTG_Client_Request_Secret     @"xxtgClientRequestSecret"


#pragma mark ------- Server --------


#define URL_Server  @"https://www.ourdaidai.com" //服务器地址

#if DEBUG
//测试环境相关
#define URL_New_Server  @"https://devapi.ourxiuxiu.com/api/" //测试服务器地址

#else
//正式环境相关
#define URL_New_Server  @"https://www.ourdaidai.com/v/api/" //正式服务器地址

#endif


#pragma mark ------- Home_New ----------


#pragma mark ------- Merchants_New ----------

#pragma mark ------- Order_New ---------- getCusotmerOrders
#define URL_Mine_SwitchShop @"/CI/index.php/StoreMy/switchStore" //切换店铺
#define URL_Order_Lists @"takeAway/getCusotmerOutSaleOrders" //订单列表
#define URL_OrderDetails_Lists @"takeAway/getCusotmerOutSaleOrderInfo" //订单详情列表
#define URL_Order_CreateComme @"takeAway/createComment" //订单提交评论
#define URL_UpLoadImage @"uploadImage"  //统一图片上传路径
#define URL_Order_RefundDetails  @"takeAway/getOrderRefundInfo" //退款详情
#define URL_Order_CreateOrderPay @"order/createOrder" //统一支付接口
#define URL_Order_ChangeUserInformation @"updateCustomerInfo" //修改用户信息
#define URL_Order_Change @"updateOutSaleOrderStatus" //订单修改

#pragma mark ------- Login_New ----------
#define URL_Login_Captcha @"getCaptcha" //图形验证码
#define URL_Login_SendMsg @"sendMsg" //发送短息验证码
#define URL_Login_App @"login"  //登陆


#pragma mark ------- Mine_New ----------
#define URL_Mine_UserInformation @"getCustomerCenterInfo"  //用户中心
#define URL_Mine_Task @"task/getTask"  //任务中心列表
#define URL_Mine_TaskRecordList @"taskRecord/getProgressRecord"  //任务记录列表
#define URL_Mine_ReceiveTask @"taskRecord/receiveTask"  //领取任务


#pragma mark ------- 捞红包 ----------
#define URL_RedBag_Chance @"redPack/getLastCnt" //获取用户剩余捞红包次数
#define URL_RedBag_Finish @"redPack/fishingRedPack" //捞红包
#define URL_RedBag_CountDown @"redPack/getPoolInfo" //获取红包活动倒计时详情


#pragma mark ----- 充值 ------
#define URL_Pay_List   @"order/getPayList"   //获取用户订单充值记录
#define URL_Pay_WithdrawCash   @"createCustomerWithdrawCash"  //获取用户订单充值记录
#define URL_Pay_WithdrawalInformation   @"getCustomerWithdrawCash"  //获取用户提现信息
#define URL_Pay_Top_up  @"pay/getRechargeInfo"    //充值界面充多少返多少
#define URL_Pay_GetBill  @"store/getBill"        //获取买单信息
#define URL_Pay_PayOrder  @"order/payOrder"        //订单下单



#pragma mark ----- 红包 ------
#define URL_RedBag_List @"getCustomerRedPackages" //获取用户剩余捞红包次数
#define URL_RedBag_OrderRecord @"redPack/getOrderRecordShareInfo" //获取订单红包信息页
#define URL_RedBag_ThrowPool @"redPack/putOrderRecodeToRedPack" //返现红包扔进红包池


#pragma mark ------- Home ----------
#define URL_Home_Nav @"/CI/index.php/home/nav"
#define URL_Home_HomePage @"/CI/index.php/Home/location"
#define URL_Home_Store @"/CI/index.php/Store/money"
#define URL_Home_IsBusiness @"/CI/index.php/Store/business"
#define URL_Home_SearchHistoryGoods @"/CI/index.php/Search/historySearch"
#define URL_Home_SearchGoodsByKeyBoard @"/CI/index.php/Search/search"



//Ambitus
#pragma mark ------- City ----------
#define URL_City_List @"/CI/index.php/location/address"
#define URL_Perimeter_List @"/CI/index.php/location/perimeter"
#define URL_Search_List @"/CI/index.php/location/search"
#define URL_LocationHome_List @"/CI/index.php/location/locationhome"

#define URL_LocationList_Change @"/CI/index.php/location/rbac"
#define URL_LocationList_Check @"/CI/index.php/location/sel"




#pragma mark ------- Cart ----------
#define URL_Cart_List @"/CI/index.php/order/cart"
#define URL_Cart_OkBtn @"/CI/index.php/Order/orderStatus"


#pragma mark ------- Merchants ----------
#define URL_Merchants_GoodsList  @"/CI/index.php/Search/storeCateGory"
#define URL_Merchants_StoreList  @"/CI/index.php/Search/storeSearch"



//MARK: - HtML加载地址
//我的模块webview加载的地址
#define URL_HTML_MineWebViewURL  @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=shop&op=index&do=mobile&m=we7_wmall"
//id=1140
#define URL_HTML_ShopWebViewURL @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=order&op=takeout&ta=detail&do=mobile&m=we7_wmall"
//注册页面加载的url地址
#define URL_HTML_RegisterWebViewURL @"https://www.ourdaidai.com/app/index.php?i=2&c=entry&ctrl=manage&ac=auth&op=register&do=mobile&m=we7_wmall"


#endif /* URLMacros_h */

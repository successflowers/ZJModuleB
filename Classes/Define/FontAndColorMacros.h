
//
//  FontAndColorMacros.h
//  CP-Fitness
//
//  Created by 张敬 on 2017/10/26.
//  Copyright © 2017年 Jing Zhang. All rights reserved.
//

#ifndef FontAndColorMacros_h
#define FontAndColorMacros_h

#pragma mark - 颜色
#define KClearColor         [UIColor clearColor]
#define KWhiteColor         [UIColor whiteColor]
#define KBlackColor         [UIColor blackColor]
#define KGrayColor          [UIColor grayColor]
#define KGray2Color         [UIColor lightGrayColor]
#define KBlueColor          [UIColor blueColor]
#define KRedColor           [UIColor redColor]
#define KYellowColor        [UIColor yellowColor]


#define RGB(r,g,b)          RGBA(r,g,b,1.0)
#define RGBA(r,g,b,a)       [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define mRandomColor        RGB(arc4random()%255/255.0, arc4random()%255/255.0, arc4random()%255/255.0)  //随机色生成
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define xxtg_color_red          UIColorFromRGB(0xff4848)  //红色按钮颜色
#define xxtg_lineColor_gray     UIColorFromRGB(0xd9d9d9)    //分割线颜色
#define xxtg_bgcolor            RGB(245,248,250)    //背景颜色
#define xxtg_color_titleText    UIColorFromRGB(0x333333)    //字体标题颜色
#define xxtg_color_contentText  UIColorFromRGB(0x666666)    //字体正文颜色
#define xxtg_color_timeText     UIColorFromRGB(0x999999)    //字体时间颜色

#define mMainColor  UIColorFromRGB(0xFF2842) //下划线颜色//#FF2842 100%
#define mBackgroudColor RGB(246, 248, 250) 
#define mTarBarSelectedColor RGB(204, 204, 204)
#define mTabBarBackgroundColor RGB(250, 250, 250)
#define mFontColor RGB(152, 152, 152)
#define mIconLineColor RGB(221, 222, 225)

#pragma mark - 字体
#define mBlodFont(n)[UIFont boldSystemFontOfSize:n]
#define mFontByNameAndSize(name, size)    [UIFont fontWithName:(name) size:(name)]
#define mFont(n) [UIFont systemFontOfSize:n] // 汉字方正准圆简体
#define mMediumFont(n)   [UIFont systemFontOfSize:n weight:UIFontWeightMedium] 

#endif /* FontAndColorMacros_h */

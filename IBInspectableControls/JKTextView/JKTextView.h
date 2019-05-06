//
//  JKTextView.h
//  XMTextView
//
//  Created by anfa on 2019/5/5.
//  Copyright © 2019 XM. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 文字最多字符数量显示类型 **/
typedef enum {
    JKMaxNumStateNormal = 0,  // 默认模式（0/200）
    JKMaxNumStateDiminishing = 1,  // 递减模式（200）
} JKMaxNumState;

/** 返回输入监听内容 */
typedef void(^JKBackText)(NSString * _Nonnull textViewStr);

NS_ASSUME_NONNULL_BEGIN

IB_DESIGNABLE

@interface JKTextView : UIView

/** 是否设置边框 （默认 Yes） */
@property (nonatomic, assign) BOOL isSetBorder;

/** 上边距 (默认8)*/
@property (nonatomic, assign) IBInspectable CGFloat topSpace;

/** 左 右 边距 (默认8)*/
@property (nonatomic, assign) IBInspectable CGFloat leftAndRightSpace;

/** 边框线颜色 */
@property (nonatomic, strong) IBInspectable UIColor *borderLineColor;

/** 边宽线宽度 */
@property (nonatomic, assign) IBInspectable CGFloat borderLineWidth;

/** textView的内容 */
@property (nonatomic, copy) IBInspectable NSString *text;

/** textView 文字颜色 (默认黑色) */
@property (nonatomic, strong) IBInspectable UIColor *textColor;

/** textView 字体大小 (默认14) */
@property (nonatomic, strong) IBInspectable UIFont *textFont;

/** 占位文字 (默认：请输入内容) */
@property (nonatomic, strong) IBInspectable NSString *placeholder;

/** placeholder 文字颜色 (默认[UIColor grayColor]) */
@property (nonatomic, strong) IBInspectable UIColor *placeholderColor;

/** 文字最多数量 (默认200个字符)*/
@property (nonatomic, assign) IBInspectable int textMaxNum;

/** Num 文字颜色 (默认黑色) */
@property (nonatomic, strong) IBInspectable UIColor *maxNumColor;

/** Num 字体大小 (默认12) */
@property (nonatomic, strong) IBInspectable UIFont *maxNumFont;

/** Num 样式 （默认 0/200） */
@property (nonatomic, assign) IBInspectable JKMaxNumState maxNumState;

/** 返回输入监听内容 */
@property (nonatomic, copy) JKBackText textViewListening;

@end

NS_ASSUME_NONNULL_END

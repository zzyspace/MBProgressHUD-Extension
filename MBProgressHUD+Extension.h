//
//  MBProgressHUD+Extension.h
//
//  Created by Ryan on 15/8/11.
//

#import "MBProgressHUD.h"

/**
 *  MBProgressHUD 封装分类
 *
 *  Tips: 使用需要手动 `+hideHUD` 的方法时, 建议指定 `toView`.
 *  因为没有指定 `toView`, 则默认将 HUD 加到最上层的 window.
 *  如果显示 HUD 过程中有涉及 window 的变化, 会导致调用 `+hideHUD`
 *  失效等异常问题.
 *
 */
@interface MBProgressHUD (Extension)

/**
 *  显示文字, 默认1.5秒后自动消失
 */
+ (void)showText:(NSString *)message;
+ (void)showText:(NSString *)message toView:(UIView *)view;
+ (void)showText:(NSString *)message toView:(UIView *)view duration:(NSTimeInterval)duration completion:(void (^)(void))completion;

/**
 *  显示成功指示器, 默认1.5秒后自动消失
 */
+ (void)showSuccess:(NSString *)message;
+ (void)showSuccess:(NSString *)message toView:(UIView *)view;
+ (void)showSuccess:(NSString *)message toView:(UIView *)view duration:(NSTimeInterval)duration completion:(void (^)(void))completion;

/**
 *  显示失败指示器, 默认1.5秒后自动消失
 */
+ (void)showError:(NSString *)message;
+ (void)showError:(NSString *)message toView:(UIView *)view;
+ (void)showError:(NSString *)message toView:(UIView *)view duration:(NSTimeInterval)duration completion:(void (^)(void))completion;

/**
 *  显示等待指示器, 消失需要调用 `+hideHUD`
 */
+ (MBProgressHUD *)showWaiting;
+ (MBProgressHUD *)showWaiting:(NSString *)message toView:(UIView *)view;

/**
 *  显示进度, 消失需要调用 `+hideHUD`
 *
 *  调用`-setProgress:`设置进度
 */
+ (MBProgressHUD *)showProgress:(NSString *)message;

/**
 *  隐藏指示器
 */
+ (void)hideHUD;
+ (void)hideHUD:(BOOL)animated;
+ (void)hideHUDForView:(UIView *)view;

@end

//
//  DMSegementViewController.h
//  DMSegementController
//
//  Created by Amon   Deng on 2016/9/22.
//  Copyright © 2016年 Amon. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, DMSegementStyle) {
    DMSegementStyleDefault,    /**< 指示杆和按钮的标题齐平*/
    DMSegementStyleFlush,      /**< 指示杆和按钮宽度齐平*/
};
@interface DMSegementViewController : UIViewController
@property (nonatomic, strong) UIColor *segementTintColor;   /**< 选中时的字体颜色，默认黑色*/
@property (nonatomic, strong) NSArray *viewControllers;
@property (nonatomic, strong) UIScrollView *segementView;
@property (nonatomic, assign) DMSegementStyle style;

+ (instancetype)segementControllerWithFrame:(CGRect)frame titles:(NSArray <NSString *>*)titles;
- (instancetype)initWithFrame:(CGRect)frame titles:(NSArray *)titles;
- (void)setSegementViewControllers:(NSArray <UIViewController *>*)viewControllers;
/**
 返回当前被选中的item的下标
 */
- (NSInteger)selectedAtIndex;
- (void)selectedAtIndex:(void(^)(NSInteger index))indexBlock;
/**
 手动指定选中的item
 */
- (void)setSelectedItemAtIndex:(NSInteger)index;
@end

//
//  JMPopView.h
//  popview
//
//  Created by datayes on 16/5/20.
//  Copyright © 2016年 datayes. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JMPopView;

typedef enum {
    defult = 0,
    up  = 1,
    down  = 2,
//    left =3,
//    right = 4,
}TriangleDirection;//箭头方向

//typedef enum {
//    TopToBottom = 0,
//    BottomToTop = 1,
//}Animate;


@protocol JMPopViewDelegate <NSObject>

@required

//返回内容view
- (UIView *)contentViewOfJMPopView:(JMPopView *)popview;


@optional
/*
 *-------内容属性--------
 */
//返回内容view的origin;
- (CGPoint)originOfContentView;


/*
 *-------箭头属性---------
 */
//返回箭头方向
-(TriangleDirection)triangleViewDirection;

//返回箭头颜色
-(UIColor *)colorOfTriangleView;

//返回箭头的大小
-(CGSize)sizeOfTriangleView;



/*
 *-------背景属性---------
 */
//是否显示内容区外的背景
-(BOOL)showBackground;

//返回内容区外的背景颜色
-(UIColor *)colorOfBackground;


@end



@interface JMPopView : UIView{

}

@property (nonatomic, weak) id <JMPopViewDelegate> delegate;

//初始化
- (id)initWithSender:(id)sender;

//显示view
-(void)showView;

//关闭view
-(void)closeView;

//刷新view
-(void)reInitViewWithSender:(id)sender;



@end

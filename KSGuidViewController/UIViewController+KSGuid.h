//
//  UIViewController+KSGuid.h
//  test
//
//  Created by kong on 16/7/21.
//  Copyright © 2016年 孔. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (KSGuid)<UICollectionViewDataSource,UICollectionViewDelegate,UIScrollViewDelegate>

//运行时的控制器，外部不用调用即可实现GuidView,可以修改下面的图片

@end

//这里是要展示的图片，修改即可
#define ImageArray @[@"欢迎页1",@"欢迎页2",@"欢迎页3"]
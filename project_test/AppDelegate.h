//
//  AppDelegate.h
//  project_test
//
//  Created by 文弥 on 2021/12/13.
//

#import <UIKit/UIKit.h>
typedef NS_OPTIONS(NSUInteger, LAUIViewControllerVisibleState) {
    LAUIViewControllerUnknow        = 1 << 0,   // 初始化完成但尚未触发 viewDidLoad
    LAUIViewControllerViewDidLoad   = 1 << 1,   // 触发了 viewDidLoad
    LAUIViewControllerWillAppear    = 1 << 2,   // 触发了 viewWillAppear
    LAUIViewControllerDidAppear     = 1 << 3,   // 触发了 viewDidAppear
    LAUIViewControllerWillDisappear = 1 << 4,   // 触发了 viewWillDisappear
    LAUIViewControllerDidDisappear  = 1 << 5,   // 触发了 viewDidDisappear
    // 无法 get 到 ,表示是否处于可视范围, 可以通过 visibleState & LAUIViewControllerVisible 判断 vc 是否可视
    LAUIViewControllerVisible       = LAUIViewControllerWillAppear | LAUIViewControllerDidAppear,
};


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(nonatomic, assign, readonly) LAUIViewControllerVisibleState visibleState;


@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTSettingsController : UINavigationController {

	UIBarButtonItem* _dismissButton;

}

@property (nonatomic,retain) UIBarButtonItem * dismissButton;              //@synthesize dismissButton=_dismissButton - In the implementation block
-(id)initWithRootSettings:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)_dismiss;
-(UIBarButtonItem *)dismissButton;
-(id)initWithRootModuleController:(id)arg1 ;
-(id)_defaultDismissButton;
-(void)setDismissButton:(UIBarButtonItem *)arg1 ;
@end

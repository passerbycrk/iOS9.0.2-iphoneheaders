/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/_UIDocumentPickerExtensionViewController.h>

@class NSString;

@interface _UIDocumentPickerNavigationBridgeController : UINavigationController <_UIDocumentPickerExtensionViewController> {

	char _hasSetInitialNavigationItem;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)popViewControllerAnimated:(char)arg1 ;
-(void)_setTintColor:(id)arg1 ;
-(void)_setPickableTypes:(id)arg1 ;
-(void)_setPickerMode:(unsigned)arg1 ;
-(void)_setUploadURLWrapper:(id)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(char)arg2 ;
-(id)popToViewController:(id)arg1 animated:(char)arg2 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
-(void)_documentPickerDidDismiss;
-(void)_prepareWithExtensionInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)hostingViewController;
-(void)_doneButton:(id)arg1 ;
-(void)_locationsMenu:(id)arg1 ;
-(void)_updateNavigationItem;
@end


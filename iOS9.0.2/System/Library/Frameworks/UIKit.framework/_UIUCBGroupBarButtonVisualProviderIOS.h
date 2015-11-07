/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIUCBBarButtonVisualProviderIOS.h>

@class _UIUCBKBSelectionBackground;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	_UIUCBKBSelectionBackground* _selectionBackgroundView;
	char _lightKeyboard;

}
+(id)lightKeyboardProvider;
+(id)darkKeyboardProvider;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateButton:(id)arg1 forSelectedState:(char)arg2 ;
-(void)configureButton:(id)arg1 fromBarItem:(id)arg2 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(char)arg2 ;
@end

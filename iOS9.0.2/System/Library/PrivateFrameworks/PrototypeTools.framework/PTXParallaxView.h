/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <libobjc.A.dylib/PTXParallaxObserver.h>

@class PTXParallaxController, PTXParallaxSettings, PTXMotionWindow, UIView, NSString;

@interface PTXParallaxView : UIView <_UISettingsKeyObserver, PTXParallaxObserver> {

	PTXParallaxController* _parallaxController;
	PTXParallaxSettings* _settings;
	float _viewAlpha;
	PTXMotionWindow* _slideWindowX;
	PTXMotionWindow* _slideWindowY;
	PTXMotionWindow* _tiltWindowX;
	PTXMotionWindow* _tiltWindowY;
	char _stopped;
	char _resizesView;
	UIView* _view;

}

@property (nonatomic,retain) UIView * view;                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) char resizesView;                      //@synthesize resizesView=_resizesView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)stop;
-(void)start;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateSettings;
-(CATransform3D)_tiltTransform:(CGPoint)arg1 ;
-(CATransform3D)_slideTransform:(CGPoint)arg1 ;
-(void)_clearOffset;
-(void)handleParallaxOffset:(CGPoint)arg1 lockStatus:(int)arg2 strength:(float)arg3 ;
-(void)clearParallaxOffset;
-(id)initWithView:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3 ;
-(void)setViewAlpha:(float)arg1 ;
-(char)resizesView;
-(void)setResizesView:(char)arg1 ;
@end


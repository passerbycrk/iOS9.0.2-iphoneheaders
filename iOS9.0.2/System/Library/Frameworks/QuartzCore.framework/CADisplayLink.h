/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay;

@interface CADisplayLink : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) CADisplay * display; 
@property (nonatomic,retain) id userInfo; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) int frameInterval; 
+(id)naui_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(char)isPaused;
-(id)_initWithDisplayLinkItem:(DisplayLinkItem*)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(double)duration;
-(void)invalidate;
-(CADisplay *)display;
-(void)setUserInfo:(id)arg1 ;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)userInfo;
-(void)setFrameInterval:(int)arg1 ;
-(int)frameInterval;
-(void)setPaused:(char)arg1 ;
@end

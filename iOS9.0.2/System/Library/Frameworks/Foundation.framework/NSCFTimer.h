/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSTimer.h>

@interface NSCFTimer : NSTimer
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long)_cfTypeID;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned)retainCount;
-(unsigned)hash;
-(void)invalidate;
-(char)isValid;
-(void)setFireDate:(id)arg1 ;
-(id)userInfo;
-(char)allowsWeakReference;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(char)arg6 ;
-(double)timeInterval;
-(char)retainWeakReference;
-(id)fireDate;
-(void)finalize;
@end

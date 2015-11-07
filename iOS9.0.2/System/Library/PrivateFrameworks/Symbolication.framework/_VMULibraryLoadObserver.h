/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VMULibraryLoadDelegate, OS_dispatch_queue;
#import <Symbolication/Symbolication-Structs.h>
@class NSObject;

@interface _VMULibraryLoadObserver : NSObject {

	id<VMULibraryLoadDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _serialNotificationsQueue;
	CSTypeRef _symbolicator;

}
-(void)dealloc;
-(void)stopObserving;
-(id)initWithTask:(unsigned)arg1 delegate:(id)arg2 ;
@end

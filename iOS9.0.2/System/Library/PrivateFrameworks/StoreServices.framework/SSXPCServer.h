/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString, NSMutableDictionary;

@interface SSXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _entitlementName;
	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _observers;
	NSString* _serviceName;

}
+(id)mainServer;
-(void)dealloc;
-(id)init;
-(void)start;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 entitlement:(id)arg2 queue:(id)arg3 ;
-(void)_dispatchMessage:(id)arg1 connection:(id)arg2 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
-(void)removeObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
@end

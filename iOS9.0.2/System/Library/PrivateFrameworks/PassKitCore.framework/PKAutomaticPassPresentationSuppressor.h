/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class PKAssertion, NSMutableSet, NSMutableIndexSet, NSDate, NSObject;

@interface PKAutomaticPassPresentationSuppressor : NSObject {

	PKAssertion* _suppressionAssertion;
	NSMutableSet* _permissionRequestCompletionBlocks;
	NSMutableIndexSet* _suppressionRequestTokens;
	NSMutableIndexSet* _backgrounedSuppressionIdentifiers;
	NSDate* _backgroundedDate;
	int _permissionState;
	unsigned _nextRequestToken;
	NSObject*<OS_dispatch_queue> _suppressorQueue;

}

@property (nonatomic,readonly) char isSuppressing; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(unsigned)requestSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)endSuppressionWithRequestToken:(unsigned)arg1 ;
-(char)isSuppressing;
-(void)_requestPermissionAndAquireSupressionAssertionIfNeededWithCompletion:(/*^block*/id)arg1 ;
-(void)_acquireSuppressionAssertionIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end


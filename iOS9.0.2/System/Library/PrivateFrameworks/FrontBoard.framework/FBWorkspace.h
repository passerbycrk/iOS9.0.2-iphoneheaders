/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBWorkspaceServerDelegate.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@protocol OS_dispatch_queue;
@class BSZeroingWeakReference, FBWorkspaceServer, NSMapTable, NSObject, FBSceneClientProviderInvalidationAction, FBProcess, BSAuditToken, NSString;

@interface FBWorkspace : NSObject <FBWorkspaceServerDelegate, FBSceneClientProvider> {

	BSZeroingWeakReference* _zeroingWeakDelegate;
	BSZeroingWeakReference* _zeroingWeakProcess;
	FBWorkspaceServer* _server;
	NSMapTable* _hostToClientMap;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBSceneClientProviderInvalidationAction* _invalidationAction;
	char _willInvalidate;
	char _invalidated;

}

@property (assign,nonatomic) id<FBWorkspaceDelegate> delegate; 
@property (nonatomic,readonly) FBProcess * process; 
@property (nonatomic,retain,readonly) BSAuditToken * auditToken; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endTransaction;
-(void)setDelegate:(id<FBWorkspaceDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id<FBWorkspaceDelegate>)delegate;
-(void)sendActions:(id)arg1 ;
-(id)_queue;
-(BSAuditToken *)auditToken;
-(FBProcess *)process;
-(id)_server;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(id)_newWorkspaceServer;
-(void)_queue_enumerateScenes:(/*^block*/id)arg1 ;
-(void)_queue_fireInvalidationAction;
-(id)_newSceneWithHost:(id)arg1 ;
-(void)server:(id)arg1 handleCreateSceneRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)server:(id)arg1 handleDestroySceneRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithParentProcess:(id)arg1 queue:(id)arg2 callOutQueue:(id)arg3 ;
-(void)_queue_willInvalidateAllScenes;
-(void)_queue_invalidateAllScenes;
-(void)beginTransaction;
@end


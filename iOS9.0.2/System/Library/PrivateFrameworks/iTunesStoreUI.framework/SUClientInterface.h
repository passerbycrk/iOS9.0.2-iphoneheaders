/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegatePrivate, OS_dispatch_queue;
@class NSString, SUUIAppearance, UIColor, NSObject, SUPurchaseManager, SUQueueSessionManager, NSMutableDictionary, SUViewControllerFactory, SUPreviewOverlayViewController, SUTabBarController;

@interface SUClientInterface : NSObject {

	NSString* _askToBuyApprovalPrompt;
	SUUIAppearance* _appearance;
	char _inAskToBuyApprovalFlow;
	NSString* _clientIdentifier;
	UIColor* _darkKeyColor;
	id<SUClientInterfaceDelegatePrivate> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _ignoresExpectedClientsProtocol;
	UIColor* _lightKeyColor;
	NSString* _localStoragePath;
	SUPurchaseManager* _purchaseManager;
	SUQueueSessionManager* _queueSessionManager;
	NSMutableDictionary* _urlBagKeys;
	NSString* _userAgent;
	SUViewControllerFactory* _viewControllerFactory;
	char _wasLaunchedFromLibrary;
	char inAskToBuyApprovalFlow;

}

@property (copy) NSString * clientIdentifier; 
@property (assign,nonatomic) id<SUClientInterfaceDelegate> delegate;                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (copy) SUUIAppearance * appearance; 
@property (copy) NSString * localStoragePath; 
@property (nonatomic,readonly) SUPreviewOverlayViewController * previewOverlay; 
@property (retain) SUPurchaseManager * purchaseManager; 
@property (retain) SUQueueSessionManager * queueSessionManager; 
@property (nonatomic,readonly) SUTabBarController * tabBarController; 
@property (copy) NSString * userAgent; 
@property (retain) SUViewControllerFactory * viewControllerFactory;                                                                              //@synthesize viewControllerFactory=_viewControllerFactory - In the implementation block
@property (assign) char wasLaunchedFromLibrary; 
@property (assign) char inAskToBuyApprovalFlow; 
@property (nonatomic,copy) NSString * askToBuyApprovalPrompt;                                                                                    //@synthesize askToBuyApprovalPrompt=_askToBuyApprovalPrompt - In the implementation block
@property (nonatomic,copy) UIColor * darkKeyColor;                                                                                               //@synthesize darkKeyColor=_darkKeyColor - In the implementation block
@property (nonatomic,copy) UIColor * lightKeyColor;                                                                                              //@synthesize lightKeyColor=_lightKeyColor - In the implementation block
@property (setter=_setIgnoresExpectedClientsProtocol:,getter=_ignoresExpectedClientsProtocol) char _ignoresExpectedClientsProtocol; 
-(void)setDelegate:(id<SUClientInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SUClientInterfaceDelegate>)delegate;
-(SUUIAppearance *)appearance;
-(SUTabBarController *)tabBarController;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setDarkKeyColor:(UIColor *)arg1 ;
-(void)setLightKeyColor:(UIColor *)arg1 ;
-(void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2 ;
-(id)URLBagKeyForIdentifier:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)setInAskToBuyApprovalFlow:(char)arg1 ;
-(void)setAskToBuyApprovalPrompt:(NSString *)arg1 ;
-(void)setPurchaseManager:(SUPurchaseManager *)arg1 ;
-(void)_showPreviewOverlayAnimated:(char)arg1 ;
-(void)setViewControllerFactory:(SUViewControllerFactory *)arg1 ;
-(NSString *)clientIdentifier;
-(SUViewControllerFactory *)viewControllerFactory;
-(UIColor *)darkKeyColor;
-(UIColor *)lightKeyColor;
-(void)_hidePreviewOverlayAnimated:(char)arg1 ;
-(void)_dispatchXEvent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_presentDialog:(id)arg1 ;
-(char)inAskToBuyApprovalFlow;
-(NSString *)askToBuyApprovalPrompt;
-(SUPreviewOverlayViewController *)previewOverlay;
-(void)_exitStoreWithReason:(int)arg1 ;
-(void)_dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2 ;
-(char)_ignoresExpectedClientsProtocol;
-(id)_newScriptInterface;
-(SUQueueSessionManager *)queueSessionManager;
-(void)setQueueSessionManager:(SUQueueSessionManager *)arg1 ;
-(NSString *)localStoragePath;
-(void)setLocalStoragePath:(NSString *)arg1 ;
-(SUPurchaseManager *)purchaseManager;
-(id)_newUIAlertView;
-(void)_dismissViewControllerFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3 ;
-(void)_returnToLibrary;
-(void)_setStatusBarHidden:(char)arg1 withAnimation:(int)arg2 ;
-(void)_setStatusBarStyle:(int)arg1 animated:(char)arg2 ;
-(char)wasLaunchedFromLibrary;
-(void)_setIgnoresExpectedClientsProtocol:(char)arg1 ;
-(void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(char)arg2 ;
-(void)setAppearance:(SUUIAppearance *)arg1 ;
-(void)setWasLaunchedFromLibrary:(char)arg1 ;
@end

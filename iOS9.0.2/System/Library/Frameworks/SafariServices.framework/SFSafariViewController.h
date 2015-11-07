/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SFBrowserRemoveViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFAddBookmarkActivityDelegate.h>
#import <libobjc.A.dylib/_SFQueueingBrowserServiceViewControllerProxyDelegate.h>

@protocol SFSafariViewControllerDelegate;
@class SFBrowserRemoteViewController, _UIAsyncInvocation, NSArray, _WKActivatedElementInfo, _SFQueueingBrowserServiceViewControllerProxy, NSURL, NSString;

@interface SFSafariViewController : UIViewController <SFBrowserRemoveViewControllerDelegate, _SFAddBookmarkActivityDelegate, _SFQueueingBrowserServiceViewControllerProxyDelegate> {

	SFBrowserRemoteViewController* _remoteViewController;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	int _preferredStatusBarStyle;
	char _showingLinkPreview;
	NSArray* _previewActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	id<SFSafariViewControllerDelegate> _delegate;
	_SFQueueingBrowserServiceViewControllerProxy* _serviceProxy;
	NSURL* _initialURL;

}

@property (assign,setter=_setShowingLinkPreview:,nonatomic) char _showingLinkPreview; 
@property (setter=_setPreviewActions:,nonatomic,retain) NSArray * _previewActions; 
@property (setter=_setActivatedElementInfo:,nonatomic,retain) _WKActivatedElementInfo * _activatedElementInfo; 
@property (assign,nonatomic,__weak) id<SFSafariViewControllerDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _SFQueueingBrowserServiceViewControllerProxy * serviceProxy;                                 //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,readonly) NSURL * initialURL;                                                                          //@synthesize initialURL=_initialURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_SFQueueingBrowserServiceViewControllerProxy *)serviceProxy;
-(void)_setPreviewActions:(id)arg1 ;
-(void)serviceProxyWillQueueInvocation:(id)arg1 ;
-(void)remoteViewControllerDidLoadWebView:(id)arg1 ;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)remoteViewController:(id)arg1 willShowActivitySheetForURL:(id)arg2 title:(id)arg3 fromRect:(CGRect)arg4 ;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(void)remoteViewController:(id)arg1 willUpdateStatusBarStyle:(int)arg2 ;
-(void)remoteViewController:(id)arg1 didFinishInitialLoad:(char)arg2 ;
-(id)initWithURL:(id)arg1 entersReaderIfAvailable:(char)arg2 ;
-(void)_forwardNotificationToViewService:(id)arg1 ;
-(void)_removeRemoteView;
-(void)addBookmarkActivityDidFinish:(id)arg1 ;
-(char)_showingLinkPreview;
-(NSArray *)_previewActions;
-(_WKActivatedElementInfo *)_activatedElementInfo;
-(void)_setShowingLinkPreview:(char)arg1 ;
-(void)_setActivatedElementInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SFSafariViewControllerDelegate>)arg1 ;
-(id<SFSafariViewControllerDelegate>)delegate;
-(int)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)previewActions;
-(id)initWithURL:(id)arg1 ;
-(void)_addRemoteView;
-(void)_connectToService;
-(NSURL *)initialURL;
@end

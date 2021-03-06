/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/BuddyController.h>

@protocol BuddyControllerDelegate;
@class UIView, UILabel, NSString;

@interface BuddyCloudConfigInstallationController : UIViewController <BuddyController> {

	id<BuddyControllerDelegate> _delegate;
	UIView* _containerView;
	UILabel* _messageView;
	UILabel* _activityLabel;
	NSString* _lastErrorDescription;
	int _state;
	/*^block*/id _deviceConfiguredCompletionBlock;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * messageView;                                    //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UILabel * activityLabel;                                  //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,retain) NSString * lastErrorDescription;                          //@synthesize lastErrorDescription=_lastErrorDescription - In the implementation block
@property (assign,nonatomic) int state;                                                //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id deviceConfiguredCompletionBlock;                         //@synthesize deviceConfiguredCompletionBlock=_deviceConfiguredCompletionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(void)cloudConfigDidChange:(id)arg1 ;
-(void)nextButtonPressed:(id)arg1 ;
-(UILabel *)messageView;
-(void)_setupForState;
-(void)setDeviceConfiguredCompletionBlock:(id)arg1 ;
-(void)setLastErrorDescription:(NSString *)arg1 ;
-(NSString *)lastErrorDescription;
-(id)deviceConfiguredCompletionBlock;
-(void)setMessageView:(UILabel *)arg1 ;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BuddyControllerDelegate>)delegate;
-(UIView *)containerView;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)setActivityLabel:(UILabel *)arg1 ;
-(UILabel *)activityLabel;
-(void)removeFromNavHierarchyOf:(id)arg1 ;
@end


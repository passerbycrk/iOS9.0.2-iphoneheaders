/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ADSActionViewControllerManager : NSObject {

	NSMutableDictionary* _pendingAdSpaceControllers;

}

@property (nonatomic,retain) NSMutableDictionary * pendingAdSpaceControllers;              //@synthesize pendingAdSpaceControllers=_pendingAdSpaceControllers - In the implementation block
+(id)sharedManager;
-(NSMutableDictionary *)pendingAdSpaceControllers;
-(void)_requestActionViewControllerForAdSpaceController:(id)arg1 ;
-(void)_actionViewController:(id)arg1 readyForControllerIdentifier:(id)arg2 ;
-(void)_cancelRequestForActionViewControllerForAdSpaceController:(id)arg1 ;
-(void)setPendingAdSpaceControllers:(NSMutableDictionary *)arg1 ;
-(id)init;
@end


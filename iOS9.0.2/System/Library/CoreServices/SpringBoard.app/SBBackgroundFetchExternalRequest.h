/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIFetchContentInBackgroundAction, NSString;

@interface SBBackgroundFetchExternalRequest : NSObject {

	UIFetchContentInBackgroundAction* _action;
	int _sequenceNumber;
	NSString* _bundleID;

}

@property (nonatomic,retain) UIFetchContentInBackgroundAction * action;              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) int sequenceNumber;                                     //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                      //@synthesize bundleID=_bundleID - In the implementation block
-(id)initForBundleID:(id)arg1 ;
-(void)execute;
-(NSString *)bundleID;
-(void)dealloc;
-(UIFetchContentInBackgroundAction *)action;
-(void)setAction:(UIFetchContentInBackgroundAction *)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(int)sequenceNumber;
-(void)setBundleID:(NSString *)arg1 ;
@end


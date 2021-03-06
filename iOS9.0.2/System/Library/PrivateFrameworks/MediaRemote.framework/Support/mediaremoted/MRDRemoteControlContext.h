/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSArray;

@interface MRDRemoteControlContext : NSObject {

	NSMutableArray* _routedCommands;
	NSString* _contextID;
	NSString* _originatingAppDisplayID;

}

@property (nonatomic,readonly) NSString * contextID;                            //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,readonly) NSString * originatingAppDisplayID;              //@synthesize originatingAppDisplayID=_originatingAppDisplayID - In the implementation block
@property (nonatomic,readonly) NSArray * routedCommands; 
-(NSString *)originatingAppDisplayID;
-(void)addRoutedCommand:(id)arg1 ;
-(id)initWithContextID:(id)arg1 originatingAppDisplayID:(id)arg2 ;
-(NSArray *)routedCommands;
-(void)clearRoutedCommands;
-(void)dealloc;
-(NSString *)contextID;
@end


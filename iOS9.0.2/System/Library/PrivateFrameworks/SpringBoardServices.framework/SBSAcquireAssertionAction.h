/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface SBSAcquireAssertionAction : BSAction

@property (nonatomic,readonly) NSString * assertionName; 
@property (nonatomic,readonly) NSString * reason; 
@property (nonatomic,readonly) unsigned port; 
+(id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(NSString *)reason;
-(unsigned)port;
-(NSString *)assertionName;
@end


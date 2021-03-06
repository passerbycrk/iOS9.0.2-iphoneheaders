/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBAssertion, NSString, NSArray, NSDictionary;

@interface BBResponse : NSObject <NSSecureCoding> {

	BBAssertion* _lifeAssertion;
	/*^block*/id _sendBlock;
	NSString* _bulletinID;
	char _sent;
	NSString* _replyText;
	char _activated;
	NSArray* _lifeAssertions;
	int _actionType;
	NSString* _buttonID;
	NSString* _actionID;
	NSString* _originID;
	NSDictionary* _context;

}

@property (nonatomic,copy) NSString * originID;                   //@synthesize originID=_originID - In the implementation block
@property (nonatomic,copy) NSString * replyText;                  //@synthesize replyText=_replyText - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char activated;                      //@synthesize activated=_activated - In the implementation block
@property (nonatomic,copy) NSArray * lifeAssertions;              //@synthesize lifeAssertions=_lifeAssertions - In the implementation block
@property (nonatomic,copy) id sendBlock;                          //@synthesize sendBlock=_sendBlock - In the implementation block
@property (nonatomic,retain) NSString * bulletinID;               //@synthesize bulletinID=_bulletinID - In the implementation block
@property (assign,nonatomic) int actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * buttonID;                   //@synthesize buttonID=_buttonID - In the implementation block
@property (nonatomic,copy) NSString * actionID;                   //@synthesize actionID=_actionID - In the implementation block
+(char)supportsSecureCoding;
-(int)actionType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)context;
-(void)send;
-(void)setContext:(NSDictionary *)arg1 ;
-(char)activated;
-(void)setActivated:(char)arg1 ;
-(void)setBulletinID:(NSString *)arg1 ;
-(void)setReplyText:(NSString *)arg1 ;
-(void)setButtonID:(NSString *)arg1 ;
-(void)setActionID:(NSString *)arg1 ;
-(void)setOriginID:(NSString *)arg1 ;
-(NSString *)bulletinID;
-(NSString *)replyText;
-(NSString *)buttonID;
-(NSString *)actionID;
-(NSString *)originID;
-(NSArray *)lifeAssertions;
-(void)setLifeAssertions:(NSArray *)arg1 ;
-(void)setSendBlock:(id)arg1 ;
-(id)sendBlock;
-(void)setActionType:(int)arg1 ;
@end


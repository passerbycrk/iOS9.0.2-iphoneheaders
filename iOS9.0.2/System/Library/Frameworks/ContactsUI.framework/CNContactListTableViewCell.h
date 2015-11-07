/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol ABStyleProvider;
@class CNContactFormatter, CNContact, CNContactMatchInfo;

@interface CNContactListTableViewCell : UITableViewCell {

	char _isMeCard;
	id<ABStyleProvider> _styleProvider;
	CNContactFormatter* _contactFormatter;
	CNContact* _contact;
	CNContactMatchInfo* _contactMatchInfo;

}

@property (nonatomic,readonly) id<ABStyleProvider> styleProvider;                //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;              //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactMatchInfo * contactMatchInfo;              //@synthesize contactMatchInfo=_contactMatchInfo - In the implementation block
@property (assign,nonatomic) char isMeCard;                                      //@synthesize isMeCard=_isMeCard - In the implementation block
+(void)contentSizeCategoryDidChange:(id)arg1 ;
+(void)initialize;
-(void)setIsMeCard:(char)arg1 ;
-(char)isMeCard;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(void)setContactMatchInfo:(CNContactMatchInfo *)arg1 ;
-(CNContactMatchInfo *)contactMatchInfo;
-(id<ABStyleProvider>)styleProvider;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
@end

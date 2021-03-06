/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class CKConversation;

@interface CKTranscriptHeaderViewController : UIViewController {

	char _shouldInvalidateOnAddressBookChange;
	CKConversation* _conversation;

}

@property (nonatomic,retain) CKConversation * conversation;                           //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) char shouldInvalidateOnAddressBookChange;              //@synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange - In the implementation block
-(void)dealloc;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(char)shouldInvalidateOnAddressBookChange;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class SGRecordId;


@protocol CNSuggested <NSObject>
@property (getter=isSuggested,nonatomic,readonly) char suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@required
-(SGRecordId *)suggestionRecordId;
-(char)isSuggested;

@end

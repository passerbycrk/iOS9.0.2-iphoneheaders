/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode, DOMMediaList;

@interface DOMStyleSheet : DOMObject

@property (copy,readonly) NSString * type; 
@property (assign) char disabled; 
@property (readonly) DOMNode * ownerNode; 
@property (readonly) DOMStyleSheet * parentStyleSheet; 
@property (copy,readonly) NSString * href; 
@property (copy,readonly) NSString * title; 
@property (readonly) DOMMediaList * media; 
-(void)dealloc;
-(NSString *)type;
-(NSString *)title;
-(char)disabled;
-(void)setDisabled:(char)arg1 ;
-(NSString *)href;
-(DOMMediaList *)media;
-(void)finalize;
-(DOMStyleSheet *)parentStyleSheet;
-(DOMNode *)ownerNode;
@end


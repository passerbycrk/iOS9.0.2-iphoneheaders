/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * scriptId; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(int)lineNumber;
-(void)setLineNumber:(int)arg1 ;
-(int)columnNumber;
-(void)setColumnNumber:(int)arg1 ;
-(void)setScriptId:(NSString *)arg1 ;
-(id)initWithScriptId:(id)arg1 lineNumber:(int)arg2 ;
-(NSString *)scriptId;
@end


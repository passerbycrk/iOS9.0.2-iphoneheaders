/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKCSSParseObject.h>

@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject {

	char _important;
	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char important;               //@synthesize important=_important - In the implementation block
-(void)setImportant:(char)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)important;
@end

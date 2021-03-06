/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface _MDHTMLParsing : NSObject {

	unsigned short* uniChars;
	unsigned uniCharLen;
	unsigned uniCharSize;
	unsigned char newLineBuffer[8];
	unsigned newLineLength;
	NSMutableDictionary* attributes;
	NSString* metaName;
	NSString* metaHttpEquiv;
	NSString* metaContent;
	unsigned sourceEncoding;
	unsigned long sourceCFEncoding;
	unsigned long indexingLimit;
	const char* titleStart;
	unsigned titleLength;
	char inHead;
	char inTitle;
	char inScript;
	char inStyle;

}
+(void)initialize;
-(void)appendUnichars:(const unsigned short*)arg1 length:(unsigned)arg2 ;
-(void)appendText:(const char*)arg1 length:(unsigned)arg2 ;
-(void)appendNewline;
-(void)dealloc;
-(id)initWithEncoding:(unsigned)arg1 ;
@end


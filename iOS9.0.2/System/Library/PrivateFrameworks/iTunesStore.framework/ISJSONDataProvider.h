/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISDataProvider.h>

@interface ISJSONDataProvider : ISDataProvider {

	unsigned _options;

}

@property (assign) unsigned parserOptions;              //@synthesize options=_options - In the implementation block
-(unsigned)parserOptions;
-(void)setParserOptions:(unsigned)arg1 ;
-(char)parseData:(id)arg1 returningError:(id*)arg2 ;
@end

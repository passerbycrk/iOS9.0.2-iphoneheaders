/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface VOTOutputManagerTV : NSObject {

	double _lastFocusRequestTime;
	NSArray* _requestElements;
	NSArray* _requestHeaders;

}

@property (nonatomic,retain) NSArray * requestElements;              //@synthesize requestElements=_requestElements - In the implementation block
@property (nonatomic,retain) NSArray * requestHeaders;               //@synthesize requestHeaders=_requestHeaders - In the implementation block
-(void)setRequestElements:(NSArray *)arg1 ;
-(NSArray *)requestElements;
-(void)setRequestHeaders:(NSArray *)arg1 ;
-(NSArray *)requestHeaders;
@end


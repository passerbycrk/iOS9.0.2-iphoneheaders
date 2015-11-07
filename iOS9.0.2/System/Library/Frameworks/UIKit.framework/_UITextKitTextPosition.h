/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextPosition.h>

@interface _UITextKitTextPosition : UITextPosition {

	int _offset;
	int _affinity;

}

@property (assign) int offset;                //@synthesize offset=_offset - In the implementation block
@property (assign) int affinity;              //@synthesize affinity=_affinity - In the implementation block
+(id)positionWithOffset:(int)arg1 ;
+(id)positionWithOffset:(int)arg1 affinity:(int)arg2 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setOffset:(int)arg1 ;
-(int)offset;
-(int)affinity;
-(void)setAffinity:(int)arg1 ;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PDAnimateBehavior.h>

@interface PDAnimateScaleBehavior : PDAnimateBehavior {

	CGPoint mTo;
	CGPoint mFrom;
	CGPoint mBy;
	char mHasTo;
	char mHasFrom;
	char mHasBy;

}
-(id)init;
-(char)isEqual:(id)arg1 ;
-(CGPoint)from;
-(CGPoint)to;
-(void)setFrom:(CGPoint)arg1 ;
-(void)setTo:(CGPoint)arg1 ;
-(CGPoint)by;
-(void)setBy:(CGPoint)arg1 ;
-(char)hasTo;
-(char)hasFrom;
-(char)hasBy;
@end

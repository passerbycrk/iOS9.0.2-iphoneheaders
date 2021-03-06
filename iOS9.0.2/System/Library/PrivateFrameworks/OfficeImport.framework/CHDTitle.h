/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CHDChart, CHDFormula, EDString, OADGraphicProperties;

@interface CHDTitle : NSObject {

	CHDChart* mChart;
	BOOL mIsAutoGenerated;
	BOOL mPositionAutoGenerated;
	BOOL mSizeAutoGenerated;
	BOOL mIsOverlay;
	CHDFormula* mName;
	EDString* mLastCachedName;
	OADGraphicProperties* mGraphicProperties;
	double mRotation;

}
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)graphicProperties;
-(id)lastCachedName;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setIsAutoGenerated:(BOOL)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setIsPositionAutoGenerated:(BOOL)arg1 ;
-(void)setTitleRotationAngle:(double)arg1 ;
-(BOOL)isOverlay;
-(void)setIsOverlay:(BOOL)arg1 ;
-(BOOL)isSizeAutoGenerated;
-(BOOL)isCachedTitleEmpty;
-(BOOL)isAutoGenerated;
-(BOOL)isPositionAutoGenerated;
-(void)setIsSizeAutoGenerated:(BOOL)arg1 ;
-(BOOL)isTitleVisible;
-(double)titleRotationAngle;
@end


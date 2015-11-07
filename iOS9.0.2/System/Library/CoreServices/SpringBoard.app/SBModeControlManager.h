/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray, NSArray;

@interface SBModeControlManager : NSObject {

	NSMutableArray* _views;

}

@property (nonatomic,retain,readonly) NSArray * views;                 //@synthesize views=_views - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSegments; 
@property (assign,nonatomic) int selectedSegmentIndex; 
+(void)_configureSegmentedControl:(id)arg1 withColorSettings:(id)arg2 ;
+(id)_segmentedControlForUse:(int)arg1 colorSettings:(id)arg2 ;
-(void)setTintColor:(id)arg1 forUse:(int)arg2 ;
-(id)_segmentedControlForUse:(int)arg1 ;
-(id)initWithGraphicsQuality:(int)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(void)removeAllSegments;
-(void)setSelectedSegmentIndex:(int)arg1 ;
-(void)insertSegmentWithTitle:(id)arg1 atIndex:(unsigned)arg2 animated:(char)arg3 ;
-(unsigned)numberOfSegments;
-(int)selectedSegmentIndex;
-(NSArray *)views;
@end

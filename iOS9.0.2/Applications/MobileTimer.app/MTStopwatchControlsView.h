/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class MTStopwatchController, UIView, NSArray, StopwatchTimeView, UITableView;

@interface MTStopwatchControlsView : UIView {

	MTStopwatchController* _stopwatchController;
	UIView* _layoutView;
	UIView* _keylineViewAtTopOfTimeView;
	UIView* _keylineViewAtBottomOfTimeView;
	NSArray* _constraints;
	StopwatchTimeView* _timeView;
	UITableView* _lapTimeTable;

}

@property (assign,nonatomic) int mode; 
@property (nonatomic,__weak,readonly) id<StopWatchControlsTarget> target; 
@property (nonatomic,readonly) StopwatchTimeView * timeView;                           //@synthesize timeView=_timeView - In the implementation block
@property (nonatomic,readonly) UITableView * lapTimeTable;                             //@synthesize lapTimeTable=_lapTimeTable - In the implementation block
+(float)timeViewHeight;
-(StopwatchTimeView *)timeView;
-(UITableView *)lapTimeTable;
-(void)setButtonSize:(unsigned)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<StopWatchControlsTarget>)target;
-(id)initWithTarget:(id)arg1 ;
-(void)updateConstraints;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)handleLocaleChange;
@end

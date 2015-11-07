/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSLayoutConstraint;

@interface LapPadTableViewHeaderView : UIView {

	UILabel* _leftColumnHeader;
	UILabel* _centerColumnHeader;
	UILabel* _rightColumnHeader;
	NSLayoutConstraint* _totalLabelCenterXToTrailingConstraint;

}

@property (assign,nonatomic,__weak) NSLayoutConstraint * totalLabelCenterXToTrailingConstraint;              //@synthesize totalLabelCenterXToTrailingConstraint=_totalLabelCenterXToTrailingConstraint - In the implementation block
+(float)defaultHeight;
-(void)createConstraints;
-(NSLayoutConstraint *)totalLabelCenterXToTrailingConstraint;
-(void)setTotalLabelCenterXToTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
@end

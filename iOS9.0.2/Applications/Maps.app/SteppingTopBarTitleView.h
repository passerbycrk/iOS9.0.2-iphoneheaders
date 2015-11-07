/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/CenteringView.h>

@class InlineNavigationTopBarTitleView, TwoLineTopBarTitleView;

@interface SteppingTopBarTitleView : CenteringView {

	InlineNavigationTopBarTitleView* _oneLineTitle;
	TwoLineTopBarTitleView* _twoLineTitle;

}
-(void)setDestinationDisplayName:(id)arg1 ;
-(void)setRouteDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

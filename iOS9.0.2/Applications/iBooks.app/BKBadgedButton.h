/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKToolbarButton.h>

@class UIImageView, UILabel;

@interface BKBadgedButton : BKToolbarButton {

	UIImageView* _badgeBackground;
	UILabel* _badgeLabel;
	unsigned _value;

}

@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
-(float)badgeWidth;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
@end

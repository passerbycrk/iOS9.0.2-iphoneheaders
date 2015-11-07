/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoMailBridgeSettings.bundle/NanoMailBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface MFNanoBridgeSettingsMailboxTableViewCell : UITableViewCell {

	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _checkmarkImageView;
	unsigned _level;

}

@property (nonatomic,retain) UIImage * icon; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (assign,nonatomic) unsigned level;                     //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) char displayCheckmark; 
-(char)displayCheckmark;
-(void)setDisplayCheckmark:(char)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setLevel:(unsigned)arg1 ;
-(unsigned)level;
-(NSString *)subtitle;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(UIImage *)icon;
-(id)_titleFont;
-(id)_subtitleFont;
@end

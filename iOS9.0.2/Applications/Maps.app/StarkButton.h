/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIButton.h>
#import <Maps/StarkButton.h>

@class UIImage, NSString;

@interface StarkButton : UIButton <StarkButton> {

	float _screenScale;
	char _usesMinimumWidth;
	int _starkButtonCompositingStyle;
	int _starkButtonHighlightStyle;
	int _starkButtonSize;
	UIImage* _unmodifiedRegularStateImage;
	int _displayedLightLevel;
	int _starkTextWeight;
	int _interactionModel;

}

@property (assign,nonatomic) char usesMinimumWidth;                              //@synthesize usesMinimumWidth=_usesMinimumWidth - In the implementation block
@property (assign,nonatomic) int starkButtonCompositingStyle;                    //@synthesize starkButtonCompositingStyle=_starkButtonCompositingStyle - In the implementation block
@property (assign,nonatomic) int starkButtonHighlightStyle;                      //@synthesize starkButtonHighlightStyle=_starkButtonHighlightStyle - In the implementation block
@property (assign,nonatomic) int starkButtonSize;                                //@synthesize starkButtonSize=_starkButtonSize - In the implementation block
@property (assign,nonatomic) int starkTextWeight;                                //@synthesize starkTextWeight=_starkTextWeight - In the implementation block
@property (assign,nonatomic) int interactionModel;                               //@synthesize interactionModel=_interactionModel - In the implementation block
@property (nonatomic,retain) UIImage * unmodifiedRegularStateImage;              //@synthesize unmodifiedRegularStateImage=_unmodifiedRegularStateImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int displayedLightLevel;                            //@synthesize displayedLightLevel=_displayedLightLevel - In the implementation block
+(void)getTopButtonBarGlyphNormalImage:(out id*)arg1 darkerImage:(out id*)arg2 disabledImage:(out id*)arg3 fromImage:(id)arg4 lightLevel:(int)arg5 scale:(float)arg6 ;
-(int)displayedLightLevel;
-(void)setDisplayedLightLevel:(int)arg1 ;
-(void)setStarkButtonCompositingStyle:(int)arg1 ;
-(int)starkTextWeight;
-(void)setUnmodifiedRegularStateImage:(UIImage *)arg1 ;
-(id)attributedStringForTitle:(id)arg1 state:(unsigned)arg2 ;
-(void)setUsesMinimumWidth:(char)arg1 ;
-(char)usesMinimumWidth;
-(void)_updateAttributedTitles;
-(int)starkButtonHighlightStyle;
-(UIImage *)unmodifiedRegularStateImage;
-(id)_currentStyleAttributesForState:(unsigned)arg1 ;
-(void)_updateImagesFromUnmodifiedRegularImage;
-(void)setStarkButtonSize:(int)arg1 ;
-(int)starkButtonSize;
-(void)setStarkTextWeight:(int)arg1 ;
-(int)starkButtonCompositingStyle;
-(void)setStarkButtonHighlightStyle:(int)arg1 ;
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)interactionModel;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setImage:(id)arg1 forState:(unsigned)arg2 ;
-(void)_updateBackgroundColor;
-(void)setHighlighted:(char)arg1 ;
-(void)setInteractionModel:(int)arg1 ;
@end


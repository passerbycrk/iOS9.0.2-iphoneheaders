/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAudioPlayPauseView.h>

@protocol ICAttachmentBrickAudioPlayerViewDelegate;
@class ICArcLayer;

@interface ICAttachmentBrickAudioPlayerView : ICAudioPlayPauseView {

	id<ICAttachmentBrickAudioPlayerViewDelegate> _delegate;
	ICArcLayer* _progressCircleLayer;

}

@property (assign,nonatomic) id<ICAttachmentBrickAudioPlayerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ICArcLayer * progressCircleLayer;                                   //@synthesize progressCircleLayer=_progressCircleLayer - In the implementation block
-(void)sharedInit;
-(void)createBackgroundLayer;
-(void)createPlayPauseViews;
-(void)showStopped;
-(void)showPressed:(char)arg1 ;
-(void)updateTime:(double)arg1 duration:(double)arg2 ;
-(void)createProgressCircleLayer;
-(void)setProgressCircleLayer:(ICArcLayer *)arg1 ;
-(ICArcLayer *)progressCircleLayer;
-(void)showDisabled:(char)arg1 ;
-(void)setDelegate:(id<ICAttachmentBrickAudioPlayerViewDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(id<ICAttachmentBrickAudioPlayerViewDelegate>)delegate;
-(id)tintColor;
-(CGSize)intrinsicContentSize;
-(char)isAccessibilityElement;
@end


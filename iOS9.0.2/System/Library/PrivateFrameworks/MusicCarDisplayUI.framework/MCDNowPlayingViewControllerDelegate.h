/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCDNowPlayingViewControllerDelegate <NSObject>
@optional
-(char)nowPlayingViewController:(id)arg1 shouldDisplayButton:(int)arg2 withImage:(out id*)arg3 tinted:(out char*)arg4;
-(char)nowPlayingViewController:(id)arg1 shouldEnableButton:(int)arg2;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(int)arg2 state:(int)arg3;
-(char)nowPlayingViewControllerCanShuffle:(id)arg1;
-(char)nowPlayingViewControllerCanRepeat:(id)arg1;
-(char)nowPlayingViewControllerCanLike:(id)arg1;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1;
-(void)nowPlayingViewControllerLike:(id)arg1;

@end

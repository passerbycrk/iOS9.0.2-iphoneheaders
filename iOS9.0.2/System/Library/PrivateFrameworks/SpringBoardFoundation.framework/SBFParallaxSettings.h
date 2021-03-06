/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFParallaxSettings : _UISettings {

	char _slideEnabled;
	char _tiltEnabled;
	char _increaseEnabled;
	int _slideDirectionX;
	int _slideDirectionY;
	float _slidePixelsX;
	float _slidePixelsY;
	int _tiltDirectionX;
	int _tiltDirectionY;
	float _tiltDegreesX;
	float _tiltDegreesY;
	int _distanceFromScreen;
	float _slideIncreaseX;
	float _slideIncreaseY;

}

@property (assign) char slideEnabled;                   //@synthesize slideEnabled=_slideEnabled - In the implementation block
@property (assign) int slideDirectionX;                 //@synthesize slideDirectionX=_slideDirectionX - In the implementation block
@property (assign) int slideDirectionY;                 //@synthesize slideDirectionY=_slideDirectionY - In the implementation block
@property (assign) float slidePixelsX;                  //@synthesize slidePixelsX=_slidePixelsX - In the implementation block
@property (assign) float slidePixelsY;                  //@synthesize slidePixelsY=_slidePixelsY - In the implementation block
@property (assign) char tiltEnabled;                    //@synthesize tiltEnabled=_tiltEnabled - In the implementation block
@property (assign) int tiltDirectionX;                  //@synthesize tiltDirectionX=_tiltDirectionX - In the implementation block
@property (assign) int tiltDirectionY;                  //@synthesize tiltDirectionY=_tiltDirectionY - In the implementation block
@property (assign) float tiltDegreesX;                  //@synthesize tiltDegreesX=_tiltDegreesX - In the implementation block
@property (assign) float tiltDegreesY;                  //@synthesize tiltDegreesY=_tiltDegreesY - In the implementation block
@property (assign) int distanceFromScreen;              //@synthesize distanceFromScreen=_distanceFromScreen - In the implementation block
@property (assign) char increaseEnabled;                //@synthesize increaseEnabled=_increaseEnabled - In the implementation block
@property (assign) float slideIncreaseX;                //@synthesize slideIncreaseX=_slideIncreaseX - In the implementation block
@property (assign) float slideIncreaseY;                //@synthesize slideIncreaseY=_slideIncreaseY - In the implementation block
+(id)settingsControllerModule;
-(void)setTiltEnabled:(char)arg1 ;
-(void)setDefaultValues;
-(void)setSlideEnabled:(char)arg1 ;
-(void)setSlideDirectionX:(int)arg1 ;
-(void)setSlideDirectionY:(int)arg1 ;
-(void)setSlidePixelsX:(float)arg1 ;
-(void)setSlidePixelsY:(float)arg1 ;
-(void)setTiltDirectionX:(int)arg1 ;
-(void)setTiltDirectionY:(int)arg1 ;
-(void)setTiltDegreesX:(float)arg1 ;
-(void)setTiltDegreesY:(float)arg1 ;
-(void)setDistanceFromScreen:(int)arg1 ;
-(void)setIncreaseEnabled:(char)arg1 ;
-(void)setSlideIncreaseX:(float)arg1 ;
-(void)setSlideIncreaseY:(float)arg1 ;
-(char)slideEnabled;
-(int)slideDirectionX;
-(int)slideDirectionY;
-(float)slidePixelsX;
-(float)slidePixelsY;
-(char)tiltEnabled;
-(int)tiltDirectionX;
-(int)tiltDirectionY;
-(float)tiltDegreesX;
-(float)tiltDegreesY;
-(int)distanceFromScreen;
-(char)increaseEnabled;
-(float)slideIncreaseX;
-(float)slideIncreaseY;
@end


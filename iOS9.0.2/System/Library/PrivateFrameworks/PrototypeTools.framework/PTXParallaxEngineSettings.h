/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface PTXParallaxEngineSettings : _UISettings {

	char _shiftEnabled;
	char _showIdleIndicator;
	char _jumpEnabled;
	char _playJumpSound;
	char _directionalLockEnabled;
	char _showDirectionalLockIndicators;
	unsigned _frameInterval;
	float _inputSmoothing;
	float _sigmoidDegree;
	float _shiftSpeed;
	float _shiftDistanceDependence;
	float _idleLeeway;
	float _delayBeforeIdle;
	float _jumpThreshold;
	float _directionalLockThreshold;
	float _directionalLockStickiness;
	float _directionalLockSharpness;

}

@property (assign) unsigned frameInterval;                          //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign) float inputSmoothing;                            //@synthesize inputSmoothing=_inputSmoothing - In the implementation block
@property (assign) float sigmoidDegree;                             //@synthesize sigmoidDegree=_sigmoidDegree - In the implementation block
@property (assign) char shiftEnabled;                               //@synthesize shiftEnabled=_shiftEnabled - In the implementation block
@property (assign) float shiftSpeed;                                //@synthesize shiftSpeed=_shiftSpeed - In the implementation block
@property (assign) float shiftDistanceDependence;                   //@synthesize shiftDistanceDependence=_shiftDistanceDependence - In the implementation block
@property (assign) float idleLeeway;                                //@synthesize idleLeeway=_idleLeeway - In the implementation block
@property (assign) float delayBeforeIdle;                           //@synthesize delayBeforeIdle=_delayBeforeIdle - In the implementation block
@property (assign) char showIdleIndicator;                          //@synthesize showIdleIndicator=_showIdleIndicator - In the implementation block
@property (assign) char jumpEnabled;                                //@synthesize jumpEnabled=_jumpEnabled - In the implementation block
@property (assign) float jumpThreshold;                             //@synthesize jumpThreshold=_jumpThreshold - In the implementation block
@property (assign) char playJumpSound;                              //@synthesize playJumpSound=_playJumpSound - In the implementation block
@property (assign) char directionalLockEnabled;                     //@synthesize directionalLockEnabled=_directionalLockEnabled - In the implementation block
@property (assign) float directionalLockThreshold;                  //@synthesize directionalLockThreshold=_directionalLockThreshold - In the implementation block
@property (assign) float directionalLockStickiness;                 //@synthesize directionalLockStickiness=_directionalLockStickiness - In the implementation block
@property (assign) float directionalLockSharpness;                  //@synthesize directionalLockSharpness=_directionalLockSharpness - In the implementation block
@property (assign) char showDirectionalLockIndicators;              //@synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setFrameInterval:(unsigned)arg1 ;
-(void)setDirectionalLockEnabled:(char)arg1 ;
-(unsigned)frameInterval;
-(char)directionalLockEnabled;
-(float)directionalLockStickiness;
-(float)directionalLockThreshold;
-(float)directionalLockSharpness;
-(char)jumpEnabled;
-(float)jumpThreshold;
-(char)playJumpSound;
-(float)idleLeeway;
-(float)delayBeforeIdle;
-(char)showIdleIndicator;
-(char)showDirectionalLockIndicators;
-(void)setIdleLeeway:(float)arg1 ;
-(void)setDelayBeforeIdle:(float)arg1 ;
-(void)setShowIdleIndicator:(char)arg1 ;
-(void)setJumpEnabled:(char)arg1 ;
-(void)setJumpThreshold:(float)arg1 ;
-(void)setPlayJumpSound:(char)arg1 ;
-(void)setDirectionalLockThreshold:(float)arg1 ;
-(void)setDirectionalLockStickiness:(float)arg1 ;
-(void)setDirectionalLockSharpness:(float)arg1 ;
-(void)setShowDirectionalLockIndicators:(char)arg1 ;
-(void)setInputSmoothing:(float)arg1 ;
-(void)setSigmoidDegree:(float)arg1 ;
-(void)setShiftEnabled:(char)arg1 ;
-(void)setShiftSpeed:(float)arg1 ;
-(void)setShiftDistanceDependence:(float)arg1 ;
-(float)inputSmoothing;
-(float)sigmoidDegree;
-(char)shiftEnabled;
-(float)shiftSpeed;
-(float)shiftDistanceDependence;
@end


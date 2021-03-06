/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MCAnimationPath, MRAnimationPathScalar, MRAnimationContext, MCPlugParallel;

@interface MRParallelPlugger : NSObject {

	MCAnimationPath* mAnimationPathParam1;
	MCAnimationPath* mAnimationPathParam2;
	MCAnimationPath* mAnimationPathXY;
	MRAnimationPathScalar* mAnimationPathX;
	MRAnimationPathScalar* mAnimationPathY;
	MRAnimationPathScalar* mAnimationPathZ;
	MRAnimationPathScalar* mAnimationPathScale;
	MRAnimationPathScalar* mAnimationPathRX;
	MRAnimationPathScalar* mAnimationPathRY;
	MRAnimationPathScalar* mAnimationPathRZ;
	MRAnimationPathScalar* mAnimationPathOpacity;
	MRAnimationContext* mAnimationContext;
	char mPlugWasSetSinceLastRendering;
	unsigned char mCurrentLayoutIndex;
	char mNeedsUpdate;
	MCPlugParallel* mPlug;

}

@property (nonatomic,copy) MCPlugParallel * plug; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) char needsUpdate; 
-(void)setPlug:(MCPlugParallel *)arg1 ;
-(MCPlugParallel *)plug;
-(void)setOpacityAnimationPath:(id)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(char)applyAtTime:(double)arg1 toSublayer:(id)arg2 withArguments:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(char)needsUpdate;
-(void)setNeedsUpdate:(char)arg1 ;
@end


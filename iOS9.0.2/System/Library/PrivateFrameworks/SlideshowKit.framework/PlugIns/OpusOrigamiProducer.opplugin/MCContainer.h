/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCAudioPlaylist, NSDictionary, MCPlug;

@interface MCContainer : MCObject {

	unsigned short mFlags;
	unsigned short mSpecialRetainCount;
	MCAudioPlaylist* mAudioPlaylist;
	NSDictionary* mInitialState;
	MCPlug* mReferencingPlug;

}

@property (readonly) MCAudioPlaylist * audioPlaylist; 
@property (readonly) MCAudioPlaylist * audioPlaylistCreateIfNeeded; 
@property (readonly) MCPlug * referencingPlug; 
@property (retain) NSDictionary * initialState; 
-(id)specialRetain;
-(void)specialRelease;
-(void)demolish;
-(MCPlug *)referencingPlug;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(MCAudioPlaylist *)audioPlaylistCreateIfNeeded;
-(void)referenceByPlug:(id)arg1 ;
-(void)unreferenceByPlug:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)imprint;
-(MCAudioPlaylist *)audioPlaylist;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAudioDeviceList;

@interface AVAudioClient : NSObject {

	AVAudioDeviceList* deviceList;

}

@property (assign,nonatomic) id changeListener; 
@property (nonatomic,retain) AVAudioDeviceList * deviceList; 
+(void)setAudioSessionProperties:(id)arg1 ;
+(void)startAudioSession;
+(void)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)stopAudioSession;
+(char)hasActiveAudioSession;
+(void)setMicrophoneMuted:(char)arg1 ;
+(char)isMicrophoneMuted;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)currentInputDevice;
+(char)setInputDevice:(id)arg1 ;
+(id)currentOutputDevice;
+(void)initializeAudioSessionQ;
+(char)setOutputDevice:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(AVAudioDeviceList *)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
-(id)inputDevices;
-(id)outputDevices;
-(void)setDeviceList:(AVAudioDeviceList *)arg1 ;
-(id)devices;
@end


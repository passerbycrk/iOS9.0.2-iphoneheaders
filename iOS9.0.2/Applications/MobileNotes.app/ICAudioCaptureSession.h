/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICAudioCaptureOutputWriterDelegate.h>

@protocol OS_dispatch_group, ICAudioCaptureSessionSampleObserver;
@class AVCaptureSession, ICAudioCaptureOutputWriter, NSObject, NSString, NSDate, NSHashTable, AVCaptureDeviceInput, ICAudioCaptureInputWaveformDataSource;

@interface ICAudioCaptureSession : NSObject <ICAudioCaptureOutputWriterDelegate> {

	AVCaptureSession* _captureSession;
	ICAudioCaptureOutputWriter* _captureOutputWriter;
	unsigned _backgroundTaskIdentifier;
	NSObject*<OS_dispatch_group> _endCaptureTaskGroup;
	int _sessionCaptureState;
	NSString* _sessionRouteName;
	NSDate* _captureStartDate;
	char _handledFinishedCapturingAfterCompletionSound;
	char _handlingDidFinishCapturing;
	char _deleteCapturedOutWhenFinished;
	char _destinationShouldBeDeleted;
	char _captureBeginSoundEffectDisabled;
	char _captureEndSoundEffectDisabled;
	NSHashTable* _weakObservers;
	AVCaptureDeviceInput* _inputDevice;
	ICAudioCaptureInputWaveformDataSource* _captureWaveformDataSource;
	id<ICAudioCaptureSessionSampleObserver> _sampleObserver;
	int _captureState;

}

@property (nonatomic,readonly) AVCaptureDeviceInput * inputDevice;                                             //@synthesize inputDevice=_inputDevice - In the implementation block
@property (nonatomic,readonly) ICAudioCaptureInputWaveformDataSource * captureWaveformDataSource;              //@synthesize captureWaveformDataSource=_captureWaveformDataSource - In the implementation block
@property (nonatomic,readonly) ICAudioCaptureOutputWriter * captureOutputWriter;                               //@synthesize captureOutputWriter=_captureOutputWriter - In the implementation block
@property (__weak) id<ICAudioCaptureSessionSampleObserver> sampleObserver;                                     //@synthesize sampleObserver=_sampleObserver - In the implementation block
@property (nonatomic,readonly) double captureDestinationComposedDuration; 
@property (nonatomic,readonly) char isCaptureSessionFinished; 
@property (nonatomic,readonly) int captureState;                                                               //@synthesize captureState=_captureState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)playCaptureWillStartSoundEffectWithCompletionBlock:(/*^block*/id)arg1 ;
+(void)playCaptureDidFinishSoundEffectWithCompletionBlock:(/*^block*/id)arg1 ;
-(id<ICAudioCaptureSessionSampleObserver>)sampleObserver;
-(ICAudioCaptureOutputWriter *)captureOutputWriter;
-(void)setSampleObserver:(id<ICAudioCaptureSessionSampleObserver>)arg1 ;
-(int)captureState;
-(char)isPreparing;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_captureInputDeviceRouteDidChangeNotification:(id)arg1 ;
-(void)_applicationWillTerminateNotification:(id)arg1 ;
-(char)_openAVCaptureSessionAndWaitUntilRunning;
-(void)_beginAVCapturingToDestinationInitiallyPaused:(char)arg1 ;
-(void)_closeCaptureSession;
-(void)resumeCapturing;
-(void)_setPostPrepareRequestedState:(int)arg1 ;
-(char)isCaptureActive;
-(char)isCapturePaused;
-(char)isCaptureSessionFinished;
-(void)finishCapturing;
-(double)captureDestinationComposedDuration;
-(void)_postToObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_handleCaptureSessionDidError:(id)arg1 ;
-(void)_enumerateCaptureSessionObserversWithBlock:(/*^block*/id)arg1 ;
-(char)_attachInputToCaptureSession:(id)arg1 ;
-(void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2 ;
-(void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3 ;
-(void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3 ;
-(void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2 ;
-(void)addCaptureSessionObserver:(id)arg1 ;
-(void)removeCaptureSessionObserver:(id)arg1 ;
-(void)prepareToCaptureWithPreparedHandler:(/*^block*/id)arg1 ;
-(void)pauseCapturing;
-(void)disableCaptureBeginSoundEffect;
-(void)disableCaptureEndSoundEffect;
-(AVCaptureDeviceInput *)inputDevice;
-(ICAudioCaptureInputWaveformDataSource *)captureWaveformDataSource;
@end


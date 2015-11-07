/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_semaphore;
@class BWPixelBufferPool, NSObject;

@interface BWPixelTransferNode : BWNode {

	int _cropMode;
	int _liveCropMode;
	CGRect _inputCropRect;
	CGRect _liveInputCropRect;
	char _haveLiveInputCropRect;
	char _passesBuffersThroughWhenPossible;
	char _livePassesBuffersThroughWhenPossible;
	int _rotationDegrees;
	int _liveRotationDegrees;
	char _flipHorizontal;
	char _liveFlipHorizontal;
	char _flipVertical;
	char _liveFlipVertical;
	char _liveZeroFillBuffers;
	char _lowSpeed;
	char _liveLowSpeed;
	unsigned long _outputWidth;
	unsigned long _outputHeight;
	unsigned long _outputPixelFormat;
	OpaqueVTImageRotationSessionRef _rotationSession;
	int _rotationSessionRotationDegrees;
	char _rotationSessionFlipHorizontal;
	char _rotationSessionFlipVertical;
	char _rotationSessionZeroFillBuffers;
	char _rotationSessionLowSpeed;
	OpaqueVTPixelTransferSessionRef _transferSession;
	BWPixelBufferPool* _intermediateBufferPool;
	SCD_Struct_BW12 _intermediatePoolDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	char _makeCurrentConfigurationLiveOnNextRenderCallback;
	NSObject*<OS_dispatch_semaphore> _emitSampleBufferSemaphore;

}
+(void)initialize;
-(void)setOutputWidth:(unsigned long)arg1 ;
-(void)setOutputHeight:(unsigned long)arg1 ;
-(unsigned long)outputWidth;
-(unsigned long)outputHeight;
-(void)dealloc;
-(id)init;
-(int)rotationDegrees;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)setOutputPixelFormat:(unsigned long)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setFlipHorizontal:(char)arg1 ;
-(void)setFlipVertical:(char)arg1 ;
-(void)setInputCropRect:(CGRect)arg1 ;
-(void)setCropMode:(int)arg1 ;
-(void)setLowSpeed:(char)arg1 ;
-(unsigned long)outputPixelFormat;
-(void)setPassesBuffersThroughWhenPossible:(char)arg1 ;
-(char)passesBuffersThroughWhenPossible;
-(void)setEmitSampleBufferSemaphore:(id)arg1 ;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(void)_updateOutputRequirements;
-(char)_zeroFillBuffers;
-(void)_makeCurrentConfigurationLive;
-(char)_emitIfMarkerBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(SCD_Struct_BW12)_intermediateBufferDimensionsForInputDimensions:(SCD_Struct_BW12)arg1 outputDimensions:(SCD_Struct_BW12)arg2 ;
-(long)_ensureIntermediatePoolWithDimensions:(SCD_Struct_BW12)arg1 ;
-(void)_ensureTransferSession;
-(void)_ensureRotationSession;
-(id)_preferredPixelFormats;
-(id)_preferredPixelFormatsWithInputPixelFormatFirst;
-(int)cropMode;
-(CGRect)inputCropRect;
-(char)flipHorizontal;
-(char)flipVertical;
-(char)lowSpeed;
-(id)emitSampleBufferSemaphore;
@end

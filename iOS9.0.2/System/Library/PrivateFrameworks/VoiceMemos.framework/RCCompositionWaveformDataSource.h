/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>
#import <libobjc.A.dylib/RCWaveformDataSourceObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, _RCTimeRangeFileInputWaveformDataSource, RCComposition, NSOperationQueue, NSString;

@interface RCCompositionWaveformDataSource : RCWaveformDataSource <RCWaveformDataSourceObserver> {

	NSObject*<OS_dispatch_queue> _searialQueue;
	float _progressOfFinishedFragments;
	float _progressWeightPerFragment;
	_RCTimeRangeFileInputWaveformDataSource* _activeFragmentDataSource;
	char _preferLoadingFragmentWaveforms;
	char _saveGeneratedWaveform;
	char _highlightLastDecomposedFragment;
	RCComposition* _composition;
	NSOperationQueue* _fragmentLoadingOperationQueue;

}

@property (nonatomic,readonly) RCComposition * composition;                                 //@synthesize composition=_composition - In the implementation block
@property (nonatomic,readonly) char preferLoadingFragmentWaveforms;                         //@synthesize preferLoadingFragmentWaveforms=_preferLoadingFragmentWaveforms - In the implementation block
@property (assign,nonatomic) char saveGeneratedWaveform;                                    //@synthesize saveGeneratedWaveform=_saveGeneratedWaveform - In the implementation block
@property (assign,nonatomic) char highlightLastDecomposedFragment;                          //@synthesize highlightLastDecomposedFragment=_highlightLastDecomposedFragment - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fragmentLoadingOperationQueue;              //@synthesize fragmentLoadingOperationQueue=_fragmentLoadingOperationQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)duration;
-(RCComposition *)composition;
-(void)startLoading;
-(float)loadingProgress;
-(void)waveformDataSourceDidFinishLoading:(id)arg1 ;
-(void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithComposition:(id)arg1 ;
-(void)setSaveGeneratedWaveform:(char)arg1 ;
-(char)preferLoadingFragmentWaveforms;
-(id)saveableWaveform;
-(SCD_Struct_RC4)timeRangeToHighlight;
-(id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(SCD_Struct_RC4)arg1 ;
-(char)_synchronouslyAppendSegmentsForAVContentURL:(id)arg1 isDecomposedFragment:(char)arg2 sourceTimeRange:(SCD_Struct_RC4)arg3 destinationTime:(double)arg4 ;
-(char)saveGeneratedWaveform;
-(char)highlightLastDecomposedFragment;
-(void)setHighlightLastDecomposedFragment:(char)arg1 ;
-(NSOperationQueue *)fragmentLoadingOperationQueue;
-(void)setFragmentLoadingOperationQueue:(NSOperationQueue *)arg1 ;
@end

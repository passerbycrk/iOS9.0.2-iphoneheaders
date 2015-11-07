/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECInternalConsumer.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSUUID, NSString, _DECItem;

@interface _DECStarkConsumer : _DECInternalConsumer {

	char _providedEngagementFeedback;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _mediaremoteQueue;
	NSUUID* _predictionToClear;
	void* _activity;
	NSUUID* _mostRecentPredictionIdentifier;
	NSString* _mostRecentPredictionBundleId;
	_DECItem* _mostRecentPrediction;
	NSObject*<OS_dispatch_source> _recommendationTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaremoteQueue;                  //@synthesize mediaremoteQueue=_mediaremoteQueue - In the implementation block
@property (retain) NSUUID * predictionToClear;                                               //@synthesize predictionToClear=_predictionToClear - In the implementation block
@property (assign) void* activity;                                                           //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) NSUUID * mostRecentPredictionIdentifier;                        //@synthesize mostRecentPredictionIdentifier=_mostRecentPredictionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * mostRecentPredictionBundleId;                        //@synthesize mostRecentPredictionBundleId=_mostRecentPredictionBundleId - In the implementation block
@property (nonatomic,retain) _DECItem * mostRecentPrediction;                                //@synthesize mostRecentPrediction=_mostRecentPrediction - In the implementation block
@property (assign,nonatomic) char providedEngagementFeedback;                                //@synthesize providedEngagementFeedback=_providedEngagementFeedback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recommendationTimer;              //@synthesize recommendationTimer=_recommendationTimer - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(void*)activity;
-(void)setActivity:(void*)arg1 ;
-(NSObject*<OS_dispatch_source>)recommendationTimer;
-(void)setRecommendationTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_provideRecommendationFeedback:(char)arg1 ;
-(char)providedEngagementFeedback;
-(NSString *)mostRecentPredictionBundleId;
-(NSUUID *)mostRecentPredictionIdentifier;
-(void)setProvidedEngagementFeedback:(char)arg1 ;
-(void)_cancelRecommendationTimer;
-(void)_clearRecommendation;
-(void)_recommend:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)mediaremoteQueue;
-(void)setPredictionToClear:(NSUUID *)arg1 ;
-(void)_cleanupRecommendation;
-(void)setMostRecentPrediction:(_DECItem *)arg1 ;
-(void)setMostRecentPredictionIdentifier:(NSUUID *)arg1 ;
-(void)setMostRecentPredictionBundleId:(NSString *)arg1 ;
-(void)_setupRecommendationTimer;
-(NSUUID *)predictionToClear;
-(void)_clearPredictionFeedbackState;
-(void)receivePrediction:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setMediaremoteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_DECItem *)mostRecentPrediction;
-(void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(/*^block*/id)arg1 ;
-(void)fetchMediaRemoteNowPlayingApplicationBundleId:(/*^block*/id)arg1 ;
-(void)_handleNowPlayingApplicationIsPlayingDidChange;
-(void)handleNowPlayingApplicationIsPlayingDidChange;
@end

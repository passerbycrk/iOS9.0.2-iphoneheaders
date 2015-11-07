/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, MPCluster, MPDocument, NSDate;

@interface MPClusterController : NSObject {

	NSMutableDictionary* mSlides;
	NSMutableDictionary* mSlideClusters;
	MPCluster* mAllSlidesCluster;
	float mMinimumRequiredClusterRating;
	MPDocument* mAuthoredDocument;
	NSDate* mOldestSlideTimestamp;
	NSDate* mNewestSlideTimestamp;

}
+(void)releaseSharedController;
+(id)sharedController;
-(id)findBestChronologicalCluster:(id)arg1 startingWithSlide:(id)arg2 ;
-(void)createLocationClustersForPaths:(id)arg1 ;
-(id)findBestClusterBasedOnUserDefinedSlideOrder:(id)arg1 startingWithSlide:(id)arg2 ;
-(void)addPaths:(id)arg1 toUserDefinedCluster:(id)arg2 ;
-(void)sortClusterSlidesChronologically:(id*)arg1 ;
-(void)dumpClustersStatistics;
-(id)slideForPath:(id)arg1 ;
-(id)keywordClusters;
-(id)monthClusters;
-(id)yearClusters;
-(id)allSlides;
-(void)addKeywords:(id)arg1 forSlide:(id)arg2 ;
-(void)updateYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMonthClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMonthOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateDayOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateHourOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateRoundedFiveMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateRoundedFifteenMinuteOfYearClustersWithDate:(id)arg1 ofSlide:(id)arg2 ;
-(void)updateAllSlidesClusterWithSlide:(id)arg1 ;
-(id)allSlidesSortedByUsage;
-(id)yearClusterForAssetAtPath:(id)arg1 ;
-(id)monthClusterForAssetAtPath:(id)arg1 ;
-(id)monthOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)dayOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)hourOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)minuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)roundedFiveMinuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(id)roundedFifteenMinuteOfYearClusterForAssetAtPath:(id)arg1 ;
-(void)resetAllUsageCounters;
-(id)allSlidesSortedChronologically;
-(id)findBestCluster:(id)arg1 ;
-(void)_removeAllSingleSlideClustersForClusterCategory:(id)arg1 ;
-(id)prioritizedSlideClustersDictionary;
-(void)updateClusterRatings;
-(id)monthOfYearClusters;
-(id)dayOfYearClusters;
-(id)hourOfYearClusters;
-(id)minuteOfYearClusters;
-(id)roundedFiveMinuteOfYearClusters;
-(id)roundedFifteenMinuteOfYearClusters;
-(id)locationClusters;
-(id)userProvidedClusters;
-(void)removeAllSingleSlideClusters;
-(void)updateRatingsForYearClusters;
-(void)updateRatingsForMonthClusters;
-(void)updateRatingsForMonthOfYearClusters;
-(void)updateRatingsForDayOfYearClusters;
-(void)updateRatingsForHourOfYearClusters;
-(void)updateRatingsForMinuteOfYearClusters;
-(void)updateRatingsForRoundedFiveMinuteOfYearClusters;
-(void)updateRatingsForRoundedFifteenMinuteOfYearClusters;
-(void)updateRatingsForKeywordClusters;
-(void)updateRatingsForLocationClusters;
-(void)setAuthoredDocument:(id)arg1 ;
-(id)orderedAndPrioritizedSlideClusters;
-(id)clustersBasedOnOrderedPaths:(id)arg1 ;
-(id)allSlidesSortedByPaths:(id)arg1 ;
-(id)findBestCluster:(id)arg1 withMaxEffectSize:(int)arg2 idealEffectSize:(int)arg3 ;
-(int)addSlideForPath:(id)arg1 withIndex:(int)arg2 ;
-(id)clusterSlidesSortedByUserDefinedSortOrder:(id)arg1 userDefinedSlideOrder:(id)arg2 ;
-(id)nextLeastUsedSlides:(int)arg1 forLayer:(id)arg2 markAsUsed:(char)arg3 ;
-(void)flushClusters;
-(id)clusterSlidesSortedChronologically:(id)arg1 ;
-(void)dumpSlidesStatistics;
-(void)dealloc;
-(id)init;
-(void)flush;
@end

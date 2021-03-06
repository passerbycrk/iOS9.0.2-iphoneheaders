/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OccurrenceCacheDataSourceProtocol <NSObject>
@required
-(int)cachedDayCount;
-(id)initWithEventStore:(id)arg1 calendars:(id)arg2;
-(char)supportsInvitations;
-(char)supportsFakeTodaySection;
-(char)cachedOccurrencesAreLoaded;
-(char)cachedOccurrencesAreBeingGenerated;
-(int)countOfOccurrencesAtDayIndex:(int)arg1;
-(id)dateAtDayIndex:(int)arg1;
-(id)cachedOccurrenceAtIndexPath:(id)arg1;
-(int)sectionForCachedOccurrencesOnDate:(id)arg1;
-(void)invalidateCachedOccurrences;
-(void)fetchDaysInBackgroundStartingFromSection:(int)arg1;
-(void)searchWithTerm:(id)arg1;
-(void)stopSearching;
-(void)invalidate;

@end


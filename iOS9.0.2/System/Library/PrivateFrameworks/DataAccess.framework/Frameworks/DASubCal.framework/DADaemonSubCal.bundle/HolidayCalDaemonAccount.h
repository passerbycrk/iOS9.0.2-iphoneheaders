/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DADaemonSubCal.bundle/DADaemonSubCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSubCal/DADaemonSubCal-Structs.h>
#import <DADaemonSubCal/SubCalDaemonAccount.h>
#import <DADaemonSubCal/DADataclassLockWatcher.h>
#import <libobjc.A.dylib/CoreDAVAccountInfoProvider.h>

@class NSDate, NSTimer, CalDAVCalendarSearchTask, NSString;

@interface HolidayCalDaemonAccount : SubCalDaemonAccount <DADataclassLockWatcher, CoreDAVAccountInfoProvider> {

	NSDate* _lastRefreshDate;
	NSTimer* _refreshTimer;
	CalDAVCalendarSearchTask* _searchTask;

}

@property (nonatomic,retain) NSTimer * refreshTimer;                             //@synthesize refreshTimer=_refreshTimer - In the implementation block
@property (nonatomic,retain) CalDAVCalendarSearchTask * searchTask;              //@synthesize searchTask=_searchTask - In the implementation block
@property (nonatomic,readonly) NSString * region; 
@property (nonatomic,readonly) NSString * language; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isHolidaySubscribedCalendar;
-(void)_unregisterForNotifications;
-(void)dealloc;
-(NSString *)region;
-(NSString *)language;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)waiterID;
-(char)monitorFoldersWithIDs:(id)arg1 ;
-(void)stopMonitoringFolders;
-(id)calendarExternalId;
-(void)subCalRefreshTask:(id)arg1 finishedWithError:(id)arg2 ;
-(void)_tearDownRefreshTimer;
-(void)setSearchTask:(CalDAVCalendarSearchTask *)arg1 ;
-(void*)_copyHolidaySubscribedCalendar;
-(void)_reallyRemoveHolidaySubscribedCalendar;
-(void)_removeHolidaySubscribedCalendar;
-(void)_handleCalendarSearchResults:(id)arg1 ;
-(id)_lastRefreshDate;
-(char)_calendarHasCorrectLocale;
-(void)_fetchUpdatedSubscriptionURL;
-(void)_saveLastRefreshDate:(id)arg1 ;
-(void)_saveCurrentLanguageAndLocale;
-(void)_refreshTimerFired:(id)arg1 ;
-(void)_saveHolidayCalMetadata:(id)arg1 ;
-(NSTimer *)refreshTimer;
-(void)setRefreshTimer:(NSTimer *)arg1 ;
-(CalDAVCalendarSearchTask *)searchTask;
-(void)_localeDidChange:(id)arg1 ;
-(void)_refresh:(char)arg1 ;
@end

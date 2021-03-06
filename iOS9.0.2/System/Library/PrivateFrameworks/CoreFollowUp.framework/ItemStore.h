/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/followupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <followupd/followupd-Structs.h>
@class NSObject;

@interface ItemStore : NSObject {

	sqlite3Ref _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;

}
+(id)sharedInstance;
-(void)enumerateFollowUpItemsWithHandler:(/*^block*/id)arg1 ;
-(void)enumerateFollowUpItemsWithUniqueIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(char)deleteFollowUpItem:(id)arg1 ;
-(char)insertFollowUpItem:(id)arg1 ;
-(id)followUpItems;
-(long long)_insertFollowUpItem:(id)arg1 ;
-(long long)_insertAction:(id)arg1 item:(id)arg2 ;
-(long long)_insertNotification:(id)arg1 item:(id)arg2 ;
-(char)deleteNotificationForFollowUpItem:(id)arg1 ;
-(char)deleteActionsForFollowUpItem:(id)arg1 ;
-(char)deleteActionWithID:(long long)arg1 ;
-(char)_deleteFollowUpItem:(id)arg1 ;
-(void)_selectFollowUpItemsWithUniqueIdentifiers:(id)arg1 rowHandler:(/*^block*/id)arg2 ;
-(id)stringFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(id)dataFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(void)_unsafeSelectFollowUpActionsForItem:(id)arg1 orActionID:(long long)arg2 rowHandler:(/*^block*/id)arg3 ;
-(id)_unsafeSelectNotificationForFollowUpItem:(id)arg1 ;
-(id)urlFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(id)dateFromColumn:(int)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(id)_selectNotificationForFollowUpItem:(id)arg1 ;
-(id)init;
-(sqlite3Ref)_database;
-(void)_closeDatabase;
-(void)_openDatabase;
-(id)_databaseFilename;
-(long long)_performQuery:(id)arg1 rowHandler:(/*^block*/id)arg2 ;
-(void)_ensureCorrectSchema;
-(long long)_schemaVersion;
@end


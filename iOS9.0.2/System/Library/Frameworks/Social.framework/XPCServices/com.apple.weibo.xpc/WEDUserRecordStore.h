/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.weibo.xpc/com.apple.weibo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@class WEDSession, SLDatabase, ACAccount, ACAccountStore, NSString;

@interface WEDUserRecordStore : NSObject <ABSearchOperationDelegate> {

	WEDSession* _weakSession;
	SLDatabase* _database;
	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateFollowedUserRecords;
-(void)_runSynchronouslyOnCoreDataQueue:(/*^block*/id)arg1 ;
-(id)_userRecordWithDictionaryRepresentation:(id)arg1 existed:(char*)arg2 ;
-(void)_saveUserRecordStoreWithHandler:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 database:(id)arg2 account:(id)arg3 accountStore:(id)arg4 ;
-(void)updateFollowedUserRecordsIfNeeded;
-(void)userRecordsMatchingPredicate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_userRecordEntityWithScreenName:(id)arg1 ;
-(void)_consumeUserRecordRepresentations:(id)arg1 ;
-(void)_fetchFollowedUserRecordsWithCursor:(id)arg1 ;
-(void)_consumeAddressBookRecords:(id)arg1 ;
-(void)_findABEntriesWithWeiboScreenNames:(/*^block*/id)arg1 ;
-(id)_userRecordEntityWithUID:(id)arg1 ;
-(void)_consumeScreenName:(id)arg1 existed:(char*)arg2 ;
-(void)_findABEntriesWithScreenName:(id)arg1 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
-(void)dealloc;
@end

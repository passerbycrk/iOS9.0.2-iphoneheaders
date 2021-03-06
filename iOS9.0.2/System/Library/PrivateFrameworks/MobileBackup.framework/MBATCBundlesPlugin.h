/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBPlugin.h>

@interface MBATCBundlesPlugin : NSObject <MBPlugin>
-(char)shouldBackgroundRestoreContentWithEngine:(id)arg1 fileInfo:(id)arg2 ;
-(char)shouldRestoreContentWithEngine:(id)arg1 fileInfo:(id)arg2 ;
-(id)startingBackupWithEngine:(id)arg1 ;
-(id)endingBackupWithEngine:(id)arg1 ;
-(id)_atClientController;
-(id)_standardizePath:(id)arg1 fromDomain:(id)arg2 ;
-(id)_populatePathsForEngine:(id)arg1 domain:(id)arg2 dataclass:(id)arg3 ;
-(void)_populateAccountsForEngine:(id)arg1 dataclasses:(id)arg2 ;
@end


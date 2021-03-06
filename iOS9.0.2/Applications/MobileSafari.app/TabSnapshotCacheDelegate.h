/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TabSnapshotCacheDelegate <NSObject>
@required
-(void)tabSnapshotCache:(id)arg1 didCacheSnapshotWithIdentifier:(id)arg2;
-(void)tabSnapshotCache:(id)arg1 didEvictSnapshotWithIdentifier:(id)arg2;
-(void)tabSnapshotCache:(id)arg1 requestSnapshotWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)tabSnapshotCacheDidFinishUpdating:(id)arg1;
-(char)tabSnapshotCache:(id)arg1 shouldRequestSavedSnapshotWithIdentifier:(id)arg2;

@end


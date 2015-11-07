/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>
@property (nonatomic,readonly) NSString * databasePath; 
@property (nonatomic,readonly) long long playbackHistoryPlaylistPersistentID; 
@property (nonatomic,readonly) char isGeniusEnabled; 
@property (nonatomic,readonly) NSArray * preferredAudioLanguages; 
@property (nonatomic,readonly) NSArray * preferredSubtitleLanguages; 
@property (nonatomic,readonly) id<MPArtworkDataSource> completeMyCollectionArtworkDataSource; 
@property (nonatomic,readonly) NSArray * localizedSectionIndexTitles; 
@optional
-(NSArray *)preferredAudioLanguages;
-(NSArray *)preferredSubtitleLanguages;
-(id<MPArtworkDataSource>)completeMyCollectionArtworkDataSource;
-(void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(char)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long)arg2 groupingType:(int)arg3 existentPID:(unsigned long long*)arg4;
-(char)collectionExistsWithName:(id)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(int)arg2 artworkToken:(id)arg3 artworkType:(int)arg4 sourceType:(int)arg5;
-(char)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(int)arg3 sourceType:(int)arg4 mediaType:(unsigned)arg5;
-(char)itemExistsWithPersistentID:(unsigned long long)arg1;
-(char)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
-(id)lastModifiedDate;
-(char)hasMediaOfType:(unsigned)arg1;
-(char)hasGeniusMixes;
-(char)hasUbiquitousBookmarkableItems;
-(char)playlistExistsWithPersistentID:(unsigned long long)arg1;
-(long long)itemPersistentIDForStoreID:(long long)arg1;
-(id)localizedSectionHeaderForSectionIndex:(unsigned)arg1;
-(NSArray *)localizedSectionIndexTitles;
-(long long)playbackHistoryPlaylistPersistentID;
-(long long)addPlaylistWithValuesForProperties:(id)arg1;
-(char)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
-(id)valueForDatabaseProperty:(id)arg1;
-(char)deleteItemsWithIdentifiers:(long long*)arg1 count:(unsigned)arg2;
-(char)removeItemsWithIdentifiers:(long long*)arg1 count:(unsigned)arg2;
-(char)removePlaylistWithIdentifier:(long long)arg1;
-(void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2 assetProtectionType:(int)arg3;
-(void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
-(char)isGeniusEnabled;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1;
-(char)isCurrentThreadInTransaction;
-(char)collectionExistsWithStoreID:(long long)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
-(void)addPlaylistStoreItemsForLookupItems:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addTracksToMyLibrary:(id)arg1;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(char)arg2 completion:(/*^block*/id)arg3;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(int)arg4 completionBlock:(/*^block*/id)arg5;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)addItemsWithIdentifiers:(id)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)removeItemsWithIdentifiers:(id)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
-(void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
-(void)moveItemFromIndex:(unsigned)arg1 toIndex:(unsigned)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(/*^block*/id)arg4;
-(void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)releaseGeniusClusterPlaylist:(void*)arg1;
-(void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned)arg2 error:(id*)arg3;
-(long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned*)arg2 error:(id*)arg3;
-(void)updateEntitesToCurrentRevision;
-(char)supportsEntityChangeTrackingForMediaEntityType:(int)arg1 collectionGroupingType:(int)arg2 dataProviderClass:(out Class*)arg3;
-(NSString *)databasePath;
-(char)performTransactionWithBlock:(/*^block*/id)arg1;

@end

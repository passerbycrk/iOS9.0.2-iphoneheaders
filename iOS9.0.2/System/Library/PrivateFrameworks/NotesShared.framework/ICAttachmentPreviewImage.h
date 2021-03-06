/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>

@class NSDate, NSSet, NSData;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject {

	unsigned _imageID;

}

@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) char versionOutOfDate; 
@property (nonatomic,retain) NSDate * modifiedDate; 
@property (nonatomic,retain) NSSet * attachments; 
@property (assign,nonatomic) char scaleWhenDrawing; 
@property (nonatomic,retain) NSData * metadata; 
+(id)imageCache;
+(id)recordType;
+(id)identifierForContentIdentifier:(id)arg1 scale:(float)arg2 width:(float)arg3 height:(float)arg4 ;
+(void)purgeAllPreviewImages;
+(UIImage*)orientedImage:(UIImage*)arg1 withTransform:(CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(CGAffineTransform)arg4 ;
+(id)previewImageDirectoryURL;
+(id)fileQueue;
+(void)waitUntilFileAccessIsFinished;
+(id)allCloudObjects;
+(id)existingCloudObjectForRecordID:(id)arg1 ;
+(id)newCloudObjectForRecord:(id)arg1 ;
-(CGSize)size;
-(UIImage*)image;
-(id)recordZoneID;
-(id)loggingDescriptionValues;
-(void)deleteFromLocalDatabase;
-(void)setImage:(UIImage*)arg1 withScale:(float)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateImage;
-(id)previewImageURL;
-(UIImage*)orientedImage;
-(char)needsInitialFetchFromCloud;
-(id)orientedImageID;
-(void)invalidateOrientedImage;
-(id)temporaryPreviewImageURL;
-(void)setCachedOrientedImage:(UIImage*)arg1 ;
-(id)orientedPreviewImageURLCreateIfNeeded:(char)arg1 ;
-(void)setCachedImage:(UIImage*)arg1 ;
-(UIImage*)cachedOrientedImage;
-(int)previewImageOrientation;
-(CGAffineTransform)orientedImageTransform;
-(UIImage*)cachedImage;
-(id)oldPreviewImageURL;
-(id)newImageLoaderForUpdatingImageOnCompletion:(char)arg1 ;
-(char)makeSurePreviewImageDirectoryExists:(id*)arg1 ;
-(UIImage*)orientedImageWithBackground:(int)arg1 ;
-(char)isSketch;
-(UIImage*)imageWithBackground:(int)arg1 ;
-(id)orientedPreviewImageURL;
-(char)shouldSyncToCloud;
-(char)supportsDeletionByTTL;
-(id)threadUnsafeNewlyCreatedRecord;
-(char)needsToBeFetchedFromCloud;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 ;
-(char)needsToBePushedToCloud;
-(char)needsToBeDeletedFromCloud;
-(char)isInICloudAccount;
-(void)resetUniqueIdentifier;
-(void)mergeDataFromRecord:(id)arg1 newPreviewImage:(char)arg2 ;
-(char)resolveReference:(id)arg1 forKey:(id)arg2 ;
-(void)prepareForDeletion;
@end


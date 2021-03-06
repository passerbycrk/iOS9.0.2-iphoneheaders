/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableArray, NSMapTable, CKDCancelTokenGroup;

@interface CKDUploadAssetsOperation : CKDDatabaseOperation {

	/*^block*/id _uploadPreparationBlock;
	/*^block*/id _uploadProgressBlock;
	/*^block*/id _uploadCompletionBlock;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _assetsToUpload;
	NSMutableArray* _MMCSItemsToUpload;
	NSMapTable* _uploadTasksByPackages;
	NSMutableArray* _packageManifests;
	NSMutableArray* _openedPackages;
	CKDCancelTokenGroup* _cancelTokens;
	unsigned _maxPackageUploadsPerBatch;

}

@property (nonatomic,copy) id uploadPreparationBlock;                         //@synthesize uploadPreparationBlock=_uploadPreparationBlock - In the implementation block
@property (nonatomic,copy) id uploadProgressBlock;                            //@synthesize uploadProgressBlock=_uploadProgressBlock - In the implementation block
@property (nonatomic,copy) id uploadCompletionBlock;                          //@synthesize uploadCompletionBlock=_uploadCompletionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSArray * assetsToUpload;                        //@synthesize assetsToUpload=_assetsToUpload - In the implementation block
@property (nonatomic,retain) NSMutableArray * MMCSItemsToUpload;              //@synthesize MMCSItemsToUpload=_MMCSItemsToUpload - In the implementation block
@property (nonatomic,retain) NSMapTable * uploadTasksByPackages;              //@synthesize uploadTasksByPackages=_uploadTasksByPackages - In the implementation block
@property (nonatomic,retain) NSMutableArray * packageManifests;               //@synthesize packageManifests=_packageManifests - In the implementation block
@property (nonatomic,retain) NSMutableArray * openedPackages;                 //@synthesize openedPackages=_openedPackages - In the implementation block
@property (nonatomic,retain) CKDCancelTokenGroup * cancelTokens;              //@synthesize cancelTokens=_cancelTokens - In the implementation block
@property (assign,nonatomic) unsigned maxPackageUploadsPerBatch;              //@synthesize maxPackageUploadsPerBatch=_maxPackageUploadsPerBatch - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)cancel;
-(void)main;
-(void)setUploadCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)makeStateTransition;
-(CKDCancelTokenGroup *)cancelTokens;
-(void)setCancelTokens:(CKDCancelTokenGroup *)arg1 ;
-(void)_didPrepareAsset:(id)arg1 ;
-(void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2 ;
-(void)_collectMetricsFromMMCSOperationMetrics:(id)arg1 ;
-(void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2 ;
-(void)_collectMetricsFromCompletedItemGroup:(id)arg1 ;
-(void)_didMakeProgressForMMCSItem:(id)arg1 ;
-(void)_collectMetricsFromCompletedItemGroupSet:(id)arg1 ;
-(char)_prepareForUpload;
-(char)_fetchUploadTokens;
-(char)_upload;
-(NSMutableArray *)openedPackages;
-(void)setOpenedPackages:(NSMutableArray *)arg1 ;
-(id)uploadPreparationBlock;
-(id)uploadProgressBlock;
-(id)uploadCompletionBlock;
-(void)_didUploadAsset:(id)arg1 error:(id)arg2 ;
-(void)setMMCSItemsToUpload:(NSMutableArray *)arg1 ;
-(void)setUploadTasksByPackages:(NSMapTable *)arg1 ;
-(NSArray *)assetsToUpload;
-(void)_openPackage:(id)arg1 ;
-(char)_planSectionsForPackage:(id)arg1 error:(id*)arg2 ;
-(void)setPackageManifests:(NSMutableArray *)arg1 ;
-(void)_didPrepareMMCSItems:(id)arg1 uploadTasksByPackages:(id)arg2 error:(id)arg3 ;
-(NSMapTable *)uploadTasksByPackages;
-(NSMutableArray *)MMCSItemsToUpload;
-(void)_didFechUploadTokensForMMCSItems:(id)arg1 error:(id)arg2 ;
-(void)_didUploadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3 ;
-(void)_didUploadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3 ;
-(void)_uploadPackageSectionsWithEnumerator:(id)arg1 task:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_uploadPackageSection:(id)arg1 task:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_closePackage:(id)arg1 ;
-(unsigned)maxPackageUploadsPerBatch;
-(void)_uploadPackageSectionsWithPendingTasks:(id)arg1 uploadingTasks:(id)arg2 completedTasks:(id)arg3 ;
-(void)_uploadPackageSectionsWithTask:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_didUploadMMCSItem:(id)arg1 error:(id)arg2 ;
-(void)setMaxPackageUploadsPerBatch:(unsigned)arg1 ;
-(void)_didUploadPackageWithTask:(id)arg1 ;
-(void)_didUploadMMCSItems:(id)arg1 error:(id)arg2 ;
-(NSMutableArray *)packageManifests;
-(void)_closeAllPackages;
-(void)_removePackageManifests;
-(void)setUploadPreparationBlock:(id)arg1 ;
-(void)setUploadProgressBlock:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToUpload:(id)arg3 ;
-(void)setAssetsToUpload:(NSArray *)arg1 ;
@end


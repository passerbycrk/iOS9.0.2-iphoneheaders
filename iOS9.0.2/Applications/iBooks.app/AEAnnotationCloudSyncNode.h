/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/IMCloudSyncNode.h>

@interface AEAnnotationCloudSyncNode : IMCloudSyncNode
+(id)userAnnotationsKeyForAssetID:(id)arg1 ;
+(id)globalAnnotationsKeyForAssetID:(id)arg1 ;
+(id)cloudDataCurrentRevision;
+(id)cloudDataMaxRevision;
-(id)assetID;
-(char)isAnnotationsNode;
-(char)isUserAnnotationsNode;
-(char)isGlobalAnnotationsNode;
-(id)name;
@end


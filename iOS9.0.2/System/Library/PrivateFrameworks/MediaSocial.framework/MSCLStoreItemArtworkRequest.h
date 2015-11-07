/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <StoreKitUI/SKUIArtworkRequest.h>

@class MPArtworkCatalog;

@interface MSCLStoreItemArtworkRequest : SKUIArtworkRequest {

	MPArtworkCatalog* _artworkCatalog;
	CGSize _imageSize;

}
-(id)initWithStoreItem:(id)arg1 imageSize:(CGSize)arg2 ;
-(id)newLoadOperation;
@end

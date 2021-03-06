/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class AEAnnotationProvider;


@protocol AEPlugin <NSObject>
@property (nonatomic,retain) AEAnnotationProvider * annotationProvider; 
@optional
-(char)deleteAssetAtURL:(id)arg1;
-(AEAnnotationProvider *)annotationProvider;
-(void)setAnnotationProvider:(id)arg1;

@required
-(id)associatedAssetType;
-(id)supportedFileExtensions;
-(id)supportedUrlSchemes;
-(id)helperForURL:(id)arg1 withOptions:(id)arg2;
-(id)proofingHelperForMetadata:(id)arg1;

@end


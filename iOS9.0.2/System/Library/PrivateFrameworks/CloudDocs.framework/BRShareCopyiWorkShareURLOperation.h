/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation {

	CKShare* _share;
	NSString* _appName;
	/*^block*/id _shareCopyURLCompletionBlock;

}

@property (copy) id shareCopyURLCompletionBlock;              //@synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock - In the implementation block
@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)dealloc;
-(void)main;
-(id)shareCopyURLCompletionBlock;
-(void)setShareCopyURLCompletionBlock:(id)arg1 ;
-(id)initWithShare:(id)arg1 appName:(id)arg2 ;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appName;
@end


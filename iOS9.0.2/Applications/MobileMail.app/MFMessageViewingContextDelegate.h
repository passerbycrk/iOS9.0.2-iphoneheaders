/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMessageViewingContextDelegate <NSObject>
@optional
-(void)messageViewingContext:(id)arg1 attachmentLoadCompleted:(id)arg2;
-(void)messageViewingContextContentLoadWillBegin:(id)arg1;
-(void)messageViewingContextContentLoadCompleted:(id)arg1;
-(void)messageViewingContextFullMessageLoadFailed:(id)arg1;
-(void)messageViewingContext:(id)arg1 attachmentLoadCompleted:(id)arg2 withData:(id)arg3;
-(void)messageViewingContextMessageAnalysisCompleted:(id)arg1;

@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIPreviewPresentationController;


@protocol BKLibraryPreviewPresenting <UIViewControllerPreviewingDelegate,UIViewControllerPreviewingDelegate_Private>
@property (assign,nonatomic,__weak) UIPreviewPresentationController * previewPresentationController; 
@required
+(id)previewPresenterForBook:(id)arg1 originatingViewController:(id)arg2;
-(void)setPreviewPresentationController:(id)arg1;
-(UIPreviewPresentationController *)previewPresentationController;

@end


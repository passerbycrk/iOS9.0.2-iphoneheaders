/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated.h>

@class ICImagesAndMoviesScrollView, NSString;

@interface ICImagesAndMoviesBrowserController : UIViewController <UIViewControllerPreviewingDelegate_Deprecated> {

	short _attachmentSection;
	ICImagesAndMoviesScrollView* _scrollView;

}

@property (nonatomic,retain) ICImagesAndMoviesScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) short attachmentSection;                               //@synthesize attachmentSection=_attachmentSection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAttachmentSection:(short)arg1 ;
-(short)attachmentSection;
-(id)collectionViewCellAtPosition:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(id)initWithAttachmentSection:(short)arg1 ;
-(void)setScrollView:(ICImagesAndMoviesScrollView *)arg1 ;
-(ICImagesAndMoviesScrollView *)scrollView;
-(void)loadView;
-(void)viewDidLoad;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)commitPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
@end

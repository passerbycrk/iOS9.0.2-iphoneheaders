/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionReusableView.h>

@protocol ICBrowseAttachmentsHeaderViewDelegate;
@class UILabel, NSLayoutConstraint, UIButton;

@interface ICBrowseAttachmentsHeaderView : UICollectionReusableView {

	short _attachmentSection;
	UILabel* _sectionLabel;
	NSLayoutConstraint* _sectionLabelLeadingConstraint;
	UIButton* _seeAllButton;
	NSLayoutConstraint* _seeAllButtonTrailingConstraint;
	id<ICBrowseAttachmentsHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) UILabel * sectionLabel;                                           //@synthesize sectionLabel=_sectionLabel - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * sectionLabelLeadingConstraint;               //@synthesize sectionLabelLeadingConstraint=_sectionLabelLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIButton * seeAllButton;                                          //@synthesize seeAllButton=_seeAllButton - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * seeAllButtonTrailingConstraint;              //@synthesize seeAllButtonTrailingConstraint=_seeAllButtonTrailingConstraint - In the implementation block
@property (assign,nonatomic) short attachmentSection;                                                 //@synthesize attachmentSection=_attachmentSection - In the implementation block
@property (assign,nonatomic,__weak) id<ICBrowseAttachmentsHeaderViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)setAttachmentSection:(short)arg1 ;
-(short)attachmentSection;
-(UILabel *)sectionLabel;
-(NSLayoutConstraint *)sectionLabelLeadingConstraint;
-(UIButton *)seeAllButton;
-(NSLayoutConstraint *)seeAllButtonTrailingConstraint;
-(void)seeAll:(id)arg1 ;
-(void)setSectionLabel:(UILabel *)arg1 ;
-(void)setSectionLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSeeAllButton:(UIButton *)arg1 ;
-(void)setSeeAllButtonTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDelegate:(id<ICBrowseAttachmentsHeaderViewDelegate>)arg1 ;
-(id<ICBrowseAttachmentsHeaderViewDelegate>)delegate;
-(void)contentSizeCategoryDidChange;
@end


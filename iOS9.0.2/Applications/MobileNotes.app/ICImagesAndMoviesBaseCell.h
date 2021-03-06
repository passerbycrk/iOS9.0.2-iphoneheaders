/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICBrowseAttachmentsBaseCell.h>

@class UIView, NSArray;

@interface ICImagesAndMoviesBaseCell : ICBrowseAttachmentsBaseCell {

	UIView* _thumbnailView;
	unsigned _thumbnailLayout;
	NSArray* _ourConstraints;
	float _aspectRatio;

}

@property (nonatomic,retain) UIView * thumbnailView;                //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) unsigned thumbnailLayout;              //@synthesize thumbnailLayout=_thumbnailLayout - In the implementation block
@property (nonatomic,copy) NSArray * ourConstraints;                //@synthesize ourConstraints=_ourConstraints - In the implementation block
@property (assign,nonatomic) float aspectRatio;                     //@synthesize aspectRatio=_aspectRatio - In the implementation block
-(id)initWithThumbnailView:(id)arg1 frame:(CGRect)arg2 ;
-(unsigned)thumbnailLayout;
-(unsigned)computedThumbnailLayout;
-(void)updateAspectRatio;
-(NSArray *)ourConstraints;
-(void)setOurConstraints:(NSArray *)arg1 ;
-(void)setThumbnailLayout:(unsigned)arg1 ;
-(float)aspectRatio;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)updateConstraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setThumbnailView:(UIView *)arg1 ;
-(UIView *)thumbnailView;
-(void)setAttachment:(id)arg1 ;
-(void)setAspectRatio:(float)arg1 ;
@end


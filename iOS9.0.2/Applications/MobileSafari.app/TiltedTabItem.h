/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@class UIImage, UIImageView, NSString, TiltedTabView, TabThumbnailView, GradientView, UIView, UIColor, UIButton;

@interface TiltedTabItem : NSObject {

	UIImage* _snapshot;
	UIImageView* _snapshotView;
	char _closeButtonUsesOutlineStyle;
	char _contentViewNeedsRemoval;
	char _reordering;
	char _closing;
	char _finishedClosing;
	NSString* _title;
	TiltedTabView* _tiltedTabView;
	TabThumbnailView* _contentView;
	float _topBackdropHeight;
	GradientView* _contentShadowView;
	UIView* _contentClipperView;
	UIView* _borrowedContentView;
	float _borrowedContentScale;
	UIImage* _blankSnapshot;
	int _transition;
	unsigned _indexForLayout;
	unsigned _countForLayout;
	float _verticalScrollAdjustment;
	CGRect _closeButtonHitRect;

}

@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIColor * titleColor; 
@property (nonatomic,retain) UIImage * snapshot;                                         //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) TiltedTabView * tiltedTabView;                              //@synthesize tiltedTabView=_tiltedTabView - In the implementation block
@property (nonatomic,readonly) TabThumbnailView * contentView;                           //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) float topBackdropHeight;                                    //@synthesize topBackdropHeight=_topBackdropHeight - In the implementation block
@property (nonatomic,readonly) GradientView * contentShadowView;                         //@synthesize contentShadowView=_contentShadowView - In the implementation block
@property (nonatomic,readonly) UIView * contentClipperView;                              //@synthesize contentClipperView=_contentClipperView - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton; 
@property (assign,nonatomic) CGRect closeButtonHitRect;                                  //@synthesize closeButtonHitRect=_closeButtonHitRect - In the implementation block
@property (assign,nonatomic) char closeButtonUsesOutlineStyle;                           //@synthesize closeButtonUsesOutlineStyle=_closeButtonUsesOutlineStyle - In the implementation block
@property (nonatomic,retain) UIView * borrowedContentView;                               //@synthesize borrowedContentView=_borrowedContentView - In the implementation block
@property (assign,nonatomic) float borrowedContentScale;                                 //@synthesize borrowedContentScale=_borrowedContentScale - In the implementation block
@property (nonatomic,retain) UIImage * blankSnapshot;                                    //@synthesize blankSnapshot=_blankSnapshot - In the implementation block
@property (assign,nonatomic) char contentViewNeedsRemoval;                               //@synthesize contentViewNeedsRemoval=_contentViewNeedsRemoval - In the implementation block
@property (assign,getter=isReordering,nonatomic) char reordering;                        //@synthesize reordering=_reordering - In the implementation block
@property (assign,getter=isClosing,nonatomic) char closing;                              //@synthesize closing=_closing - In the implementation block
@property (assign,getter=isFinishedClosing,nonatomic) char finishedClosing;              //@synthesize finishedClosing=_finishedClosing - In the implementation block
@property (assign,nonatomic) int transition;                                             //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) unsigned indexForLayout;                                    //@synthesize indexForLayout=_indexForLayout - In the implementation block
@property (assign,nonatomic) unsigned countForLayout;                                    //@synthesize countForLayout=_countForLayout - In the implementation block
@property (assign,nonatomic) float verticalScrollAdjustment;                             //@synthesize verticalScrollAdjustment=_verticalScrollAdjustment - In the implementation block
+(id)_newContentShadowView;
+(id)titleFont;
-(TiltedTabView *)tiltedTabView;
-(void)setReordering:(char)arg1 ;
-(CGRect)contentClipperBounds;
-(void)_updateCloseButtonImage;
-(CGRect)clippedContentFrame;
-(id)_snapshotToShow;
-(void)setSnapshot:(id)arg1 animated:(char)arg2 ;
-(void)updateSnapshotViewAnimated:(char)arg1 ;
-(void)_updateBorrowedContentFrame;
-(void)_updateTitleLayout;
-(void)updateClipperView;
-(void)setBlankSnapshot:(UIImage *)arg1 ;
-(void)setBorrowedContentScale:(float)arg1 ;
-(void)setBorrowedContentView:(UIView *)arg1 ;
-(void)setCloseButtonUsesOutlineStyle:(char)arg1 ;
-(void)setTiltedTabView:(TiltedTabView *)arg1 ;
-(float)topBackdropHeight;
-(void)setTopBackdropHeight:(float)arg1 ;
-(GradientView *)contentShadowView;
-(UIView *)contentClipperView;
-(CGRect)closeButtonHitRect;
-(void)setCloseButtonHitRect:(CGRect)arg1 ;
-(char)closeButtonUsesOutlineStyle;
-(UIView *)borrowedContentView;
-(float)borrowedContentScale;
-(UIImage *)blankSnapshot;
-(char)contentViewNeedsRemoval;
-(void)setContentViewNeedsRemoval:(char)arg1 ;
-(void)setClosing:(char)arg1 ;
-(char)isFinishedClosing;
-(void)setFinishedClosing:(char)arg1 ;
-(unsigned)indexForLayout;
-(void)setIndexForLayout:(unsigned)arg1 ;
-(unsigned)countForLayout;
-(void)setCountForLayout:(unsigned)arg1 ;
-(float)verticalScrollAdjustment;
-(void)setVerticalScrollAdjustment:(float)arg1 ;
-(char)isReordering;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(TabThumbnailView *)contentView;
-(UIImage *)snapshot;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setSnapshot:(UIImage *)arg1 ;
-(char)isClosing;
-(UIButton *)closeButton;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
#import <UIKit/UIView.h>

@class DRItem, UIImageView, PieProgressIndicatorView;

@interface ThumbnailImageView : UIView {

	DRItem* _item;
	UIImageView* _thumbnailView;
	PieProgressIndicatorView* _progressView;

}

@property (nonatomic,retain) DRItem * item;                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnailView;                          //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (nonatomic,retain) PieProgressIndicatorView * progressView;              //@synthesize progressView=_progressView - In the implementation block
-(void)showGenericImage;
-(void)showProgress:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(DRItem *)item;
-(void)setThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)thumbnailView;
-(void)setProgressView:(PieProgressIndicatorView *)arg1 ;
-(PieProgressIndicatorView *)progressView;
-(void)setItem:(DRItem *)arg1 ;
-(void)updateProgress:(double)arg1 ;
@end

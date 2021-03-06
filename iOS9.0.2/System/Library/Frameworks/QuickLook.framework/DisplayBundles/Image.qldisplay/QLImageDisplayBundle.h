/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Image.qldisplay/Image
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Image/QLScrollableDisplayBundle.h>

@class UIImageView, NSDate;

@interface QLImageDisplayBundle : QLScrollableDisplayBundle {

	UIImageView* _imageView;
	int _loadingIndex;
	NSDate* _imageViewDisplayDate;

}
+(double)allowedLoadingDelay;
-(void)stopTimeLog;
-(void)startTimeLog;
-(void)cancelLoad;
-(void)loadWithHints:(id)arg1 ;
-(char)canCopyToPasteboard;
-(void)didFinishSwiping;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end


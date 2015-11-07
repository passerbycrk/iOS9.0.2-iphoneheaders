/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MNTraceBookmarkSelectorDelegate.h>
#import <Maps/MNTraceControlViewDelegate.h>
#import <Maps/MNTracePlayerObserver.h>
#import <Maps/MNTraceSliderViewDelegate.h>
#import <Maps/MNTestLoggerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNNavigationDebugViewsControllerDelegate;
@class MNNavigationSession, MNTracePlayer, NSTimer, MNTraceControlView, MNTraceSliderView, UIView, MNTraceBookmarkSelector, UITapGestureRecognizer, UILongPressGestureRecognizer, MKMapView, NSString;

@interface MNNavigationDebugViewsController : NSObject <MNTraceBookmarkSelectorDelegate, MNTraceControlViewDelegate, MNTracePlayerObserver, MNTraceSliderViewDelegate, MNTestLoggerDelegate, UIGestureRecognizerDelegate> {

	MNNavigationSession* _navigationSession;
	id<MNNavigationDebugViewsControllerDelegate> _delegate;
	MNTracePlayer* _tracePlayer;
	NSTimer* _hideTraceControlTimer;
	MNTraceControlView* _traceControlView;
	MNTraceSliderView* _traceSliderView;
	UIView* _debugControlsView;
	MNTraceBookmarkSelector* _traceBookmarkSelector;
	char _shouldResumeTracePlayer;
	char _sliderIsEditing;
	UITapGestureRecognizer* _oldBookmarkGestureRecognizer;
	UILongPressGestureRecognizer* _bookmarkGestureRecognizer;
	MKMapView* _mapView;
	char _scrollWasEnabled;
	char _traceControlsAreShowing;
	char _debugViewsWereAdded;
	char _showTraceControlsForStaleLocations;
	char _automaticallyHideTraceControls;

}

@property (nonatomic,retain) NSTimer * hideTraceControlTimer;                      //@synthesize hideTraceControlTimer=_hideTraceControlTimer - In the implementation block
@property (assign,nonatomic) char automaticallyHideTraceControls;                  //@synthesize automaticallyHideTraceControls=_automaticallyHideTraceControls - In the implementation block
@property (assign,nonatomic) char showTraceControlsForStaleLocations;              //@synthesize showTraceControlsForStaleLocations=_showTraceControlsForStaleLocations - In the implementation block
@property (nonatomic,readonly) char isShowingTraceControls;                        //@synthesize traceControlsAreShowing=_traceControlsAreShowing - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                  //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tracePlayer;
-(void)resetHideTraceControlsTimer;
-(char)showTraceControlsForStaleLocations;
-(void)resetTracePlayer;
-(void)setShowTraceControlsForStaleLocations:(char)arg1 ;
-(void)traceSliderView:(id)arg1 editingEndedAtTime:(double)arg2 ;
-(NSTimer *)hideTraceControlTimer;
-(void)tracePlayerDidStart:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 delegate:(id)arg2 ;
-(void)_threeFingerTapBookmarkGesture:(id)arg1 ;
-(void)tracePlayerDidStop:(id)arg1 ;
-(void)traceSliderViewCancelledEditing:(id)arg1 ;
-(char)isShowingTraceControls;
-(float)debugViewHeight;
-(void)testLoggerDidFailToLog:(id)arg1 ;
-(void)_addTraceBookmark;
-(void)prepareToRunNavigation;
-(void)tracePlayerDidPause:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2 ;
-(void)setHideTraceControlTimer:(NSTimer *)arg1 ;
-(void)tracePlayerDidResume:(id)arg1 ;
-(void)_longPressBookmarkGesture:(id)arg1 ;
-(void)hideTraceControls;
-(void)traceBookmarkSelector:(id)arg1 choseGuideMeBookmark:(id)arg2 ;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3 ;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 ;
-(void)setAutomaticallyHideTraceControls:(char)arg1 ;
-(void)traceControlView:(id)arg1 setPlaying:(char)arg2 ;
-(void)showTraceControls;
-(char)automaticallyHideTraceControls;
-(void)traceControlViewJumpedBack:(id)arg1 ;
-(void)addDebugViewsToView:(id)arg1 mapView:(id)arg2 ;
-(void)removeDebugViewsFromView:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 ;
-(void)traceControlView:(id)arg1 setPlaySpeed:(double)arg2 ;
-(void)_sliderDidEndEditing;
-(void)tracePlayerDidStayOnRoute:(id)arg1 ;
-(void)hideTraceControlsAnimated:(char)arg1 ;
-(void)traceControlViewPressedStartLoggingButton:(id)arg1 ;
-(void)traceControlViewPressedBookmarksButton:(id)arg1 ;
-(void)traceSliderViewEditingDidBegin:(id)arg1 ;
-(void)traceControlViewPressedEndLoggingButton:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)dealloc;
-(id)navigator;
@end

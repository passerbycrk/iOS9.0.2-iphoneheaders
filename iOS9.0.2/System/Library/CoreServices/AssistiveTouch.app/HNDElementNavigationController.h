/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManager.h>

@protocol HNDElementNavigationControllerDelegate;
@class SCATFocusContext, NSValue, NSIndexPath, AXElement, UIView, HNDAccessibilityManager;

@interface HNDElementNavigationController : SCATElementManager {

	char _shouldRescanAfterFetch;
	char _shouldRescanFromTopAfterFetch;
	char _shouldScanKeyboardOnAppearance;
	char _menuOpeningElementEnabled;
	id<HNDElementNavigationControllerDelegate> _delegate;
	SCATFocusContext* _currentFocusContext;
	NSValue* _keyboardKeyCenterPoint;
	NSIndexPath* _keyboardIndexPath;
	int _keyboardSelectBehavior;
	AXElement* _lastScannedElementCommunity;
	AXElement* _firstResponder;
	UIView* _menuOpeningElement;

}

@property (assign,nonatomic) id<HNDElementNavigationControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCATFocusContext * currentFocusContext;                                         //@synthesize currentFocusContext=_currentFocusContext - In the implementation block
@property (nonatomic,readonly) char isGroupingEnabled; 
@property (nonatomic,readonly) HNDAccessibilityManager * axManager; 
@property (assign,nonatomic) char shouldRescanAfterFetch;                                                    //@synthesize shouldRescanAfterFetch=_shouldRescanAfterFetch - In the implementation block
@property (assign,nonatomic) char shouldRescanFromTopAfterFetch;                                             //@synthesize shouldRescanFromTopAfterFetch=_shouldRescanFromTopAfterFetch - In the implementation block
@property (nonatomic,retain) NSValue * keyboardKeyCenterPoint;                                               //@synthesize keyboardKeyCenterPoint=_keyboardKeyCenterPoint - In the implementation block
@property (nonatomic,retain) NSIndexPath * keyboardIndexPath;                                                //@synthesize keyboardIndexPath=_keyboardIndexPath - In the implementation block
@property (assign,nonatomic) int keyboardSelectBehavior;                                                     //@synthesize keyboardSelectBehavior=_keyboardSelectBehavior - In the implementation block
@property (nonatomic,retain) AXElement * lastScannedElementCommunity;                                        //@synthesize lastScannedElementCommunity=_lastScannedElementCommunity - In the implementation block
@property (nonatomic,retain) AXElement * firstResponder;                                                     //@synthesize firstResponder=_firstResponder - In the implementation block
@property (assign,nonatomic) char shouldScanKeyboardOnAppearance;                                            //@synthesize shouldScanKeyboardOnAppearance=_shouldScanKeyboardOnAppearance - In the implementation block
@property (assign,getter=isMenuOpeningElementEnabled,nonatomic) char menuOpeningElementEnabled;              //@synthesize menuOpeningElementEnabled=_menuOpeningElementEnabled - In the implementation block
@property (nonatomic,retain) UIView * menuOpeningElement;                                                    //@synthesize menuOpeningElement=_menuOpeningElement - In the implementation block
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2 ;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)focusContextAfterDrillOutOnGroup:(id)arg1 ;
-(id)numberOfItemsInCurrentScanCycle;
-(void)didFetchElements:(id)arg1 foundNewElements:(char)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(char)arg4 ;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(void)scannerWillMakeManagerInactive:(id)arg1 ;
-(UIView *)menuOpeningElement;
-(void)_menuOpeningElementActivated:(id)arg1 ;
-(void)setMenuOpeningElement:(UIView *)arg1 ;
-(HNDAccessibilityManager *)axManager;
-(AXElement *)lastScannedElementCommunity;
-(char)isMenuOpeningElementEnabled;
-(SCATFocusContext *)currentFocusContext;
-(char)shouldRescanFromTopAfterFetch;
-(char)shouldRescanAfterFetch;
-(void)_resetFetchFlags;
-(void)_giveUpWaitingForFetchAfterPause;
-(void)_stopWaitingForFetchAfterTemporaryPause;
-(void)setShouldRescanAfterFetch:(char)arg1 ;
-(void)_pauseScanningTemporarily;
-(void)setShouldRescanFromTopAfterFetch:(char)arg1 ;
-(void)_startWaitingForFetchAfterTemporaryPause;
-(char)_didFocusLastOnKeyboardElement;
-(void)firstResponderDidChange:(id)arg1 ;
-(void)_pauseScanningForLikelyScreenChange;
-(void)setLastScannedElementCommunity:(AXElement *)arg1 ;
-(void)setShouldScanKeyboardOnAppearance:(char)arg1 ;
-(id)_firstKeyboardFocusContext;
-(void)setFirstResponder:(AXElement *)arg1 ;
-(void)setMenuOpeningElementEnabled:(char)arg1 ;
-(void)setCurrentFocusContext:(SCATFocusContext *)arg1 ;
-(void)_trackLastFocusedKeyboardItem:(id)arg1 ;
-(void)_trackLastScannedElementCommunityFromFocusContext:(id)arg1 ;
-(void)_updateMenuOpeningElementEnabledWithFocusContext:(id)arg1 ;
-(void)setKeyboardIndexPath:(NSIndexPath *)arg1 ;
-(void)setKeyboardKeyCenterPoint:(NSValue *)arg1 ;
-(unsigned)_depthForElement:(id)arg1 ;
-(id)_replacementForLastFocusedKeyboardItem;
-(char)shouldScanKeyboardOnAppearance;
-(void)_attemptToRestoreFocusContext:(id)arg1 scannerManager:(id)arg2 ;
-(char)_isKeyboardContainerElement:(id)arg1 allowKeyboardContainerItself:(char)arg2 ;
-(NSIndexPath *)keyboardIndexPath;
-(NSValue *)keyboardKeyCenterPoint;
-(id)_indexPathForKeyboardElement:(id)arg1 ;
-(id)_keyboardElementForIndexPath:(id)arg1 ;
-(char)_isScanningKeyboardContainer:(id)arg1 ;
-(void)setKeyboardSelectBehavior:(int)arg1 ;
-(int)keyboardSelectBehavior;
-(void)appTransitionDidOccur:(id)arg1 ;
-(void)screenDidChange:(id)arg1 ;
-(void)alertDidAppear:(id)arg1 ;
-(void)screenChangingButtonWasPressed:(id)arg1 ;
-(void)scannerManager:(id)arg1 didActivateElement:(id)arg2 ;
-(id)nextFocusContextAfterDismissingMenuForElement:(id)arg1 ;
-(void)setDelegate:(id<HNDElementNavigationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<HNDElementNavigationControllerDelegate>)delegate;
-(id)identifier;
-(AXElement *)firstResponder;
-(char)isGroupingEnabled;
-(void)orientationDidChange:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UICollectionViewAccessibility_super.h>

@interface UICollectionViewAccessibility : __UICollectionViewAccessibility_super
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_accessibilityHasOrderedChildren;
-(char)isAccessibilityOpaqueElementProvider;
-(id)accessibilityCollectionCellElementForIndexPath:(id)arg1 ;
-(id)_accessibilitySortedElementsWithin;
-(char)_accessibilityShouldDisableCellReuse;
-(id)_accessibilityFuzzyHitTest:(CGPoint*)arg1 withEvent:(id)arg2 ;
-(char)_accessibilityOpaqueElementScrollsContentIntoView;
-(id)accessibilityCellForRowAtIndexPath:(id)arg1 ;
-(id)_accessibilityUserTestingVisibleCells;
-(id)_accessibilityScannerGroupElements;
-(char)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
-(void)setAccessibilityShouldSpeakItemReorderEvents:(char)arg1 ;
-(char)accessibilityCollectionViewBehavesLikeUIViewAccessibility;
-(void)_accessibilityInitializeInternalData:(id)arg1 ;
-(void)_resetAXData;
-(char)accessibilityShouldSpeakItemReorderEvents;
-(char)_accessibilityShouldUseCollectionViewCellAccessibilityElements;
-(id)accessibilityCreatePrepareCellForIndexPath:(id)arg1 ;
-(id)axData;
-(int)_axGlobalRowForIndexPath:(id)arg1 ;
-(char)_accessibilityOverridesContainerProtocol;
-(id)_accessibilityOtherCollectionViewItems;
-(id)_axIndexPathForGlobalRow:(int)arg1 ;
-(char)_accessibilityDescendantElementAtIndexPathIsValid:(id)arg1 ;
-(id)_accessibilityIndexPathOfDirectSubviewForDescendantElement:(id)arg1 subviewKind:(int*)arg2 ;
-(void)_accessibilityEnsureViewsAroundAreLoaded;
-(CGRect)_accessibilityBoundsOfCellsToLoad;
-(void)setAccessibilityShouldBypassColletionViewAccessibility:(char)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(CGRect)_visibleBounds;
-(void)moveSection:(int)arg1 toSection:(int)arg2 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(unsigned long long)accessibilityTraits;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(id)_dequeueReusableViewOfKind:(id)arg1 withIdentifier:(id)arg2 forIndexPath:(id)arg3 viewCategory:(unsigned)arg4 ;
-(void)insertSections:(id)arg1 ;
-(void)deleteSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
@end


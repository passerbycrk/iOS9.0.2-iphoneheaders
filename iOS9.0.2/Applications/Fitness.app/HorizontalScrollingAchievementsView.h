/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol HorizontalScrollingAchievementsView;
@class UILabel, UIPageControl, UIScrollView, NSMutableArray, NSArray, NSString;

@interface HorizontalScrollingAchievementsView : UIView <UIScrollViewDelegate> {

	UILabel* _achievementTitleLabel;
	UILabel* _achievementDetailLabel;
	UIPageControl* _pageControl;
	UIScrollView* _scrollView;
	NSMutableArray* _achievementViews;
	char _needsSubviewRebuild;
	char _pagingEnabled;
	char _showsAchievementTitles;
	NSArray* _achievements;
	int _sizeClass;
	id<HorizontalScrollingAchievementsView> _delegate;
	UIEdgeInsets _scrollViewContentInset;

}

@property (nonatomic,copy) NSArray * achievements;                                                 //@synthesize achievements=_achievements - In the implementation block
@property (assign,nonatomic) char pagingEnabled;                                                   //@synthesize pagingEnabled=_pagingEnabled - In the implementation block
@property (assign,nonatomic) char showsAchievementTitles;                                          //@synthesize showsAchievementTitles=_showsAchievementTitles - In the implementation block
@property (assign,nonatomic) int sizeClass;                                                        //@synthesize sizeClass=_sizeClass - In the implementation block
@property (assign,nonatomic) UIEdgeInsets scrollViewContentInset;                                  //@synthesize scrollViewContentInset=_scrollViewContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<HorizontalScrollingAchievementsView> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_scrollViewTapped:(id)arg1 ;
-(void)_setNeedsSubviewRebuild;
-(id)viewForAchievement:(id)arg1 ;
-(void)_updateCurrentPageDetails;
-(void)_showAchievementTitleLabel;
-(void)_hideAchievementTitleLabel;
-(void)_showPageControl;
-(void)_hidePageControl;
-(void)_rebuildAchievementViews;
-(id)_detailLabelColor;
-(id)_titleLabelFont;
-(id)_detailLabelFont;
-(int)sizeClass;
-(void)setSizeClass:(int)arg1 ;
-(id)_achievementAtScrollViewPoint:(CGPoint)arg1 ;
-(void)_getPageWidth:(float*)arg1 nearestPageIndex:(unsigned*)arg2 forScrollViewContentOffsetX:(float)arg3 ;
-(void)_rebuildSubviewsIfNeeded;
-(void)setShowsAchievementTitles:(char)arg1 ;
-(void)setScrollViewContentInset:(UIEdgeInsets)arg1 ;
-(void)scrollToAchievement:(id)arg1 ;
-(id)achievementAtPoint:(CGPoint)arg1 ;
-(char)pagingEnabled;
-(char)showsAchievementTitles;
-(UIEdgeInsets)scrollViewContentInset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<HorizontalScrollingAchievementsView>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<HorizontalScrollingAchievementsView>)delegate;
-(void)setPagingEnabled:(char)arg1 ;
-(NSArray *)achievements;
-(void)setAchievements:(NSArray *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryAdaptiveViewConfiguration.h>

@class MusicLibraryRecentlyAddedCollectionViewConfiguration;

@interface MusicLibraryRecentlyAddedViewConfiguration : MusicLibraryAdaptiveViewConfiguration {

	MusicLibraryRecentlyAddedCollectionViewConfiguration* _collectionViewConfiguration;
	char _shouldForwardBasePropertyValues;

}

@property (nonatomic,readonly) unsigned entityLimit; 
+(unsigned)defaultEntityLimit;
-(unsigned)entityLimit;
-(void)setIconName:(id)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2 ;
-(id)entityViewDescriptor;
-(id)initWithEntityLimit:(unsigned)arg1 ;
-(void)setUserActivityItemTypes:(id)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
@end

/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>

@protocol MapsDebugViewControllerDelegate;
@class NSMutableArray;

@interface PerformanceDebugController : AuxiliaryDebugViewController {

	NSMutableArray* _tests;
	id<MapsDebugViewControllerDelegate> _delegate;

}
+(id)navigationDestinationTitle;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(id)title;
@end


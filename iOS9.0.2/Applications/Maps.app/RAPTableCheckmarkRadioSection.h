/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>

@class NSString, NSArray;

@interface RAPTableCheckmarkRadioSection : RAPTablePartSection {

	id _owner;
	Class _defaultCellClass;
	/*^block*/id _dequeue;
	/*^block*/id _configure;
	/*^block*/id _selection;
	/*^block*/id _presentOverflow;
	NSString* _overflowTitleNoValues;
	NSString* _overflowTitleWithValues;
	char _selectedValueIsOverflowSelection;
	char _isDequeueingCellForOverflowSelection;
	char _showsOverflowCell;
	NSArray* _values;
	id _selectedValue;

}

@property (nonatomic,copy) NSArray * values;                      //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) id selectedValue;                    //@synthesize selectedValue=_selectedValue - In the implementation block
@property (assign,nonatomic) char showsOverflowCell;              //@synthesize showsOverflowCell=_showsOverflowCell - In the implementation block
-(id)cellForRowAtIndex:(int)arg1 ;
-(int)rowsCount;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
-(void)registerReuseIdentifiersForCells;
-(void)configureCell:(id)arg1 forValue:(id)arg2 ;
-(void)selectedValueDidChange;
-(id)dequeueCellForValue:(id)arg1 ;
-(Class)defaultCellClass;
-(id)selectedValue;
-(void)setShowsOverflowCell:(char)arg1 ;
-(void)configureCell:(id)arg1 forValue:(id)arg2 isOverflowSelection:(char)arg3 ;
-(int)_overflowCellIndex;
-(void)setSelectedValue:(id)arg1 ;
-(void)setOverflowCellTitle:(id)arg1 forDisplayWhenOtherValuesPresent:(char)arg2 ;
-(char)showsOverflowCell;
-(id)initWithOwner:(id)arg1 initialValues:(id)arg2 initialSelectedValue:(id)arg3 defaultCellClass:(Class)arg4 dequeueForValue:(/*^block*/id)arg5 configureForValue:(/*^block*/id)arg6 selection:(/*^block*/id)arg7 presentOverflow:(/*^block*/id)arg8 ;
-(int)_overflowSelectionCellIndex;
-(id)dequeueCellForValue:(id)arg1 isOverflowSelection:(char)arg2 ;
-(id)overflowCellTitleWithOtherValuesPresent:(char)arg1 ;
-(id)initWithOwner:(id)arg1 defaultCellClass:(Class)arg2 dequeueForValue:(/*^block*/id)arg3 configureForValue:(/*^block*/id)arg4 selection:(/*^block*/id)arg5 presentOverflow:(/*^block*/id)arg6 ;
-(id)_effectiveOverflowCellTitle;
-(void)presentOverflow;
-(id)init;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
@end

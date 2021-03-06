/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/AVQueueFeeder.h>

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {

	NSMutableArray* _items;

}
-(unsigned)itemCount;
-(id)itemForIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)shuffleWithCurrentIndex:(unsigned)arg1 ;
-(unsigned)numberOfPaths;
-(id)pathAtIndex:(unsigned)arg1 ;
@end

